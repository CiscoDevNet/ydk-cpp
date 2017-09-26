
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistributes()
{

    yang_name = "redistributes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::~Redistributes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_data() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_operation() const
{
    for (std::size_t index=0; index<redistribute.size(); index++)
    {
        if(redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        for(auto const & c : redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute>();
        c->parent = this;
        redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Redistribute()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    connected_or_static_or_subscriber_or_mobile(nullptr) // presence node
{

    yang_name = "redistribute"; yang_parent_name = "redistributes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::~Redistribute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_data() const
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
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_data())
            return true;
    }
    return protocol_name.is_set
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_operation() const
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
    for (std::size_t index=0; index<ospfv3_or_isis_or_application.size(); index++)
    {
        if(ospfv3_or_isis_or_application[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| (connected_or_static_or_subscriber_or_mobile !=  nullptr && connected_or_static_or_subscriber_or_mobile->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected-or-static-or-subscriber-or-mobile")
    {
        if(connected_or_static_or_subscriber_or_mobile == nullptr)
        {
            connected_or_static_or_subscriber_or_mobile = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile>();
        }
        return connected_or_static_or_subscriber_or_mobile;
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
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3-or-isis-or-application")
    {
        for(auto const & c : ospfv3_or_isis_or_application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication>();
        c->parent = this;
        ospfv3_or_isis_or_application.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected_or_static_or_subscriber_or_mobile != nullptr)
    {
        children["connected-or-static-or-subscriber-or-mobile"] = connected_or_static_or_subscriber_or_mobile;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3_or_isis_or_application)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected-or-static-or-subscriber-or-mobile" || name == "eigrp" || name == "ospfv3-or-isis-or-application" || name == "protocol-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::Bgp()
    :
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::~Bgp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-xx='" <<as_xx <<"']" <<"[as-yy='" <<as_yy <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "as-yy" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::ConnectedOrStaticOrSubscriberOrMobile()
    :
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "connected-or-static-or-subscriber-or-mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::~ConnectedOrStaticOrSubscriberOrMobile()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_data() const
{
    return default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-or-static-or-subscriber-or-mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::ConnectedOrStaticOrSubscriberOrMobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::Eigrp()
    :
    as_xx{YType::uint32, "as-xx"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::~Eigrp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_data() const
{
    return as_xx.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-xx='" <<as_xx <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-xx" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::Ospfv3OrIsisOrApplication()
    :
    process_name{YType::str, "process-name"},
    default_metric{YType::uint32, "default-metric"},
    eigrp_route_type{YType::enumeration, "eigrp-route-type"},
    external_route_type{YType::enumeration, "external-route-type"},
    internal_route_type{YType::enumeration, "internal-route-type"},
    isis_route_type{YType::enumeration, "isis-route-type"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_route_type{YType::enumeration, "nssa-external-route-type"},
    preserve_med{YType::empty, "preserve-med"},
    preserve_med_info{YType::empty, "preserve-med-info"},
    redistribute_route{YType::boolean, "redistribute-route"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "ospfv3-or-isis-or-application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::~Ospfv3OrIsisOrApplication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_data() const
{
    return process_name.is_set
	|| default_metric.is_set
	|| eigrp_route_type.is_set
	|| external_route_type.is_set
	|| internal_route_type.is_set
	|| isis_route_type.is_set
	|| metric_type.is_set
	|| nssa_external_route_type.is_set
	|| preserve_med.is_set
	|| preserve_med_info.is_set
	|| redistribute_route.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(eigrp_route_type.yfilter)
	|| ydk::is_set(external_route_type.yfilter)
	|| ydk::is_set(internal_route_type.yfilter)
	|| ydk::is_set(isis_route_type.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_route_type.yfilter)
	|| ydk::is_set(preserve_med.yfilter)
	|| ydk::is_set(preserve_med_info.yfilter)
	|| ydk::is_set(redistribute_route.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3-or-isis-or-application" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (eigrp_route_type.is_set || is_set(eigrp_route_type.yfilter)) leaf_name_data.push_back(eigrp_route_type.get_name_leafdata());
    if (external_route_type.is_set || is_set(external_route_type.yfilter)) leaf_name_data.push_back(external_route_type.get_name_leafdata());
    if (internal_route_type.is_set || is_set(internal_route_type.yfilter)) leaf_name_data.push_back(internal_route_type.get_name_leafdata());
    if (isis_route_type.is_set || is_set(isis_route_type.yfilter)) leaf_name_data.push_back(isis_route_type.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_route_type.is_set || is_set(nssa_external_route_type.yfilter)) leaf_name_data.push_back(nssa_external_route_type.get_name_leafdata());
    if (preserve_med.is_set || is_set(preserve_med.yfilter)) leaf_name_data.push_back(preserve_med.get_name_leafdata());
    if (preserve_med_info.is_set || is_set(preserve_med_info.yfilter)) leaf_name_data.push_back(preserve_med_info.get_name_leafdata());
    if (redistribute_route.is_set || is_set(redistribute_route.yfilter)) leaf_name_data.push_back(redistribute_route.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type = value;
        eigrp_route_type.value_namespace = name_space;
        eigrp_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route-type")
    {
        external_route_type = value;
        external_route_type.value_namespace = name_space;
        external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type = value;
        internal_route_type.value_namespace = name_space;
        internal_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type = value;
        isis_route_type.value_namespace = name_space;
        isis_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type = value;
        nssa_external_route_type.value_namespace = name_space;
        nssa_external_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med")
    {
        preserve_med = value;
        preserve_med.value_namespace = name_space;
        preserve_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info = value;
        preserve_med_info.value_namespace = name_space;
        preserve_med_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route = value;
        redistribute_route.value_namespace = name_space;
        redistribute_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "eigrp-route-type")
    {
        eigrp_route_type.yfilter = yfilter;
    }
    if(value_path == "external-route-type")
    {
        external_route_type.yfilter = yfilter;
    }
    if(value_path == "internal-route-type")
    {
        internal_route_type.yfilter = yfilter;
    }
    if(value_path == "isis-route-type")
    {
        isis_route_type.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-route-type")
    {
        nssa_external_route_type.yfilter = yfilter;
    }
    if(value_path == "preserve-med")
    {
        preserve_med.yfilter = yfilter;
    }
    if(value_path == "preserve-med-info")
    {
        preserve_med_info.yfilter = yfilter;
    }
    if(value_path == "redistribute-route")
    {
        redistribute_route.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Redistributes::Redistribute::Ospfv3OrIsisOrApplication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-name" || name == "default-metric" || name == "eigrp-route-type" || name == "external-route-type" || name == "internal-route-type" || name == "isis-route-type" || name == "metric-type" || name == "nssa-external-route-type" || name == "preserve-med" || name == "preserve-med-info" || name == "redistribute-route" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::Snmp()
    :
    context{YType::str, "context"}
    	,
    trap_rate_limit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit>())
{
    trap_rate_limit->parent = this;

    yang_name = "snmp"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::~Snmp()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_data() const
{
    return context.is_set
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context.yfilter)
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-rate-limit")
    {
        if(trap_rate_limit == nullptr)
        {
            trap_rate_limit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit>();
        }
        return trap_rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_rate_limit != nullptr)
    {
        children["trap-rate-limit"] = trap_rate_limit;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-rate-limit" || name == "context")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::TrapRateLimit()
    :
    max_window_traps{YType::uint32, "max-window-traps"},
    window_size{YType::uint32, "window-size"}
{

    yang_name = "trap-rate-limit"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::~TrapRateLimit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_data() const
{
    return max_window_traps.is_set
	|| window_size.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_window_traps.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_window_traps.is_set || is_set(max_window_traps.yfilter)) leaf_name_data.push_back(max_window_traps.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps = value;
        max_window_traps.value_namespace = name_space;
        max_window_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Snmp::TrapRateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-window-traps" || name == "window-size")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::StubRouter()
    :
    max_metric(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric>())
	,rbit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit>())
	,v6bit(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit>())
{
    max_metric->parent = this;
    rbit->parent = this;
    v6bit->parent = this;

    yang_name = "stub-router"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::~StubRouter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_data() const
{
    return (max_metric !=  nullptr && max_metric->has_data())
	|| (rbit !=  nullptr && rbit->has_data())
	|| (v6bit !=  nullptr && v6bit->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_operation() const
{
    return is_set(yfilter)
	|| (max_metric !=  nullptr && max_metric->has_operation())
	|| (rbit !=  nullptr && rbit->has_operation())
	|| (v6bit !=  nullptr && v6bit->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-metric")
    {
        if(max_metric == nullptr)
        {
            max_metric = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric>();
        }
        return max_metric;
    }

    if(child_yang_name == "rbit")
    {
        if(rbit == nullptr)
        {
            rbit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit>();
        }
        return rbit;
    }

    if(child_yang_name == "v6bit")
    {
        if(v6bit == nullptr)
        {
            v6bit = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit>();
        }
        return v6bit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_metric != nullptr)
    {
        children["max-metric"] = max_metric;
    }

    if(rbit != nullptr)
    {
        children["rbit"] = rbit;
    }

    if(v6bit != nullptr)
    {
        children["v6bit"] = v6bit;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-metric" || name == "rbit" || name == "v6bit")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::MaxMetric()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "max-metric"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::~MaxMetric()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "max-metric"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::Rbit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "rbit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::~Rbit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "rbit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::Rbit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::V6Bit()
    :
    always{YType::empty, "always"},
    enable{YType::empty, "enable"},
    external_lsa{YType::uint32, "external-lsa"},
    include_stub{YType::empty, "include-stub"},
    on_proc_migration{YType::uint32, "on-proc-migration"},
    on_proc_restart{YType::uint32, "on-proc-restart"},
    on_switchover{YType::uint32, "on-switchover"},
    summary_lsa{YType::uint32, "summary-lsa"}
    	,
    on_startup(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup>())
{
    on_startup->parent = this;

    yang_name = "v6bit"; yang_parent_name = "stub-router"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::~V6Bit()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_data() const
{
    return always.is_set
	|| enable.is_set
	|| external_lsa.is_set
	|| include_stub.is_set
	|| on_proc_migration.is_set
	|| on_proc_restart.is_set
	|| on_switchover.is_set
	|| summary_lsa.is_set
	|| (on_startup !=  nullptr && on_startup->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(external_lsa.yfilter)
	|| ydk::is_set(include_stub.yfilter)
	|| ydk::is_set(on_proc_migration.yfilter)
	|| ydk::is_set(on_proc_restart.yfilter)
	|| ydk::is_set(on_switchover.yfilter)
	|| ydk::is_set(summary_lsa.yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6bit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (external_lsa.is_set || is_set(external_lsa.yfilter)) leaf_name_data.push_back(external_lsa.get_name_leafdata());
    if (include_stub.is_set || is_set(include_stub.yfilter)) leaf_name_data.push_back(include_stub.get_name_leafdata());
    if (on_proc_migration.is_set || is_set(on_proc_migration.yfilter)) leaf_name_data.push_back(on_proc_migration.get_name_leafdata());
    if (on_proc_restart.is_set || is_set(on_proc_restart.yfilter)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_switchover.is_set || is_set(on_switchover.yfilter)) leaf_name_data.push_back(on_switchover.get_name_leafdata());
    if (summary_lsa.is_set || is_set(summary_lsa.yfilter)) leaf_name_data.push_back(summary_lsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup>();
        }
        return on_startup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-lsa")
    {
        external_lsa = value;
        external_lsa.value_namespace = name_space;
        external_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-stub")
    {
        include_stub = value;
        include_stub.value_namespace = name_space;
        include_stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration = value;
        on_proc_migration.value_namespace = name_space;
        on_proc_migration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
        on_proc_restart.value_namespace = name_space;
        on_proc_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-switchover")
    {
        on_switchover = value;
        on_switchover.value_namespace = name_space;
        on_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa = value;
        summary_lsa.value_namespace = name_space;
        summary_lsa.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "external-lsa")
    {
        external_lsa.yfilter = yfilter;
    }
    if(value_path == "include-stub")
    {
        include_stub.yfilter = yfilter;
    }
    if(value_path == "on-proc-migration")
    {
        on_proc_migration.yfilter = yfilter;
    }
    if(value_path == "on-proc-restart")
    {
        on_proc_restart.yfilter = yfilter;
    }
    if(value_path == "on-switchover")
    {
        on_switchover.yfilter = yfilter;
    }
    if(value_path == "summary-lsa")
    {
        summary_lsa.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "always" || name == "enable" || name == "external-lsa" || name == "include-stub" || name == "on-proc-migration" || name == "on-proc-restart" || name == "on-switchover" || name == "summary-lsa")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{

    yang_name = "on-startup"; yang_parent_name = "v6bit"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wait_for_bgp.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.yfilter)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
        wait_for_bgp.value_namespace = name_space;
        wait_for_bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::V6Bit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wait-for-bgp" || name == "wait-time")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefixes()
{

    yang_name = "summary-prefixes"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary-prefix")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{

    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(not_advertise.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
        not_advertise.value_namespace = name_space;
        not_advertise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "not-advertise")
    {
        not_advertise.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::SummaryPrefixes::SummaryPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "not-advertise" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Timers()
    :
    lsa_timers(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers>())
	,pacing(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing>())
	,throttle(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle>())
{
    lsa_timers->parent = this;
    pacing->parent = this;
    throttle->parent = this;

    yang_name = "timers"; yang_parent_name = "default-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::~Timers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_data() const
{
    return (lsa_timers !=  nullptr && lsa_timers->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (lsa_timers !=  nullptr && lsa_timers->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa-timers")
    {
        if(lsa_timers == nullptr)
        {
            lsa_timers = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers>();
        }
        return lsa_timers;
    }

    if(child_yang_name == "pacing")
    {
        if(pacing == nullptr)
        {
            pacing = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing>();
        }
        return pacing;
    }

    if(child_yang_name == "throttle")
    {
        if(throttle == nullptr)
        {
            throttle = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle>();
        }
        return throttle;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsa_timers != nullptr)
    {
        children["lsa-timers"] = lsa_timers;
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

void Ospfv3::Processes::Process::DefaultVrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-timers" || name == "pacing" || name == "throttle")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::LsaTimers()
    :
    arrival{YType::uint32, "arrival"}
{

    yang_name = "lsa-timers"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::~LsaTimers()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_data() const
{
    return arrival.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arrival.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.yfilter)) leaf_name_data.push_back(arrival.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arrival")
    {
        arrival = value;
        arrival.value_namespace = name_space;
        arrival.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arrival")
    {
        arrival.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::LsaTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arrival")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{

    yang_name = "pacing"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::~Pacing()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flood.yfilter)
	|| ydk::is_set(lsa_group.yfilter)
	|| ydk::is_set(retransmission.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.yfilter)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.yfilter)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.yfilter)) leaf_name_data.push_back(retransmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Pacing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flood" || name == "lsa-group" || name == "retransmission")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    spf->parent = this;

    yang_name = "throttle"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::~Throttle()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_operation() const
{
    return is_set(yfilter)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "spf")
    {
        if(spf == nullptr)
        {
            spf = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf>();
        }
        return spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::get_children() const
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

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa" || name == "spf")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::Lsa()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{

    yang_name = "lsa"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "maximum-delay" || name == "minimum-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::Spf()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{

    yang_name = "spf"; yang_parent_name = "throttle"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::~Spf()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_delay.yfilter)
	|| ydk::is_set(maximum_delay.yfilter)
	|| ydk::is_set(minimum_delay.yfilter);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.yfilter)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.yfilter)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.yfilter)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
        first_delay.value_namespace = name_space;
        first_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
        maximum_delay.value_namespace = name_space;
        maximum_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
        minimum_delay.value_namespace = name_space;
        minimum_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-delay")
    {
        first_delay.yfilter = yfilter;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay.yfilter = yfilter;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::DefaultVrf::Timers::Throttle::Spf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-delay" || name == "maximum-delay" || name == "minimum-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::TraceBufs::TraceBufs()
{

    yang_name = "trace-bufs"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::TraceBufs::~TraceBufs()
{
}

bool Ospfv3::Processes::Process::TraceBufs::has_data() const
{
    for (std::size_t index=0; index<trace_buf.size(); index++)
    {
        if(trace_buf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::TraceBufs::has_operation() const
{
    for (std::size_t index=0; index<trace_buf.size(); index++)
    {
        if(trace_buf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::TraceBufs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-bufs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::TraceBufs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::TraceBufs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-buf")
    {
        for(auto const & c : trace_buf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::TraceBufs::TraceBuf>();
        c->parent = this;
        trace_buf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::TraceBufs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trace_buf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::TraceBufs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::TraceBufs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::TraceBufs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-buf")
        return true;
    return false;
}

Ospfv3::Processes::Process::TraceBufs::TraceBuf::TraceBuf()
    :
    trace_buf_name{YType::str, "trace-buf-name"},
    bufsize{YType::enumeration, "bufsize"}
{

    yang_name = "trace-buf"; yang_parent_name = "trace-bufs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::TraceBufs::TraceBuf::~TraceBuf()
{
}

bool Ospfv3::Processes::Process::TraceBufs::TraceBuf::has_data() const
{
    return trace_buf_name.is_set
	|| bufsize.is_set;
}

bool Ospfv3::Processes::Process::TraceBufs::TraceBuf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_buf_name.yfilter)
	|| ydk::is_set(bufsize.yfilter);
}

std::string Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-buf" <<"[trace-buf-name='" <<trace_buf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buf_name.is_set || is_set(trace_buf_name.yfilter)) leaf_name_data.push_back(trace_buf_name.get_name_leafdata());
    if (bufsize.is_set || is_set(bufsize.yfilter)) leaf_name_data.push_back(bufsize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::TraceBufs::TraceBuf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::TraceBufs::TraceBuf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-buf-name")
    {
        trace_buf_name = value;
        trace_buf_name.value_namespace = name_space;
        trace_buf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bufsize")
    {
        bufsize = value;
        bufsize.value_namespace = name_space;
        bufsize.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::TraceBufs::TraceBuf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-buf-name")
    {
        trace_buf_name.yfilter = yfilter;
    }
    if(value_path == "bufsize")
    {
        bufsize.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::TraceBufs::TraceBuf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-buf-name" || name == "bufsize")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
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
    authentication->parent = this;
    bfd->parent = this;
    capability->parent = this;
    database_filter->parent = this;
    default_information->parent = this;
    distance->parent = this;
    distribute_list->parent = this;
    distribute_list_out->parent = this;
    domain_id->parent = this;
    encryption->parent = this;
    fast_reroute->parent = this;
    graceful_restart->parent = this;
    ignore->parent = this;
    maximum->parent = this;
    process_scope->parent = this;
    redistributes->parent = this;
    snmp->parent = this;
    stub_router->parent = this;
    summary_prefixes->parent = this;
    timers->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(log_adjacency_changes.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(snmpvrf_trap.yfilter)
	|| ydk::is_set(spf_prefix_priority_policy.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.yfilter)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmpvrf_trap.is_set || is_set(snmpvrf_trap.yfilter)) leaf_name_data.push_back(snmpvrf_trap.get_name_leafdata());
    if (spf_prefix_priority_policy.is_set || is_set(spf_prefix_priority_policy.yfilter)) leaf_name_data.push_back(spf_prefix_priority_policy.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-addresses")
    {
        if(area_addresses == nullptr)
        {
            area_addresses = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses>();
        }
        return area_addresses;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost == nullptr)
        {
            auto_cost = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost>();
        }
        return auto_cost;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "distribute-list-out")
    {
        if(distribute_list_out == nullptr)
        {
            distribute_list_out = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut>();
        }
        return distribute_list_out;
    }

    if(child_yang_name == "domain-id")
    {
        if(domain_id == nullptr)
        {
            domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId>();
        }
        return domain_id;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "process-scope")
    {
        if(process_scope == nullptr)
        {
            process_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope>();
        }
        return process_scope;
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes == nullptr)
        {
            redistributes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes>();
        }
        return redistributes;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "stub-router")
    {
        if(stub_router == nullptr)
        {
            stub_router = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter>();
        }
        return stub_router;
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes == nullptr)
        {
            summary_prefixes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
        }
        return summary_prefixes;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_addresses != nullptr)
    {
        children["area-addresses"] = area_addresses;
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

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(distribute_list_out != nullptr)
    {
        children["distribute-list-out"] = distribute_list_out;
    }

    if(domain_id != nullptr)
    {
        children["domain-id"] = domain_id;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(process_scope != nullptr)
    {
        children["process-scope"] = process_scope;
    }

    if(redistributes != nullptr)
    {
        children["redistributes"] = redistributes;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(stub_router != nullptr)
    {
        children["stub-router"] = stub_router;
    }

    if(summary_prefixes != nullptr)
    {
        children["summary-prefixes"] = summary_prefixes;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
        log_adjacency_changes.value_namespace = name_space;
        log_adjacency_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmpvrf-trap")
    {
        snmpvrf_trap = value;
        snmpvrf_trap.value_namespace = name_space;
        snmpvrf_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-prefix-priority-policy")
    {
        spf_prefix_priority_policy = value;
        spf_prefix_priority_policy.value_namespace = name_space;
        spf_prefix_priority_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "snmpvrf-trap")
    {
        snmpvrf_trap.yfilter = yfilter;
    }
    if(value_path == "spf-prefix-priority-policy")
    {
        spf_prefix_priority_policy.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-addresses" || name == "authentication" || name == "auto-cost" || name == "bfd" || name == "capability" || name == "database-filter" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "distribute-list-out" || name == "domain-id" || name == "encryption" || name == "fast-reroute" || name == "graceful-restart" || name == "ignore" || name == "maximum" || name == "process-scope" || name == "redistributes" || name == "snmp" || name == "stub-router" || name == "summary-prefixes" || name == "timers" || name == "vrf-name" || name == "cost" || name == "dead-interval" || name == "default-metric" || name == "demand-circuit" || name == "enable" || name == "flood-reduction" || name == "hello-interval" || name == "instance" || name == "log-adjacency-changes" || name == "mtu-ignore" || name == "network" || name == "packet-size" || name == "passive" || name == "prefix-suppression" || name == "priority" || name == "retransmit-interval" || name == "router-id" || name == "snmpvrf-trap" || name == "spf-prefix-priority-policy" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddresses()
{

    yang_name = "area-addresses"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-address")
    {
        for(auto const & c : area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress>();
        c->parent = this;
        area_address.push_back(c);
        return c;
    }

    if(child_yang_name == "area-area-id")
    {
        for(auto const & c : area_area_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId>();
        c->parent = this;
        area_area_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : area_area_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-address" || name == "area-area-id")
        return true;
    return false;
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
    authentication->parent = this;
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    encryption->parent = this;
    interfaces->parent = this;
    nssa->parent = this;
    ranges->parent = this;
    sham_links->parent = this;
    virtual_links->parent = this;

    yang_name = "area-address"; yang_parent_name = "area-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(stub.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (stub.is_set || is_set(stub.yfilter)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-scope")
    {
        if(area_scope == nullptr)
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope>();
        }
        return area_scope;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links == nullptr)
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks>();
        }
        return sham_links;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_scope != nullptr)
    {
        children["area-scope"] = area_scope;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(sham_links != nullptr)
    {
        children["sham-links"] = sham_links;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub")
    {
        stub = value;
        stub.value_namespace = name_space;
        stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "stub")
    {
        stub.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-scope" || name == "authentication" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "encryption" || name == "interfaces" || name == "nssa" || name == "ranges" || name == "sham-links" || name == "virtual-links" || name == "address" || name == "cost" || name == "dead-interval" || name == "default-cost" || name == "demand-circuit" || name == "enable" || name == "flood-reduction" || name == "hello-interval" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "network" || name == "packet-size" || name == "passive" || name == "prefix-suppression" || name == "priority" || name == "retransmit-interval" || name == "stub" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;

    yang_name = "area-scope"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    encryption->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "encryption" || name == "fast-reroute" || name == "neighbors" || name == "interface-name" || name == "cost" || name == "dead-interval" || name == "demand-circuit" || name == "enable" || name == "flood-reduction" || name == "hello-interval" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "network" || name == "packet-size" || name == "passive" || name == "prefix-suppression" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
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

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority" || name == "zone")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "nssa"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
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
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-info-originate" || name == "metric" || name == "metric-type" || name == "no-redistribution" || name == "no-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::boolean, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLinks()
{

    yang_name = "sham-links"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::ShamLink()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
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
    encryption->parent = this;

    yang_name = "sham-link"; yang_parent_name = "sham-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "source-address" || name == "destination-address" || name == "dead-interval" || name == "enable" || name == "hello-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "area-address"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
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
    encryption->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_address.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.yfilter)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
        virtual_link_address.value_namespace = name_space;
        virtual_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "virtual-link-address" || name == "dead-interval" || name == "enable" || name == "hello-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaAreaId()
    :
    area_id{YType::uint32, "area-id"},
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
    authentication->parent = this;
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    encryption->parent = this;
    interfaces->parent = this;
    nssa->parent = this;
    ranges->parent = this;
    sham_links->parent = this;
    virtual_links->parent = this;

    yang_name = "area-area-id"; yang_parent_name = "area-addresses"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(default_cost.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(stub.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.yfilter)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (stub.is_set || is_set(stub.yfilter)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-scope")
    {
        if(area_scope == nullptr)
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>();
        }
        return area_scope;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "nssa")
    {
        if(nssa == nullptr)
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>();
        }
        return nssa;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links == nullptr)
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks>();
        }
        return sham_links;
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links == nullptr)
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks>();
        }
        return virtual_links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_scope != nullptr)
    {
        children["area-scope"] = area_scope;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(nssa != nullptr)
    {
        children["nssa"] = nssa;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(sham_links != nullptr)
    {
        children["sham-links"] = sham_links;
    }

    if(virtual_links != nullptr)
    {
        children["virtual-links"] = virtual_links;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
        default_cost.value_namespace = name_space;
        default_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub")
    {
        stub = value;
        stub.value_namespace = name_space;
        stub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "default-cost")
    {
        default_cost.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "stub")
    {
        stub.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-scope" || name == "authentication" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "encryption" || name == "interfaces" || name == "nssa" || name == "ranges" || name == "sham-links" || name == "virtual-links" || name == "area-id" || name == "cost" || name == "dead-interval" || name == "default-cost" || name == "demand-circuit" || name == "enable" || name == "flood-reduction" || name == "hello-interval" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "network" || name == "packet-size" || name == "passive" || name == "prefix-suppression" || name == "priority" || name == "retransmit-interval" || name == "stub" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;

    yang_name = "area-scope"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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
    bfd->parent = this;
    database_filter->parent = this;
    distribute_list->parent = this;
    encryption->parent = this;
    fast_reroute->parent = this;
    neighbors->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(demand_circuit.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ldp_sync.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(packet_size.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| ydk::is_set(prefix_suppression.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
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

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.yfilter)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.yfilter)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.yfilter)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.yfilter)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
        demand_circuit.value_namespace = name_space;
        demand_circuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
        ldp_sync.value_namespace = name_space;
        ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
        packet_size.value_namespace = name_space;
        packet_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
        prefix_suppression.value_namespace = name_space;
        prefix_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "packet-size")
    {
        packet_size.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "bfd" || name == "database-filter" || name == "distribute-list" || name == "encryption" || name == "fast-reroute" || name == "neighbors" || name == "interface-name" || name == "cost" || name == "dead-interval" || name == "demand-circuit" || name == "enable" || name == "flood-reduction" || name == "hello-interval" || name == "instance" || name == "ldp-sync" || name == "mtu-ignore" || name == "network" || name == "packet-size" || name == "passive" || name == "prefix-suppression" || name == "priority" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_enable.yfilter)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.yfilter)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-link")
    {
        if(per_link == nullptr)
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>();
        }
        return per_link;
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_link != nullptr)
    {
        children["per-link"] = per_link;
    }

    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
        fast_reroute_enable.value_namespace = name_space;
        fast_reroute_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-link" || name == "per-prefix" || name == "fast-reroute-enable")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-link"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    exclude_interfaces->parent = this;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute_use_candidate_only.yfilter)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.yfilter)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces == nullptr)
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
        }
        return candidate_interfaces;
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces == nullptr)
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
        }
        return exclude_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_interfaces != nullptr)
    {
        children["candidate-interfaces"] = candidate_interfaces;
    }

    if(exclude_interfaces != nullptr)
    {
        children["exclude-interfaces"] = exclude_interfaces;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
        fast_reroute_use_candidate_only.value_namespace = name_space;
        fast_reroute_use_candidate_only.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interfaces" || name == "exclude-interfaces" || name == "fast-reroute-use-candidate-only")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{

    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{

    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-interface")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
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

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(database_filter.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.yfilter)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
        database_filter.value_namespace = name_space;
        database_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "database-filter")
    {
        database_filter.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "cost" || name == "database-filter" || name == "poll-interval" || name == "priority" || name == "zone")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::empty, "no-summary"}
{

    yang_name = "nssa"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(default_info_originate.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(no_redistribution.yfilter)
	|| ydk::is_set(no_summary.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.yfilter)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.yfilter)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.yfilter)) leaf_name_data.push_back(no_summary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
        default_info_originate.value_namespace = name_space;
        default_info_originate.value_namespace_prefix = name_space_prefix;
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
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution.yfilter = yfilter;
    }
    if(value_path == "no-summary")
    {
        no_summary.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-info-originate" || name == "metric" || name == "metric-type" || name == "no-redistribution" || name == "no-summary")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::boolean, "not-advertise"}
{

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(not_advertise.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.yfilter)) leaf_name_data.push_back(not_advertise.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
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

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "cost" || name == "not-advertise")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLinks()
{

    yang_name = "sham-links"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sham_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sham-link")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::ShamLink()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
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
    encryption->parent = this;

    yang_name = "sham-link"; yang_parent_name = "sham-links"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
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
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "source-address" || name == "destination-address" || name == "dead-interval" || name == "enable" || name == "hello-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "sham-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLinks()
{

    yang_name = "virtual-links"; yang_parent_name = "area-area-id"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-link")
        return true;
    return false;
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
    encryption->parent = this;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(virtual_link_address.yfilter)
	|| ydk::is_set(dead_interval.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.yfilter)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.yfilter)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption>();
        }
        return encryption;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
        virtual_link_address.value_namespace = name_space;
        virtual_link_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
        dead_interval.value_namespace = name_space;
        dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address.yfilter = yfilter;
    }
    if(value_path == "dead-interval")
    {
        dead_interval.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "encryption" || name == "virtual-link-address" || name == "dead-interval" || name == "enable" || name == "hello-interval" || name == "retransmit-interval" || name == "transmit-delay")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
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

    yang_name = "encryption"; yang_parent_name = "virtual-link"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(authentication_algorithm.yfilter)
	|| ydk::is_set(authentication_password.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(encryption_algorithm.yfilter)
	|| ydk::is_set(encryption_password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.yfilter)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.yfilter)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.yfilter)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.yfilter)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
        authentication_algorithm.value_namespace = name_space;
        authentication_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
        authentication_password.value_namespace = name_space;
        authentication_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
        encryption_algorithm.value_namespace = name_space;
        encryption_algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
        encryption_password.value_namespace = name_space;
        encryption_password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm.yfilter = yfilter;
    }
    if(value_path == "authentication-password")
    {
        authentication_password.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm.yfilter = yfilter;
    }
    if(value_path == "encryption-password")
    {
        encryption_password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-algorithm" || name == "authentication-password" || name == "enable" || name == "encryption-algorithm" || name == "encryption-password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{

    yang_name = "authentication"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(spi.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.yfilter)) leaf_name_data.push_back(spi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spi")
    {
        spi = value;
        spi.value_namespace = name_space;
        spi.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "spi")
    {
        spi.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "enable" || name == "password" || name == "spi")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::AutoCost()
    :
    disable{YType::empty, "disable"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{

    yang_name = "auto-cost"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::~AutoCost()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::has_data() const
{
    return disable.is_set
	|| reference_bandwidth.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(reference_bandwidth.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.yfilter)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
        reference_bandwidth.value_namespace = name_space;
        reference_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "reference-bandwidth")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{

    yang_name = "bfd"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(fast_detect_mode.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.yfilter)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
        fast_detect_mode.value_namespace = name_space;
        fast_detect_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection-multiplier" || name == "fast-detect-mode" || name == "interval")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Capability::Capability()
    :
    vrf_lite{YType::boolean, "vrf-lite"}
{

    yang_name = "capability"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(vrf_lite.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_lite.is_set || is_set(vrf_lite.yfilter)) leaf_name_data.push_back(vrf_lite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-lite")
    {
        vrf_lite = value;
        vrf_lite.value_namespace = name_space;
        vrf_lite.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-lite")
    {
        vrf_lite.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-lite")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All>())
{
    all->parent = this;

    yang_name = "database-filter"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::All()
    :
    out{YType::empty, "out"}
{

    yang_name = "all"; yang_parent_name = "database-filter"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::Originate()
    :
    always{YType::boolean, "always"},
    metric{YType::uint32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::uint32, "tag"}
{

    yang_name = "originate"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::~Originate()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::has_data() const
{
    return always.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_policy_name.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always" || name == "metric" || name == "metric-type" || name == "route-policy-name" || name == "tag")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Distance()
    :
    administrative{YType::uint32, "administrative"}
    	,
    ospfv3(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_>())
{
    ospfv3->parent = this;

    yang_name = "distance"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::~Distance()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::has_data() const
{
    return administrative.is_set
	|| (ospfv3 !=  nullptr && ospfv3->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative.yfilter)
	|| (ospfv3 !=  nullptr && ospfv3->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative.is_set || is_set(administrative.yfilter)) leaf_name_data.push_back(administrative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_>();
        }
        return ospfv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative")
    {
        administrative = value;
        administrative.value_namespace = name_space;
        administrative.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative")
    {
        administrative.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ospfv3" || name == "administrative")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::Ospfv3_()
    :
    external{YType::uint32, "external"},
    inter_area{YType::uint32, "inter-area"},
    intra_area{YType::uint32, "intra-area"}
{

    yang_name = "ospfv3"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::~Ospfv3_()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::has_data() const
{
    return external.is_set
	|| inter_area.is_set
	|| intra_area.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(inter_area.yfilter)
	|| ydk::is_set(intra_area.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (inter_area.is_set || is_set(inter_area.yfilter)) leaf_name_data.push_back(inter_area.get_name_leafdata());
    if (intra_area.is_set || is_set(intra_area.yfilter)) leaf_name_data.push_back(intra_area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area")
    {
        inter_area = value;
        inter_area.value_namespace = name_space;
        inter_area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-area")
    {
        intra_area = value;
        intra_area.value_namespace = name_space;
        intra_area.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "inter-area")
    {
        inter_area.yfilter = yfilter;
    }
    if(value_path == "intra-area")
    {
        intra_area.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Distance::Ospfv3_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "inter-area" || name == "intra-area")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In>())
{
    in->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "in"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeListOut()
    :
    distribute_outs(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts>())
{
    distribute_outs->parent = this;

    yang_name = "distribute-list-out"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::~DistributeListOut()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::has_data() const
{
    return (distribute_outs !=  nullptr && distribute_outs->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::has_operation() const
{
    return is_set(yfilter)
	|| (distribute_outs !=  nullptr && distribute_outs->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-outs")
    {
        if(distribute_outs == nullptr)
        {
            distribute_outs = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts>();
        }
        return distribute_outs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distribute_outs != nullptr)
    {
        children["distribute-outs"] = distribute_outs;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-outs")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOuts()
{

    yang_name = "distribute-outs"; yang_parent_name = "distribute-list-out"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::~DistributeOuts()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::has_data() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::has_operation() const
{
    for (std::size_t index=0; index<distribute_out.size(); index++)
    {
        if(distribute_out[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-outs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute-out")
    {
        for(auto const & c : distribute_out)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut>();
        c->parent = this;
        distribute_out.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distribute_out)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute-out")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::DistributeOut()
    :
    protocol_name{YType::enumeration, "protocol-name"}
{

    yang_name = "distribute-out"; yang_parent_name = "distribute-outs"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::~DistributeOut()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::has_data() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::has_operation() const
{
    for (std::size_t index=0; index<as_yy_and_as_xx_and_process_name.size(); index++)
    {
        if(as_yy_and_as_xx_and_process_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-out" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-yy-and-as-xx-and-process-name")
    {
        for(auto const & c : as_yy_and_as_xx_and_process_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName>();
        c->parent = this;
        as_yy_and_as_xx_and_process_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_yy_and_as_xx_and_process_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy-and-as-xx-and-process-name" || name == "protocol-name")
        return true;
    return false;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::AsYyAndAsXxAndProcessName()
    :
    as_yy{YType::uint32, "as-yy"},
    as_xx{YType::uint32, "as-xx"},
    process_name{YType::str, "process-name"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "as-yy-and-as-xx-and-process-name"; yang_parent_name = "distribute-out"; is_top_level_class = false; has_list_ancestor = true;
}

Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::~AsYyAndAsXxAndProcessName()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_data() const
{
    return as_yy.is_set
	|| as_xx.is_set
	|| process_name.is_set
	|| prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_yy.yfilter)
	|| ydk::is_set(as_xx.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-yy-and-as-xx-and-process-name" <<"[as-yy='" <<as_yy <<"']" <<"[as-xx='" <<as_xx <<"']" <<"[process-name='" <<process_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_yy.is_set || is_set(as_yy.yfilter)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.yfilter)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-yy")
    {
        as_yy = value;
        as_yy.value_namespace = name_space;
        as_yy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
        as_xx.value_namespace = name_space;
        as_xx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-yy")
    {
        as_yy.yfilter = yfilter;
    }
    if(value_path == "as-xx")
    {
        as_xx.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut::DistributeOuts::DistributeOut::AsYyAndAsXxAndProcessName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-yy" || name == "as-xx" || name == "process-name" || name == "prefix-list")
        return true;
    return false;
}


}
}

