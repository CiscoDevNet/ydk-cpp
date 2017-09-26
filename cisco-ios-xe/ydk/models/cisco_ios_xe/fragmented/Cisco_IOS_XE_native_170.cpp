
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_170.hpp"
#include "Cisco_IOS_XE_native_172.hpp"
#include "Cisco_IOS_XE_native_171.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::SummaryLsa()
    :
    metric{YType::uint32, "metric"}
{

    yang_name = "summary-lsa"; yang_parent_name = "router-lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::~SummaryLsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_data() const
{
    return metric.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::PassiveInterface()
    :
    default_{YType::empty, "default"},
    interface{YType::str, "interface"}
{

    yang_name = "passive-interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::~PassiveInterface()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::has_data() const
{
    return default_.is_set
	|| interface.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "interface")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::QueueDepth()
    :
    hello(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello>())
	,update(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update>())
{
    hello->parent = this;
    update->parent = this;

    yang_name = "queue-depth"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::~QueueDepth()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::has_data() const
{
    return (hello !=  nullptr && hello->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-depth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "update")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::Hello()
    :
    options{YType::str, "options"}
{

    yang_name = "hello"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::~Hello()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::Update()
    :
    options{YType::str, "options"}
{

    yang_name = "update"; yang_parent_name = "queue-depth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::~Update()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::has_data() const
{
    return options.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(options.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (options.is_set || is_set(options.yfilter)) leaf_name_data.push_back(options.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "options")
    {
        options = value;
        options.value_namespace = name_space;
        options.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "options")
    {
        options.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Redistribute()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp>())
	,maximum_prefix(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_>())
{
    lisp->parent = this;
    maximum_prefix->parent = this;
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_>();
        c->parent = this;
        ospfv3.push_back(c);
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
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

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "maximum-prefix" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"}
    	,
    threshold_warning_only_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>())
{
    threshold_warning_only_container->parent = this;

    yang_name = "maximum-prefix"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (threshold_warning_only_container !=  nullptr && threshold_warning_only_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-warning-only-container")
    {
        if(threshold_warning_only_container == nullptr)
        {
            threshold_warning_only_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer>();
        }
        return threshold_warning_only_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold_warning_only_container != nullptr)
    {
        children["threshold-warning-only-container"] = threshold_warning_only_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-warning-only-container" || name == "number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::ThresholdWarningOnlyContainer()
    :
    threshold{YType::uint32, "threshold"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "threshold-warning-only-container"; yang_parent_name = "maximum-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::~ThresholdWarningOnlyContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_data() const
{
    return threshold.is_set
	|| warning_only.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-warning-only-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Vrf_()
    :
    global(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::~Vrf_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::has_data() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<non_global_vrf.size(); index++)
    {
        if(non_global_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global>();
        }
        return global;
    }

    if(child_yang_name == "non-global-vrf")
    {
        for(auto const & c : non_global_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf>();
        c->parent = this;
        non_global_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : non_global_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "non-global-vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Global()
    :
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "global"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::~Global()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_>();
        c->parent = this;
        ospfv3.push_back(c);
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::~Static_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::NonGlobalVrf()
    :
    name{YType::str, "name"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,lisp(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
{
    lisp->parent = this;

    yang_name = "non-global-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::~NonGlobalVrf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return name.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
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
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-global-vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf>();
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_>();
        c->parent = this;
        ospfv3.push_back(c);
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::Application()
    :
    name{YType::str, "name"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "application"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::~Application()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_data() const
{
    return name.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "bgp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::~Bgp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::Connected()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "connected"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::~Connected()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::Eigrp()
    :
    as_number{YType::str, "as-number"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "eigrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::~Eigrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_data() const
{
    return as_number.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "as-number")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::Isis()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::~Isis()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        for(auto const & c : isis_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_area)
    {
        children[c->get_segment_path()] = c;
    }

    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "redist-options" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"},
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::~IsisArea()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| isis_level_routes.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "name" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrp()
    :
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>())
	,iso_igrp_container(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>())
{
    area_tag_route_map_container->parent = this;
    iso_igrp_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_data() const
{
    return route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation())
	|| (iso_igrp_container !=  nullptr && iso_igrp_container->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    if(child_yang_name == "iso-igrp-container")
    {
        if(iso_igrp_container == nullptr)
        {
            iso_igrp_container = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer>();
        }
        return iso_igrp_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    if(iso_igrp_container != nullptr)
    {
        children["iso-igrp-container"] = iso_igrp_container;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "iso-igrp-container" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{

    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::IsoIgrpContainer()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "iso-igrp-container"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::~IsoIgrpContainer()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::Lisp()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "lisp"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::~Lisp()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::Mobile()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "mobile"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::~Mobile()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::Odr()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "odr"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::~Odr()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Ospf()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::~Ospf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Ospfv3_()
    :
    id{YType::uint32, "id"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
    	,
    match(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::~Ospfv3_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_data() const
{
    return id.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "id" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospfv3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::~Match()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::get_children() const
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

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::~External()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_data() const
{
    return external_routes.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::Internal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::~Internal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::NssaExternal()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::Rip()
    :
    id{YType::str, "id"}
    	,
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "rip"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::~Rip()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_data() const
{
    return id.is_set
	|| (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::Static_()
    :
    redist_options(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions>())
{
    redist_options->parent = this;

    yang_name = "static"; yang_parent_name = "non-global-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::~Static_()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::has_data() const
{
    return (redist_options !=  nullptr && redist_options->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (redist_options !=  nullptr && redist_options->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redist-options")
    {
        if(redist_options == nullptr)
        {
            redist_options = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions>();
        }
        return redist_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redist_options != nullptr)
    {
        children["redist-options"] = redist_options;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redist-options")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::RedistOptions()
    :
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_only{YType::empty, "nssa-only"},
    route_map{YType::str, "route-map"},
    subnets{YType::empty, "subnets"},
    tag{YType::uint32, "tag"}
{

    yang_name = "redist-options"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::~RedistOptions()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| nssa_only.is_set
	|| route_map.is_set
	|| subnets.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(subnets.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (subnets.is_set || is_set(subnets.yfilter)) leaf_name_data.push_back(subnets.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnets")
    {
        subnets = value;
        subnets.value_namespace = name_space;
        subnets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "subnets")
    {
        subnets.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "metric-type" || name == "nssa-only" || name == "route-map" || name == "subnets" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    not_advertise{YType::empty, "not-advertise"},
    nssa_only{YType::empty, "nssa-only"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::~SummaryPrefix()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| not_advertise.is_set
	|| nssa_only.is_set
	|| tag.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "not-advertise" || name == "nssa-only" || name == "tag")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Timers()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa>())
	,pacing(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing>())
	,throttle(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle>())
{
    lsa->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::~Timers()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(pacing != nullptr)
    {
        children["pacing"] = pacing;
    }

    if(throttle != nullptr)
    {
        children["throttle"] = throttle;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::Lsa()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::has_data() const
{
    return arrival.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::~Pacing()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flood")
    {
        flood = value;
        flood.value_namespace = name_space;
        flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
        lsa_group.value_namespace = name_space;
        lsa_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
        retransmission.value_namespace = name_space;
        retransmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flood")
    {
        flood.yfilter = yfilter;
    }
    if(value_path == "lsa-group")
    {
        lsa_group.yfilter = yfilter;
    }
    if(value_path == "retransmission")
    {
        retransmission.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::~Throttle()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(spf != nullptr)
    {
        children["spf"] = spf;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::Lsa()
    :
    all(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All>())
{
    all->parent = this;

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::All()
    :
    delay{YType::uint32, "delay"},
    max_delay{YType::uint32, "max-delay"},
    min_delay{YType::uint32, "min-delay"}
{

    yang_name = "all"; yang_parent_name = "lsa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::~All()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::has_data() const
{
    return delay.is_set
	|| max_delay.is_set
	|| min_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(min_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "max-delay" || name == "min-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::Spf()
    :
    delay{YType::uint32, "delay"},
    max_delay{YType::uint32, "max-delay"},
    min_delay{YType::uint32, "min-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::~Spf()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::has_data() const
{
    return delay.is_set
	|| max_delay.is_set
	|| min_delay.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(max_delay.yfilter)
	|| ydk::is_set(min_delay.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (max_delay.is_set || is_set(max_delay.yfilter)) leaf_name_data.push_back(max_delay.get_name_leafdata());
    if (min_delay.is_set || is_set(min_delay.yfilter)) leaf_name_data.push_back(min_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-delay")
    {
        max_delay = value;
        max_delay.value_namespace = name_space;
        max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay")
    {
        min_delay = value;
        min_delay.value_namespace = name_space;
        min_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "max-delay")
    {
        max_delay.yfilter = yfilter;
    }
    if(value_path == "min-delay")
    {
        min_delay.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "max-delay" || name == "min-delay")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::TrafficShare()
    :
    across_interfaces{YType::empty, "across-interfaces"},
    min{YType::empty, "min"}
{

    yang_name = "traffic-share"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::has_data() const
{
    return across_interfaces.is_set
	|| min.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces" || name == "min")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::TtlSecurity()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::has_data() const
{
    return all_interfaces.is_set
	|| hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Ipv6()
    :
    unicast(nullptr) // presence node
{

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (unicast !=  nullptr && unicast->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast>();
        }
        return unicast;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast" || name == "vrf")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Unicast()
    :
    default_metric{YType::uint32, "default-metric"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsr{YType::empty, "nsr"},
    router_id{YType::str, "router-id"}
    	,
    authentication(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Authentication>())
	,auto_cost(nullptr) // presence node
	,bfd(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Bfd>())
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Capability>())
	,compatible(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Compatible>())
	,default_information(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::DefaultInformation>())
	,disable(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Disable>())
	,discard_route(nullptr) // presence node
	,distance(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Distance>())
	,event_log(nullptr) // presence node
	,graceful_restart(nullptr) // presence node
	,interface_id(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::InterfaceId>())
	,log_adjacency_changes(nullptr) // presence node
	,manet(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet>())
	,max_lsa(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::MaxLsa>())
	,max_metric(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::MaxMetric>())
	,passive_interface(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::PassiveInterface>())
	,queue_depth(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::QueueDepth>())
	,redistribute(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute>())
	,timers(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Timers>())
	,traffic_share(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::TrafficShare>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::TtlSecurity>())
{
    authentication->parent = this;
    bfd->parent = this;
    capability->parent = this;
    compatible->parent = this;
    default_information->parent = this;
    disable->parent = this;
    distance->parent = this;
    interface_id->parent = this;
    manet->parent = this;
    max_lsa->parent = this;
    max_metric->parent = this;
    passive_interface->parent = this;
    queue_depth->parent = this;
    redistribute->parent = this;
    timers->parent = this;
    traffic_share->parent = this;
    ttl_security->parent = this;

    yang_name = "unicast"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::~Unicast()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return default_metric.is_set
	|| maximum_paths.is_set
	|| nsr.is_set
	|| router_id.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (compatible !=  nullptr && compatible->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (discard_route !=  nullptr && discard_route->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (interface_id !=  nullptr && interface_id->has_data())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (max_lsa !=  nullptr && max_lsa->has_data())
	|| (max_metric !=  nullptr && max_metric->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data())
	|| (queue_depth !=  nullptr && queue_depth->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (compatible !=  nullptr && compatible->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (discard_route !=  nullptr && discard_route->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (interface_id !=  nullptr && interface_id->has_operation())
	|| (log_adjacency_changes !=  nullptr && log_adjacency_changes->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (max_lsa !=  nullptr && max_lsa->has_operation())
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation())
	|| (queue_depth !=  nullptr && queue_depth->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "compatible")
    {
        if(compatible == nullptr)
        {
            compatible = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Compatible>();
        }
        return compatible;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "discard-route")
    {
        if(discard_route == nullptr)
        {
            discard_route = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::DiscardRoute>();
        }
        return discard_route;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "interface-id")
    {
        if(interface_id == nullptr)
        {
            interface_id = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::InterfaceId>();
        }
        return interface_id;
    }

    if(child_yang_name == "log-adjacency-changes")
    {
        if(log_adjacency_changes == nullptr)
        {
            log_adjacency_changes = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::LogAdjacencyChanges>();
        }
        return log_adjacency_changes;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "max-lsa")
    {
        if(max_lsa == nullptr)
        {
            max_lsa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::MaxLsa>();
        }
        return max_lsa;
    }

    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::PassiveInterface>();
        }
        return passive_interface;
    }

    if(child_yang_name == "queue-depth")
    {
        if(queue_depth == nullptr)
        {
            queue_depth = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::QueueDepth>();
        }
        return queue_depth;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Redistribute>();
        }
        return redistribute;
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
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::TrafficShare>();
        }
        return traffic_share;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(auto_cost != nullptr)
    {
        children["auto-cost"] = auto_cost;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    if(compatible != nullptr)
    {
        children["compatible"] = compatible;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(discard_route != nullptr)
    {
        children["discard-route"] = discard_route;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(interface_id != nullptr)
    {
        children["interface-id"] = interface_id;
    }

    if(log_adjacency_changes != nullptr)
    {
        children["log-adjacency-changes"] = log_adjacency_changes;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(max_lsa != nullptr)
    {
        children["max-lsa"] = max_lsa;
    }

    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(passive_interface != nullptr)
    {
        children["passive-interface"] = passive_interface;
    }

    if(queue_depth != nullptr)
    {
        children["queue-depth"] = queue_depth;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "authentication" || name == "auto-cost" || name == "bfd" || name == "capability" || name == "compatible" || name == "default-information" || name == "disable" || name == "discard-route" || name == "distance" || name == "event-log" || name == "graceful-restart" || name == "interface-id" || name == "log-adjacency-changes" || name == "manet" || name == "max-lsa" || name == "max-metric" || name == "passive-interface" || name == "queue-depth" || name == "redistribute" || name == "summary-prefix" || name == "timers" || name == "traffic-share" || name == "ttl-security" || name == "default-metric" || name == "maximum-paths" || name == "nsr" || name == "router-id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Area()
    :
    id{YType::str, "id"},
    default_cost{YType::uint32, "default-cost"}
    	,
    authentication(nullptr) // presence node
	,capability(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability>())
	,ipv4_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range>())
	,ipv6_range(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range>())
	,nssa(nullptr) // presence node
	,stub(nullptr) // presence node
{
    capability->parent = this;
    ipv4_range->parent = this;
    ipv6_range->parent = this;

    yang_name = "area"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::~Area()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::has_data() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return id.is_set
	|| default_cost.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (ipv4_range !=  nullptr && ipv4_range->has_data())
	|| (ipv6_range !=  nullptr && ipv6_range->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::has_operation() const
{
    for (std::size_t index=0; index<filter_list.size(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (ipv4_range !=  nullptr && ipv4_range->has_operation())
	|| (ipv6_range !=  nullptr && ipv6_range->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "filter-list")
    {
        for(auto const & c : filter_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList>();
        c->parent = this;
        filter_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4-range")
    {
        if(ipv4_range == nullptr)
        {
            ipv4_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range>();
        }
        return ipv4_range;
    }

    if(child_yang_name == "ipv6-range")
    {
        if(ipv6_range == nullptr)
        {
            ipv6_range = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range>();
        }
        return ipv6_range;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub>();
        }
        return stub;
    }

    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(capability != nullptr)
    {
        children["capability"] = capability;
    }

    for (auto const & c : filter_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipv4_range != nullptr)
    {
        children["ipv4-range"] = ipv4_range;
    }

    if(ipv6_range != nullptr)
    {
        children["ipv6-range"] = ipv6_range;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "capability" || name == "filter-list" || name == "ipv4-range" || name == "ipv6-range" || name == "nssa" || name == "sham-link" || name == "stub" || name == "virtual-link" || name == "id" || name == "default-cost")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"}
{

    yang_name = "authentication"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::has_data() const
{
    return message_digest.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(message_digest.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.yfilter)) leaf_name_data.push_back(message_digest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
        message_digest.value_namespace = name_space;
        message_digest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "message-digest")
    {
        message_digest.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "message-digest")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::Capability()
    :
    default_exclusion{YType::empty, "default-exclusion"}
{

    yang_name = "capability"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::~Capability()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::has_data() const
{
    return default_exclusion.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_exclusion.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_exclusion.is_set || is_set(default_exclusion.yfilter)) leaf_name_data.push_back(default_exclusion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion = value;
        default_exclusion.value_namespace = name_space;
        default_exclusion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-exclusion")
    {
        default_exclusion.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-exclusion")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::FilterList()
    :
    in_out{YType::enumeration, "in-out"},
    prefix{YType::str, "prefix"}
{

    yang_name = "filter-list"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::~FilterList()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::has_data() const
{
    return in_out.is_set
	|| prefix.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_out.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list" <<"[in-out='" <<in_out <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_out.is_set || is_set(in_out.yfilter)) leaf_name_data.push_back(in_out.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-out")
    {
        in_out = value;
        in_out.value_namespace = name_space;
        in_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-out")
    {
        in_out.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-out" || name == "prefix")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Ipv4Range()
{

    yang_name = "ipv4-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::~Ipv4Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::Range()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    advertise{YType::empty, "advertise"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ipv4-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| advertise.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv4Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mask" || name == "advertise" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Ipv6Range()
{

    yang_name = "ipv6-range"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::~Ipv6Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::Range()
    :
    ip{YType::str, "ip"},
    advertise{YType::empty, "advertise"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::empty, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ipv6-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::~Range()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::has_data() const
{
    return ip.is_set
	|| advertise.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(advertise.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (advertise.is_set || is_set(advertise.yfilter)) leaf_name_data.push_back(advertise.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise")
    {
        advertise = value;
        advertise.value_namespace = name_space;
        advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "advertise")
    {
        advertise.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Ipv6Range::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "advertise" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Nssa()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    default_information_originate(nullptr) // presence node
	,translate(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate>())
{
    translate->parent = this;

    yang_name = "nssa"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::~Nssa()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::has_data() const
{
    return no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (default_information_originate !=  nullptr && default_information_originate->has_data())
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (default_information_originate !=  nullptr && default_information_originate->has_operation())
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-information-originate")
    {
        if(default_information_originate == nullptr)
        {
            default_information_originate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate>();
        }
        return default_information_originate;
    }

    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_information_originate != nullptr)
    {
        children["default-information-originate"] = default_information_originate;
    }

    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-information-originate" || name == "translate" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::DefaultInformationOriginate()
    :
    metric{YType::int32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_redistribution{YType::empty, "no-redistribution"},
    no_summary{YType::empty, "no-summary"},
    nssa_only{YType::empty, "nssa-only"}
    	,
    translate(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate>())
{
    translate->parent = this;

    yang_name = "default-information-originate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::~DefaultInformationOriginate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::has_data() const
{
    return metric.is_set
	|| metric_type.is_set
	|| no_ext_capability.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set
	|| nssa_only.is_set
	|| (translate !=  nullptr && translate->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter)
	|| ydk::is_set(nssa_only.yfilter)
	|| (translate !=  nullptr && translate->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());
    if (nssa_only.is_set || is_set(nssa_only.yfilter)) leaf_name_data.push_back(nssa_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "translate")
    {
        if(translate == nullptr)
        {
            translate = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate>();
        }
        return translate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(translate != nullptr)
    {
        children["translate"] = translate;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
        no_redistribution.value_namespace = name_space;
        no_redistribution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-only")
    {
        nssa_only = value;
        nssa_only.value_namespace = name_space;
        nssa_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
    if(value_path == "nssa-only")
    {
        nssa_only.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "translate" || name == "metric" || name == "metric-type" || name == "no-ext-capability" || name == "no-redistribution" || name == "no-summary" || name == "nssa-only")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "default-information-originate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Translate()
    :
    type7(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7>())
{
    type7->parent = this;

    yang_name = "translate"; yang_parent_name = "nssa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::~Translate()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::has_data() const
{
    return (type7 !=  nullptr && type7->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::has_operation() const
{
    return is_set(yfilter)
	|| (type7 !=  nullptr && type7->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type7")
    {
        if(type7 == nullptr)
        {
            type7 = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7>();
        }
        return type7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type7 != nullptr)
    {
        children["type7"] = type7;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type7")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::Type7()
    :
    always{YType::empty, "always"},
    suppress_fa{YType::empty, "suppress-fa"}
{

    yang_name = "type7"; yang_parent_name = "translate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::~Type7()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::has_data() const
{
    return always.is_set
	|| suppress_fa.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(suppress_fa.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (suppress_fa.is_set || is_set(suppress_fa.yfilter)) leaf_name_data.push_back(suppress_fa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa = value;
        suppress_fa.value_namespace = name_space;
        suppress_fa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "suppress-fa")
    {
        suppress_fa.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Nssa::Translate::Type7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "suppress-fa")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::ShamLink()
    :
    source{YType::str, "source"},
    dest{YType::str, "dest"},
    cost{YType::uint16, "cost"}
    	,
    ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity>())
{
    ttl_security->parent = this;

    yang_name = "sham-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::~ShamLink()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::has_data() const
{
    return source.is_set
	|| dest.is_set
	|| cost.is_set
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(dest.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source='" <<source <<"']" <<"[dest='" <<dest <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (dest.is_set || is_set(dest.yfilter)) leaf_name_data.push_back(dest.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest")
    {
        dest = value;
        dest.value_namespace = name_space;
        dest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "dest")
    {
        dest.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ttl-security" || name == "source" || name == "dest" || name == "cost")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::TtlSecurity()
    :
    hops{YType::uint8, "hops"}
{

    yang_name = "ttl-security"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::~TtlSecurity()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::has_data() const
{
    return hops.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hops.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hops.is_set || is_set(hops.yfilter)) leaf_name_data.push_back(hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hops")
    {
        hops = value;
        hops.value_namespace = name_space;
        hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hops")
    {
        hops.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::ShamLink::TtlSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hops")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::Stub()
    :
    no_ext_capability{YType::empty, "no-ext-capability"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "stub"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::~Stub()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::has_data() const
{
    return no_ext_capability.is_set
	|| no_summary.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_ext_capability.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_ext_capability.is_set || is_set(no_ext_capability.yfilter)) leaf_name_data.push_back(no_ext_capability.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability = value;
        no_ext_capability.value_namespace = name_space;
        no_ext_capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
        no_summary.value_namespace = name_space;
        no_summary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-ext-capability")
    {
        no_ext_capability.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-ext-capability" || name == "no-summary")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::VirtualLink()
    :
    id{YType::str, "id"}
    	,
    authentication(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication>())
	,authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::AuthenticationKey>())
	,dead_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::DeadInterval>())
	,hello_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::HelloInterval>())
	,retransmit_interval(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::RetransmitInterval>())
	,topology(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Topology>())
	,transmit_delay(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::TransmitDelay>())
	,ttl_security(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::TtlSecurity>())
{
    authentication->parent = this;
    authentication_key->parent = this;
    dead_interval->parent = this;
    hello_interval->parent = this;
    retransmit_interval->parent = this;
    topology->parent = this;
    transmit_delay->parent = this;
    ttl_security->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::~VirtualLink()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return id.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (transmit_delay !=  nullptr && transmit_delay->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (retransmit_interval !=  nullptr && retransmit_interval->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (transmit_delay !=  nullptr && transmit_delay->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmit-interval")
    {
        if(retransmit_interval == nullptr)
        {
            retransmit_interval = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::RetransmitInterval>();
        }
        return retransmit_interval;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "transmit-delay")
    {
        if(transmit_delay == nullptr)
        {
            transmit_delay = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::TransmitDelay>();
        }
        return transmit_delay;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(retransmit_interval != nullptr)
    {
        children["retransmit-interval"] = retransmit_interval;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(transmit_delay != nullptr)
    {
        children["transmit-delay"] = transmit_delay;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "authentication-key" || name == "dead-interval" || name == "hello-interval" || name == "message-digest-key" || name == "retransmit-interval" || name == "topology" || name == "transmit-delay" || name == "ttl-security" || name == "id")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::Authentication()
    :
    null{YType::empty, "null"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey>())
	,key_chain(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain>())
	,message_digest(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::MessageDigest>())
{
    authentication_key->parent = this;
    key_chain->parent = this;
    message_digest->parent = this;

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::~Authentication()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return null.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (message_digest !=  nullptr && message_digest->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (message_digest !=  nullptr && message_digest->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "message-digest")
    {
        if(message_digest == nullptr)
        {
            message_digest = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::MessageDigest>();
        }
        return message_digest;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(message_digest != nullptr)
    {
        children["message-digest"] = message_digest;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "key-chain" || name == "message-digest" || name == "message-digest-key" || name == "null")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
    	,
    authentication_key(std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>())
{
    authentication_key->parent = this;

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return name.is_set
	|| (authentication_key !=  nullptr && authentication_key->has_data());
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (authentication_key !=  nullptr && authentication_key->has_operation());
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-key" || name == "message-digest-key" || name == "name")
        return true;
    return false;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{

    yang_name = "authentication-key"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_key.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-key" || name == "auth-type")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::Options::unlimited {0, "unlimited"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_1 {0, "1"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::MetricType::Y_2 {1, "2"};

const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::InOut::in {0, "in"};
const Enum::YLeaf Native::Router::Ospfv3::AddressFamily::Ipv6::Unicast::Area::FilterList::InOut::out {1, "out"};


}
}

