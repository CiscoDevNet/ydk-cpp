
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_189.hpp"
#include "Cisco_IOS_XE_native_190.hpp"
#include "Cisco_IOS_XE_native_191.hpp"
#include "Cisco_IOS_XE_native_192.hpp"
#include "Cisco_IOS_XE_native_193.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::NoMask()
    :
    number{YType::str, "number"},
    route_map{YType::str, "route-map"},
    backdoor{YType::empty, "backdoor"},
    evpn{YType::empty, "evpn"}
{

    yang_name = "no-mask"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::~NoMask()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| route_map.is_set
	|| backdoor.is_set
	|| evpn.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(evpn.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-mask";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Network::NoMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "route-map" || name == "backdoor" || name == "evpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Redistribute()
    :
    application(nullptr) // presence node
    , bgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_>())
    , connected(nullptr) // presence node
    , dvmrp(nullptr) // presence node
    , eigrp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp>())
    , isis(nullptr) // presence node
    , lisp(nullptr) // presence node
    , iso_igrp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp>())
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , ospf(this, {"id"})
    , ospfv3(this, {"id"})
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
{
    bgp->parent = this;
    eigrp->parent = this;
    iso_igrp->parent = this;

    yang_name = "redistribute"; yang_parent_name = "ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::~Redistribute()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (dvmrp !=  nullptr && dvmrp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<ospf.len(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.len(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (dvmrp !=  nullptr && dvmrp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "dvmrp")
    {
        if(dvmrp == nullptr)
        {
            dvmrp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp>();
        }
        return dvmrp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf>();
        c->parent = this;
        ospf.append(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3>();
        c->parent = this;
        ospfv3.append(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

    if(dvmrp != nullptr)
    {
        children["dvmrp"] = dvmrp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
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
    for (auto c : ospf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ospfv3.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "dvmrp" || name == "eigrp" || name == "isis" || name == "lisp" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Application()
    :
    name(this, {"name"})
{

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::~Application()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::has_operation() const
{
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name>();
        c->parent = this;
        name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::Name()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::~Name()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::Bgp_()
    :
    as_no{YType::str, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::Connected()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::Dvmrp()
    :
    route_map{YType::str, "route-map"},
    metric{YType::uint32, "metric"}
{

    yang_name = "dvmrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::~Dvmrp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| metric.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dvmrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Dvmrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "metric")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::Eigrp()
    :
    as_no{YType::uint16, "as-no"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Isis()
    :
    isis_area(this, {"name"})
    , default_(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default>())
{
    default_->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.len(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.append(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "default")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    ip{YType::empty, "ip"},
    clns{YType::empty, "clns"},
    routes{YType::enumeration, "routes"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| ip.is_set
	|| clns.is_set
	|| routes.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "ip" || name == "clns" || name == "routes" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::Default()
    :
    ip{YType::empty, "ip"},
    clns{YType::empty, "clns"},
    routes{YType::enumeration, "routes"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "default"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::~Default()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| clns.is_set
	|| routes.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(clns.yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (clns.is_set || is_set(clns.yfilter)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clns")
    {
        clns = value;
        clns.value_namespace = name_space;
        clns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "clns")
    {
        clns.yfilter = yfilter;
    }
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "clns" || name == "routes" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrp()
    :
    iso_igrp_area(this, {"name"})
    , default_(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default>())
{
    default_->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iso_igrp_area.len(); index++)
    {
        if(iso_igrp_area[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_igrp_area.len(); index++)
    {
        if(iso_igrp_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-igrp-area")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea>();
        c->parent = this;
        iso_igrp_area.append(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : iso_igrp_area.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-igrp-area" || name == "default")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::IsoIgrpArea()
    :
    name{YType::str, "name"},
    route_map{YType::str, "route-map"},
    metric{YType::uint32, "metric"}
{

    yang_name = "iso-igrp-area"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::~IsoIgrpArea()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| route_map.is_set
	|| metric.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-area";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::IsoIgrpArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "route-map" || name == "metric")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::Default()
    :
    route_map{YType::str, "route-map"},
    metric{YType::uint32, "metric"}
{

    yang_name = "default"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::~Default()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| metric.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::IsoIgrp::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "metric")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::Mobile()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::Odr()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Ospf()
    :
    id{YType::uint16, "id"}
        ,
    vrf(this, {"name"})
    , non_vrf(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf>())
{
    non_vrf->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return id.is_set
	|| (non_vrf !=  nullptr && non_vrf->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (non_vrf !=  nullptr && non_vrf->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    if(child_yang_name == "non-vrf")
    {
        if(non_vrf == nullptr)
        {
            non_vrf = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf>();
        }
        return non_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(non_vrf != nullptr)
    {
        children["non-vrf"] = non_vrf;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "non-vrf" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Vrf_()
    :
    name{YType::str, "name"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
        ,
    match(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match>())
{
    match->parent = this;

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::~Vrf_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::Match()
{

    yang_name = "match"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::~Match()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::Vrf_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::NonVrf()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
        ,
    match(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match>())
{
    match->parent = this;

    yang_name = "non-vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::~NonVrf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::Match()
    :
    internal{YType::empty, "internal"},
    external{YType::enumeration, "external"},
    external2{YType::enumeration, "external2"},
    nssa_external{YType::enumeration, "nssa-external"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "match"; yang_parent_name = "non-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::~Match()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| external.is_set
	|| external2.is_set
	|| nssa_external.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(external2.yfilter)
	|| ydk::is_set(nssa_external.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external2.is_set || is_set(external2.yfilter)) leaf_name_data.push_back(external2.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.yfilter)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external2")
    {
        external2 = value;
        external2.value_namespace = name_space;
        external2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
        nssa_external.value_namespace = name_space;
        nssa_external.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "external2")
    {
        external2.yfilter = yfilter;
    }
    if(value_path == "nssa-external")
    {
        nssa_external.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospf::NonVrf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "external2" || name == "nssa-external" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Ospfv3()
    :
    id{YType::uint16, "id"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
        ,
    match(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| metric.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::Match()
    :
    internal{YType::empty, "internal"},
    external{YType::enumeration, "external"},
    external2{YType::enumeration, "external2"},
    nssa_external{YType::enumeration, "nssa-external"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| external.is_set
	|| external2.is_set
	|| nssa_external.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(external2.yfilter)
	|| ydk::is_set(nssa_external.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external2.is_set || is_set(external2.yfilter)) leaf_name_data.push_back(external2.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.yfilter)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external2")
    {
        external2 = value;
        external2.value_namespace = name_space;
        external2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
        nssa_external.value_namespace = name_space;
        nssa_external.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "external2")
    {
        external2.yfilter = yfilter;
    }
    if(value_path == "nssa-external")
    {
        nssa_external.yfilter = yfilter;
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

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "external2" || name == "nssa-external" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::Rip()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"},
    name{YType::str, "name"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set
	|| name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map" || name == "name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Static()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
        ,
    clns(nullptr) // presence node
    , ip(nullptr) // presence node
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::~Static()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::Clns()
    :
    route_map{YType::str, "route-map"},
    metric{YType::uint32, "metric"}
{

    yang_name = "clns"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::~Clns()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| metric.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "metric")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::Ip()
    :
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "ip"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::~Ip()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Static::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(context != nullptr)
    {
        children["context"] = context;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord>();
        c->parent = this;
        context_word.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : context_word.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::TableMap()
    :
    name{YType::str, "name"},
    filter{YType::empty, "filter"}
{

    yang_name = "table-map"; yang_parent_name = "ipv4-multicast"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::~TableMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| filter.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(filter.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::TableMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "filter")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Ipv4Flowspec()
    :
    default_metric{YType::uint32, "default-metric"}
        ,
    bgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation>())
    , import(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import>())
    , maximum_paths(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup>())
    , neighbor(this, {"id"})
    , network(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network>())
    , snmp(nullptr) // presence node
{
    bgp->parent = this;
    default_information->parent = this;
    import->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;
    network->parent = this;

    yang_name = "ipv4-flowspec"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::~Ipv4Flowspec()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return default_metric.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-flowspec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network>();
        }
        return network;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "default-information" || name == "import" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "network" || name == "snmp" || name == "default-metric")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::Bgp_()
    :
    route_map(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap>())
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer>())
{
    route_map->parent = this;
    slow_peer->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map" || name == "slow-peer")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{

    yang_name = "route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Import()
    :
    path(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path>())
    , vpnv4(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4>())
    , vpnv6(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6>())
    , l2vpn(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn>())
{
    path->parent = this;
    vpnv4->parent = this;
    vpnv6->parent = this;
    l2vpn->parent = this;

    yang_name = "import"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::~Import()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::has_data() const
{
    if (is_presence_container) return true;
    return (path !=  nullptr && path->has_data())
	|| (vpnv4 !=  nullptr && vpnv4->has_data())
	|| (vpnv6 !=  nullptr && vpnv6->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::has_operation() const
{
    return is_set(yfilter)
	|| (path !=  nullptr && path->has_operation())
	|| (vpnv4 !=  nullptr && vpnv4->has_operation())
	|| (vpnv6 !=  nullptr && vpnv6->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path>();
        }
        return path;
    }

    if(child_yang_name == "vpnv4")
    {
        if(vpnv4 == nullptr)
        {
            vpnv4 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4>();
        }
        return vpnv4;
    }

    if(child_yang_name == "vpnv6")
    {
        if(vpnv6 == nullptr)
        {
            vpnv6 = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6>();
        }
        return vpnv6;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(vpnv4 != nullptr)
    {
        children["vpnv4"] = vpnv4;
    }

    if(vpnv6 != nullptr)
    {
        children["vpnv6"] = vpnv6;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path" || name == "vpnv4" || name == "vpnv6" || name == "l2vpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Path()
    :
    limit{YType::uint8, "limit"}
        ,
    selection(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection>())
{
    selection->parent = this;

    yang_name = "path"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::~Path()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| (selection !=  nullptr && selection->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| (selection !=  nullptr && selection->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "selection")
    {
        if(selection == nullptr)
        {
            selection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection>();
        }
        return selection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(selection != nullptr)
    {
        children["selection"] = selection;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "selection" || name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::Selection()
    :
    all{YType::empty, "all"}
{

    yang_name = "selection"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::~Selection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Path::Selection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::Vpnv4()
    :
    unicast{YType::empty, "unicast"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "vpnv4"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::~Vpnv4()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::Vpnv6()
    :
    unicast{YType::empty, "unicast"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "vpnv6"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::~Vpnv6()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::has_data() const
{
    if (is_presence_container) return true;
    return unicast.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::Vpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::L2vpn()
    :
    evpn{YType::empty, "evpn"},
    re_originate{YType::empty, "re-originate"}
{

    yang_name = "l2vpn"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::~L2vpn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return evpn.is_set
	|| re_originate.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn.yfilter)
	|| ydk::is_set(re_originate.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());
    if (re_originate.is_set || is_set(re_originate.yfilter)) leaf_name_data.push_back(re_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "re-originate")
    {
        re_originate = value;
        re_originate.value_namespace = name_space;
        re_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
    if(value_path == "re-originate")
    {
        re_originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Import::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn" || name == "re-originate")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::MaximumPaths()
    :
    ebgp{YType::uint16, "ebgp"},
    eibgp{YType::uint16, "eibgp"}
        ,
    ibgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp>())
    , external_rtfilter(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter>())
{
    ibgp->parent = this;
    external_rtfilter->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::has_data() const
{
    if (is_presence_container) return true;
    return ebgp.is_set
	|| eibgp.is_set
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebgp.yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebgp.is_set || is_set(ebgp.yfilter)) leaf_name_data.push_back(ebgp.get_name_leafdata());
    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebgp")
    {
        ebgp = value;
        ebgp.value_namespace = name_space;
        ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebgp")
    {
        ebgp.yfilter = yfilter;
    }
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibgp" || name == "external-rtfilter" || name == "ebgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    peer_group{YType::empty, "peer-group"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    remote_as{YType::str, "remote-as"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , ebgp_multihop(nullptr) // presence node
    , fall_over(nullptr) // presence node
    , ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode>())
    , inherit(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit>())
    , local_as(nullptr) // presence node
    , log_neighbor_changes(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , password(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password>())
    , path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute>())
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer>())
    , timers(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers>())
    , transport(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport>())
    , ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity>())
    , update_source(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource>())
{
    ha_mode->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    slow_peer->parent = this;
    timers->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| peer_group.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| next_hop_unchanged.is_set
	|| remote_as.is_set
	|| route_reflector_client.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(peer_group.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (peer_group.is_set || is_set(peer_group.yfilter)) leaf_name_data.push_back(peer_group.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap>();
        c->parent = this;
        route_map.append(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        children["next-hop-self"] = next_hop_self;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(remove_private_as != nullptr)
    {
        children["remove-private-as"] = remove_private_as;
    }

    count = 0;
    for (auto c : route_map.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-group")
    {
        peer_group = value;
        peer_group.value_namespace = name_space;
        peer_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "peer-group")
    {
        peer_group.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "ebgp-multihop" || name == "fall-over" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "next-hop-self" || name == "password" || name == "path-attribute" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "timers" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "peer-group" || name == "activate" || name == "advertisement-interval" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "next-hop-unchanged" || name == "remote-as" || name == "route-reflector-client" || name == "shutdown" || name == "soft-reconfiguration" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::FallOver()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::Bfd()
    :
    multi_hop{YType::empty, "multi-hop"},
    single_hop{YType::empty, "single-hop"},
    check_control_plane_failure{YType::empty, "check-control-plane-failure"},
    strict_mode{YType::empty, "strict-mode"}
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return multi_hop.is_set
	|| single_hop.is_set
	|| check_control_plane_failure.is_set
	|| strict_mode.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_hop.yfilter)
	|| ydk::is_set(single_hop.yfilter)
	|| ydk::is_set(check_control_plane_failure.yfilter)
	|| ydk::is_set(strict_mode.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_hop.is_set || is_set(multi_hop.yfilter)) leaf_name_data.push_back(multi_hop.get_name_leafdata());
    if (single_hop.is_set || is_set(single_hop.yfilter)) leaf_name_data.push_back(single_hop.get_name_leafdata());
    if (check_control_plane_failure.is_set || is_set(check_control_plane_failure.yfilter)) leaf_name_data.push_back(check_control_plane_failure.get_name_leafdata());
    if (strict_mode.is_set || is_set(strict_mode.yfilter)) leaf_name_data.push_back(strict_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-hop")
    {
        multi_hop = value;
        multi_hop.value_namespace = name_space;
        multi_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop")
    {
        single_hop = value;
        single_hop.value_namespace = name_space;
        single_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure = value;
        check_control_plane_failure.value_namespace = name_space;
        check_control_plane_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-mode")
    {
        strict_mode = value;
        strict_mode.value_namespace = name_space;
        strict_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-hop")
    {
        multi_hop.yfilter = yfilter;
    }
    if(value_path == "single-hop")
    {
        single_hop.yfilter = yfilter;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure.yfilter = yfilter;
    }
    if(value_path == "strict-mode")
    {
        strict_mode.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-hop" || name == "single-hop" || name == "check-control-plane-failure" || name == "strict-mode")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
    , sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "graceful-restart"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard>())
    , treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return hops.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::UpdateSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    remote_as{YType::str, "remote-as"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    cluster_id{YType::str, "cluster-id"},
    description{YType::str, "description"},
    disable_connected_check{YType::empty, "disable-connected-check"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    shutdown{YType::empty, "shutdown"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    unsuppress_map{YType::str, "unsuppress-map"},
    version{YType::uint16, "version"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , ebgp_multihop(nullptr) // presence node
    , fall_over(nullptr) // presence node
    , ha_mode(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode>())
    , inherit(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit>())
    , local_as(nullptr) // presence node
    , log_neighbor_changes(nullptr) // presence node
    , maximum_prefix(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , password(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password>())
    , path_attribute(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute>())
    , peer_group(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer>())
    , timers(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers>())
    , transport(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport>())
    , ttl_security(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity>())
    , update_source(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource>())
{
    ha_mode->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    password->parent = this;
    path_attribute->parent = this;
    slow_peer->parent = this;
    timers->parent = this;
    transport->parent = this;
    ttl_security->parent = this;
    update_source->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| remote_as.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| cluster_id.is_set
	|| description.is_set
	|| disable_connected_check.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| shutdown.is_set
	|| soft_reconfiguration.is_set
	|| unsuppress_map.is_set
	|| version.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_data())
	|| (fall_over !=  nullptr && fall_over->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (local_as !=  nullptr && local_as->has_data())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (path_attribute !=  nullptr && path_attribute->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data())
	|| (update_source !=  nullptr && update_source->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(disable_connected_check.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (ebgp_multihop !=  nullptr && ebgp_multihop->has_operation())
	|| (fall_over !=  nullptr && fall_over->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (local_as !=  nullptr && local_as->has_operation())
	|| (log_neighbor_changes !=  nullptr && log_neighbor_changes->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (path_attribute !=  nullptr && path_attribute->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation())
	|| (update_source !=  nullptr && update_source->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (disable_connected_check.is_set || is_set(disable_connected_check.yfilter)) leaf_name_data.push_back(disable_connected_check.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "ebgp-multihop")
    {
        if(ebgp_multihop == nullptr)
        {
            ebgp_multihop = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop>();
        }
        return ebgp_multihop;
    }

    if(child_yang_name == "fall-over")
    {
        if(fall_over == nullptr)
        {
            fall_over = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver>();
        }
        return fall_over;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "local-as")
    {
        if(local_as == nullptr)
        {
            local_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs>();
        }
        return local_as;
    }

    if(child_yang_name == "log-neighbor-changes")
    {
        if(log_neighbor_changes == nullptr)
        {
            log_neighbor_changes = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges>();
        }
        return log_neighbor_changes;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password>();
        }
        return password;
    }

    if(child_yang_name == "path-attribute")
    {
        if(path_attribute == nullptr)
        {
            path_attribute = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute>();
        }
        return path_attribute;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap>();
        c->parent = this;
        route_map.append(c);
        return c;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity>();
        }
        return ttl_security;
    }

    if(child_yang_name == "update-source")
    {
        if(update_source == nullptr)
        {
            update_source = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource>();
        }
        return update_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allowas_in != nullptr)
    {
        children["allowas-in"] = allowas_in;
    }

    if(ebgp_multihop != nullptr)
    {
        children["ebgp-multihop"] = ebgp_multihop;
    }

    if(fall_over != nullptr)
    {
        children["fall-over"] = fall_over;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(local_as != nullptr)
    {
        children["local-as"] = local_as;
    }

    if(log_neighbor_changes != nullptr)
    {
        children["log-neighbor-changes"] = log_neighbor_changes;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        children["next-hop-self"] = next_hop_self;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(path_attribute != nullptr)
    {
        children["path-attribute"] = path_attribute;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    if(remove_private_as != nullptr)
    {
        children["remove-private-as"] = remove_private_as;
    }

    count = 0;
    for (auto c : route_map.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(send_community != nullptr)
    {
        children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    if(update_source != nullptr)
    {
        children["update-source"] = update_source;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check = value;
        disable_connected_check.value_namespace = name_space;
        disable_connected_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "disable-connected-check")
    {
        disable_connected_check.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "ebgp-multihop" || name == "fall-over" || name == "ha-mode" || name == "inherit" || name == "local-as" || name == "log-neighbor-changes" || name == "maximum-prefix" || name == "next-hop-self" || name == "password" || name == "path-attribute" || name == "peer-group" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "timers" || name == "transport" || name == "ttl-security" || name == "update-source" || name == "id" || name == "remote-as" || name == "activate" || name == "advertisement-interval" || name == "cluster-id" || name == "description" || name == "disable-connected-check" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "shutdown" || name == "soft-reconfiguration" || name == "unsuppress-map" || name == "version" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::EbgpMultihop()
    :
    max_hop{YType::uint8, "max-hop"}
{

    yang_name = "ebgp-multihop"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::~EbgpMultihop()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::has_data() const
{
    if (is_presence_container) return true;
    return max_hop.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_hop.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-multihop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_hop.is_set || is_set(max_hop.yfilter)) leaf_name_data.push_back(max_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-hop")
    {
        max_hop = value;
        max_hop.value_namespace = name_space;
        max_hop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-hop")
    {
        max_hop.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::EbgpMultihop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-hop")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::FallOver()
    :
    route_map_name{YType::str, "route-map-name"}
        ,
    bfd(nullptr) // presence node
{

    yang_name = "fall-over"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::~FallOver()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::has_data() const
{
    if (is_presence_container) return true;
    return route_map_name.is_set
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map_name.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fall-over";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::Bfd()
    :
    multi_hop{YType::empty, "multi-hop"},
    single_hop{YType::empty, "single-hop"},
    check_control_plane_failure{YType::empty, "check-control-plane-failure"},
    strict_mode{YType::empty, "strict-mode"}
{

    yang_name = "bfd"; yang_parent_name = "fall-over"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::~Bfd()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return multi_hop.is_set
	|| single_hop.is_set
	|| check_control_plane_failure.is_set
	|| strict_mode.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multi_hop.yfilter)
	|| ydk::is_set(single_hop.yfilter)
	|| ydk::is_set(check_control_plane_failure.yfilter)
	|| ydk::is_set(strict_mode.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multi_hop.is_set || is_set(multi_hop.yfilter)) leaf_name_data.push_back(multi_hop.get_name_leafdata());
    if (single_hop.is_set || is_set(single_hop.yfilter)) leaf_name_data.push_back(single_hop.get_name_leafdata());
    if (check_control_plane_failure.is_set || is_set(check_control_plane_failure.yfilter)) leaf_name_data.push_back(check_control_plane_failure.get_name_leafdata());
    if (strict_mode.is_set || is_set(strict_mode.yfilter)) leaf_name_data.push_back(strict_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multi-hop")
    {
        multi_hop = value;
        multi_hop.value_namespace = name_space;
        multi_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "single-hop")
    {
        single_hop = value;
        single_hop.value_namespace = name_space;
        single_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure = value;
        check_control_plane_failure.value_namespace = name_space;
        check_control_plane_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-mode")
    {
        strict_mode = value;
        strict_mode.value_namespace = name_space;
        strict_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multi-hop")
    {
        multi_hop.yfilter = yfilter;
    }
    if(value_path == "single-hop")
    {
        single_hop.yfilter = yfilter;
    }
    if(value_path == "check-control-plane-failure")
    {
        check_control_plane_failure.yfilter = yfilter;
    }
    if(value_path == "strict-mode")
    {
        strict_mode.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::FallOver::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multi-hop" || name == "single-hop" || name == "check-control-plane-failure" || name == "strict-mode")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::HaMode()
    :
    graceful_restart(nullptr) // presence node
    , sso(nullptr) // presence node
{

    yang_name = "ha-mode"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::has_data() const
{
    if (is_presence_container) return true;
    return (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::GracefulRestart()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "graceful-restart"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::Sso()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "sso"; yang_parent_name = "ha-mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::LocalAs()
    :
    as_no{YType::str, "as-no"},
    no_prepend{YType::empty, "no-prepend"},
    replace_as{YType::empty, "replace-as"},
    dual_as{YType::empty, "dual-as"}
{

    yang_name = "local-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::~LocalAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::has_data() const
{
    if (is_presence_container) return true;
    return as_no.is_set
	|| no_prepend.is_set
	|| replace_as.is_set
	|| dual_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_no.yfilter)
	|| ydk::is_set(no_prepend.yfilter)
	|| ydk::is_set(replace_as.yfilter)
	|| ydk::is_set(dual_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_no.is_set || is_set(as_no.yfilter)) leaf_name_data.push_back(as_no.get_name_leafdata());
    if (no_prepend.is_set || is_set(no_prepend.yfilter)) leaf_name_data.push_back(no_prepend.get_name_leafdata());
    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());
    if (dual_as.is_set || is_set(dual_as.yfilter)) leaf_name_data.push_back(dual_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-no")
    {
        as_no = value;
        as_no.value_namespace = name_space;
        as_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-prepend")
    {
        no_prepend = value;
        no_prepend.value_namespace = name_space;
        no_prepend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-as")
    {
        dual_as = value;
        dual_as.value_namespace = name_space;
        dual_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-no")
    {
        as_no.yfilter = yfilter;
    }
    if(value_path == "no-prepend")
    {
        no_prepend.yfilter = yfilter;
    }
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
    if(value_path == "dual-as")
    {
        dual_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LocalAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-no" || name == "no-prepend" || name == "replace-as" || name == "dual-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::LogNeighborChanges()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "log-neighbor-changes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::~LogNeighborChanges()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-neighbor-changes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::LogNeighborChanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::~Password()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::has_data() const
{
    if (is_presence_container) return true;
    return enctype.is_set
	|| text.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::PathAttribute()
    :
    discard(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard>())
    , treat_as_withdraw(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw>())
{
    discard->parent = this;
    treat_as_withdraw->parent = this;

    yang_name = "path-attribute"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::~PathAttribute()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::has_data() const
{
    if (is_presence_container) return true;
    return (discard !=  nullptr && discard->has_data())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::has_operation() const
{
    return is_set(yfilter)
	|| (discard !=  nullptr && discard->has_operation())
	|| (treat_as_withdraw !=  nullptr && treat_as_withdraw->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discard")
    {
        if(discard == nullptr)
        {
            discard = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard>();
        }
        return discard;
    }

    if(child_yang_name == "treat-as-withdraw")
    {
        if(treat_as_withdraw == nullptr)
        {
            treat_as_withdraw = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw>();
        }
        return treat_as_withdraw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(discard != nullptr)
    {
        children["discard"] = discard;
    }

    if(treat_as_withdraw != nullptr)
    {
        children["treat-as-withdraw"] = treat_as_withdraw;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discard" || name == "treat-as-withdraw")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Discard()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "discard"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::~Discard()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "discard"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::Discard::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::TreatAsWithdraw()
    :
    attibute_type(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>())
    , range(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range>())
{
    attibute_type->parent = this;
    range->parent = this;

    yang_name = "treat-as-withdraw"; yang_parent_name = "path-attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::~TreatAsWithdraw()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::has_data() const
{
    if (is_presence_container) return true;
    return (attibute_type !=  nullptr && attibute_type->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::has_operation() const
{
    return is_set(yfilter)
	|| (attibute_type !=  nullptr && attibute_type->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "treat-as-withdraw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attibute_type")
    {
        if(attibute_type == nullptr)
        {
            attibute_type = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType>();
        }
        return attibute_type;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attibute_type != nullptr)
    {
        children["attibute_type"] = attibute_type;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attibute_type" || name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::AttibuteType()
    :
    type{YType::uint8, "type"},
    in{YType::empty, "in"}
{

    yang_name = "attibute_type"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::~AttibuteType()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attibute_type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::AttibuteType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::Range()
    :
    start_value{YType::uint8, "start_value"},
    end_value{YType::uint8, "end_value"},
    in{YType::empty, "in"}
{

    yang_name = "range"; yang_parent_name = "treat-as-withdraw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_value.is_set
	|| end_value.is_set
	|| in.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_value.yfilter)
	|| ydk::is_set(end_value.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_value.is_set || is_set(start_value.yfilter)) leaf_name_data.push_back(start_value.get_name_leafdata());
    if (end_value.is_set || is_set(end_value.yfilter)) leaf_name_data.push_back(end_value.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start_value")
    {
        start_value = value;
        start_value.value_namespace = name_space;
        start_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end_value")
    {
        end_value = value;
        end_value.value_namespace = name_space;
        end_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start_value")
    {
        start_value.yfilter = yfilter;
    }
    if(value_path == "end_value")
    {
        end_value.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PathAttribute::TreatAsWithdraw::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start_value" || name == "end_value" || name == "in")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::PeerGroup()
    :
    peer_group_name{YType::str, "peer-group-name"}
{

    yang_name = "peer-group"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    return peer_group_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_group_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_group_name.is_set || is_set(peer_group_name.yfilter)) leaf_name_data.push_back(peer_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name = value;
        peer_group_name.value_namespace = name_space;
        peer_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-group-name")
    {
        peer_group_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-group-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::Timers()
    :
    keepalive_interval{YType::uint16, "keepalive-interval"},
    holdtime{YType::uint16, "holdtime"},
    minimum_neighbor_hold{YType::uint16, "minimum-neighbor-hold"}
{

    yang_name = "timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::~Timers()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::has_data() const
{
    if (is_presence_container) return true;
    return keepalive_interval.is_set
	|| holdtime.is_set
	|| minimum_neighbor_hold.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keepalive_interval.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(minimum_neighbor_hold.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (minimum_neighbor_hold.is_set || is_set(minimum_neighbor_hold.yfilter)) leaf_name_data.push_back(minimum_neighbor_hold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold = value;
        minimum_neighbor_hold.value_namespace = name_space;
        minimum_neighbor_hold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "minimum-neighbor-hold")
    {
        minimum_neighbor_hold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive-interval" || name == "holdtime" || name == "minimum-neighbor-hold")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::Transport()
    :
    connection_mode{YType::enumeration, "connection-mode"},
    multi_session{YType::empty, "multi-session"}
        ,
    path_mtu_discovery(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::~Transport()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return connection_mode.is_set
	|| multi_session.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connection_mode.yfilter)
	|| ydk::is_set(multi_session.yfilter)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connection_mode.is_set || is_set(connection_mode.yfilter)) leaf_name_data.push_back(connection_mode.get_name_leafdata());
    if (multi_session.is_set || is_set(multi_session.yfilter)) leaf_name_data.push_back(multi_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connection-mode")
    {
        connection_mode = value;
        connection_mode.value_namespace = name_space;
        connection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-session")
    {
        multi_session = value;
        multi_session.value_namespace = name_space;
        multi_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connection-mode")
    {
        connection_mode.yfilter = yfilter;
    }
    if(value_path == "multi-session")
    {
        multi_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "connection-mode" || name == "multi-session")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::PathMtuDiscovery()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::has_data() const
{
    if (is_presence_container) return true;
    return hops.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::UpdateSource()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "update-source"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::~UpdateSource()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "update-source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::UpdateSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::Network()
    :
    with_mask(this, {"number", "mask"})
    , no_mask(this, {"number"})
{

    yang_name = "network"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::~Network()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<with_mask.len(); index++)
    {
        if(with_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<no_mask.len(); index++)
    {
        if(no_mask[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::has_operation() const
{
    for (std::size_t index=0; index<with_mask.len(); index++)
    {
        if(with_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<no_mask.len(); index++)
    {
        if(no_mask[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "with-mask")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask>();
        c->parent = this;
        with_mask.append(c);
        return c;
    }

    if(child_yang_name == "no-mask")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask>();
        c->parent = this;
        no_mask.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : with_mask.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : no_mask.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "with-mask" || name == "no-mask")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::WithMask()
    :
    number{YType::str, "number"},
    mask{YType::str, "mask"},
    route_map{YType::str, "route-map"},
    backdoor{YType::empty, "backdoor"},
    evpn{YType::empty, "evpn"}
{

    yang_name = "with-mask"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::~WithMask()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| mask.is_set
	|| route_map.is_set
	|| backdoor.is_set
	|| evpn.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(evpn.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "with-mask";
    ADD_KEY_TOKEN(number, "number");
    ADD_KEY_TOKEN(mask, "mask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::WithMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "mask" || name == "route-map" || name == "backdoor" || name == "evpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::NoMask()
    :
    number{YType::str, "number"},
    route_map{YType::str, "route-map"},
    backdoor{YType::empty, "backdoor"},
    evpn{YType::empty, "evpn"}
{

    yang_name = "no-mask"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::~NoMask()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| route_map.is_set
	|| backdoor.is_set
	|| evpn.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(backdoor.yfilter)
	|| ydk::is_set(evpn.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-mask";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (backdoor.is_set || is_set(backdoor.yfilter)) leaf_name_data.push_back(backdoor.get_name_leafdata());
    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backdoor")
    {
        backdoor = value;
        backdoor.value_namespace = name_space;
        backdoor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "backdoor")
    {
        backdoor.yfilter = yfilter;
    }
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Network::NoMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "route-map" || name == "backdoor" || name == "evpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "ipv4-flowspec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(context != nullptr)
    {
        children["context"] = context;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord>();
        c->parent = this;
        context_word.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : context_word.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Ipv4Mvpn()
    :
    bgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_>())
{
    bgp->parent = this;

    yang_name = "ipv4-mvpn"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::~Ipv4Mvpn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::has_data() const
{
    if (is_presence_container) return true;
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-mvpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Bgp_()
    :
    dampening(nullptr) // presence node
{

    yang_name = "bgp"; yang_parent_name = "ipv4-mvpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return (dampening !=  nullptr && dampening->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| (dampening !=  nullptr && dampening->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening>();
        }
        return dampening;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampening")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
        ,
    dampen(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::has_data() const
{
    if (is_presence_container) return true;
    return half_life_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set
	|| max_suppress_time.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Mvpn::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "reuse-time" || name == "suppress-time" || name == "max-suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Ipv6()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "ipv6"; yang_parent_name = "with-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::~Ipv6()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return af_name.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf>();
        c->parent = this;
        vrf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vrf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "af-name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    ipv6_unicast(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast>())
    , ipv6_multicast(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Multicast>())
    , ipv6_flowspec(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec>())
    , ipv6_mvpn(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn>())
{
    ipv6_unicast->parent = this;
    ipv6_multicast->parent = this;
    ipv6_flowspec->parent = this;
    ipv6_mvpn->parent = this;

    yang_name = "vrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::~Vrf()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_data())
	|| (ipv6_multicast !=  nullptr && ipv6_multicast->has_data())
	|| (ipv6_flowspec !=  nullptr && ipv6_flowspec->has_data())
	|| (ipv6_mvpn !=  nullptr && ipv6_mvpn->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation())
	|| (ipv6_multicast !=  nullptr && ipv6_multicast->has_operation())
	|| (ipv6_flowspec !=  nullptr && ipv6_flowspec->has_operation())
	|| (ipv6_mvpn !=  nullptr && ipv6_mvpn->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    if(child_yang_name == "ipv6-multicast")
    {
        if(ipv6_multicast == nullptr)
        {
            ipv6_multicast = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Multicast>();
        }
        return ipv6_multicast;
    }

    if(child_yang_name == "ipv6-flowspec")
    {
        if(ipv6_flowspec == nullptr)
        {
            ipv6_flowspec = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Flowspec>();
        }
        return ipv6_flowspec;
    }

    if(child_yang_name == "ipv6-mvpn")
    {
        if(ipv6_mvpn == nullptr)
        {
            ipv6_mvpn = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Mvpn>();
        }
        return ipv6_mvpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    if(ipv6_multicast != nullptr)
    {
        children["ipv6-multicast"] = ipv6_multicast;
    }

    if(ipv6_flowspec != nullptr)
    {
        children["ipv6-flowspec"] = ipv6_flowspec;
    }

    if(ipv6_mvpn != nullptr)
    {
        children["ipv6-mvpn"] = ipv6_mvpn;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast" || name == "ipv6-multicast" || name == "ipv6-flowspec" || name == "ipv6-mvpn" || name == "name")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Ipv6Unicast()
    :
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
        ,
    advertise(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise>())
    , aggregate_address(this, {"ipv6_address"})
    , bgp(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation>())
    , distance(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance>())
    , import(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import>())
    , maximum_paths(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup>())
    , neighbor(this, {"id"})
    , network(this, {"number"})
    , redistribute(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Redistribute>())
    , snmp(nullptr) // presence node
    , table_map(nullptr) // presence node
{
    advertise->parent = this;
    bgp->parent = this;
    default_information->parent = this;
    distance->parent = this;
    import->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;
    redistribute->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::~Ipv6Unicast()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return default_metric.is_set
	|| synchronization.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::has_operation() const
{
    for (std::size_t index=0; index<aggregate_address.len(); index++)
    {
        if(aggregate_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "aggregate-address")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress>();
        c->parent = this;
        aggregate_address.append(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Network>();
        c->parent = this;
        network.append(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    count = 0;
    for (auto c : aggregate_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        children["peer-group"] = peer_group;
    }

    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : network.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "aggregate-address" || name == "bgp" || name == "default-information" || name == "distance" || name == "import" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "network" || name == "redistribute" || name == "snmp" || name == "table-map" || name == "default-metric" || name == "synchronization")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::Advertise()
    :
    l2vpn(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn>())
{
    l2vpn->parent = this;

    yang_name = "advertise"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::L2vpn()
    :
    evpn{YType::empty, "evpn"}
{

    yang_name = "l2vpn"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::~L2vpn()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return evpn.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(evpn.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn.is_set || is_set(evpn.yfilter)) leaf_name_data.push_back(evpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "evpn")
    {
        evpn = value;
        evpn.value_namespace = name_space;
        evpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "evpn")
    {
        evpn.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Advertise::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::AggregateAddress()
    :
    ipv6_address{YType::str, "ipv6-address"},
    advertise_map{YType::str, "advertise-map"},
    as_set{YType::empty, "as-set"},
    attribute_map{YType::str, "attribute-map"},
    as_override{YType::empty, "as-override"},
    route_map{YType::str, "route-map"},
    summary_only{YType::empty, "summary-only"},
    suppress_map{YType::str, "suppress-map"}
{

    yang_name = "aggregate-address"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::~AggregateAddress()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set
	|| advertise_map.is_set
	|| as_set.is_set
	|| attribute_map.is_set
	|| as_override.is_set
	|| route_map.is_set
	|| summary_only.is_set
	|| suppress_map.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(advertise_map.yfilter)
	|| ydk::is_set(as_set.yfilter)
	|| ydk::is_set(attribute_map.yfilter)
	|| ydk::is_set(as_override.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(summary_only.yfilter)
	|| ydk::is_set(suppress_map.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-address";
    ADD_KEY_TOKEN(ipv6_address, "ipv6-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (advertise_map.is_set || is_set(advertise_map.yfilter)) leaf_name_data.push_back(advertise_map.get_name_leafdata());
    if (as_set.is_set || is_set(as_set.yfilter)) leaf_name_data.push_back(as_set.get_name_leafdata());
    if (attribute_map.is_set || is_set(attribute_map.yfilter)) leaf_name_data.push_back(attribute_map.get_name_leafdata());
    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (summary_only.is_set || is_set(summary_only.yfilter)) leaf_name_data.push_back(summary_only.get_name_leafdata());
    if (suppress_map.is_set || is_set(suppress_map.yfilter)) leaf_name_data.push_back(suppress_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-map")
    {
        advertise_map = value;
        advertise_map.value_namespace = name_space;
        advertise_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-set")
    {
        as_set = value;
        as_set.value_namespace = name_space;
        as_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-map")
    {
        attribute_map = value;
        attribute_map.value_namespace = name_space;
        attribute_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-only")
    {
        summary_only = value;
        summary_only.value_namespace = name_space;
        summary_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-map")
    {
        suppress_map = value;
        suppress_map.value_namespace = name_space;
        suppress_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "advertise-map")
    {
        advertise_map.yfilter = yfilter;
    }
    if(value_path == "as-set")
    {
        as_set.yfilter = yfilter;
    }
    if(value_path == "attribute-map")
    {
        attribute_map.yfilter = yfilter;
    }
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "summary-only")
    {
        summary_only.yfilter = yfilter;
    }
    if(value_path == "suppress-map")
    {
        suppress_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::AggregateAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "advertise-map" || name == "as-set" || name == "attribute-map" || name == "as-override" || name == "route-map" || name == "summary-only" || name == "suppress-map")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    suppress_inactive{YType::empty, "suppress-inactive"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths>())
    , aggregate_timer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer>())
    , bestpath(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath>())
    , dampening(nullptr) // presence node
    , recursion(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion>())
    , route_map(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap>())
    , router_id(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId>())
    , slow_peer(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer>())
{
    additional_paths->parent = this;
    aggregate_timer->parent = this;
    bestpath->parent = this;
    recursion->parent = this;
    route_map->parent = this;
    router_id->parent = this;
    slow_peer->parent = this;

    yang_name = "bgp"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return advertise_best_external.is_set
	|| redistribute_internal.is_set
	|| suppress_inactive.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_best_external.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(suppress_inactive.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.yfilter)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.yfilter)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "aggregate-timer")
    {
        if(aggregate_timer == nullptr)
        {
            aggregate_timer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AggregateTimer>();
        }
        return aggregate_timer;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(aggregate_timer != nullptr)
    {
        children["aggregate-timer"] = aggregate_timer;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
        advertise_best_external.value_namespace = name_space;
        advertise_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
        suppress_inactive.value_namespace = name_space;
        suppress_inactive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "aggregate-timer" || name == "bestpath" || name == "dampening" || name == "recursion" || name == "route-map" || name == "router-id" || name == "slow-peer" || name == "advertise-best-external" || name == "redistribute-internal" || name == "suppress-inactive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
        ,
    select(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select>())
    , send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
    , backup(nullptr) // presence node
    , best(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best>())
    , best_external(nullptr) // presence node
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    if (is_presence_container) return true;
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set;
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::AddressFamily::WithVrf::Ipv6::Vrf::Ipv6Unicast::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::Routes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::Routes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::IsisArea::Routes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::Routes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::Routes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Multicast::Redistribute::Isis::Default::Routes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::PeerGroup::Neighbor::Transport::ConnectionMode::passive {1, "passive"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::ConnectionMode::active {0, "active"};
const Enum::YLeaf Native::Router::Bgp::AddressFamily::WithVrf::Ipv4::Vrf::Ipv4Flowspec::Neighbor::Transport::ConnectionMode::passive {1, "passive"};


}
}

