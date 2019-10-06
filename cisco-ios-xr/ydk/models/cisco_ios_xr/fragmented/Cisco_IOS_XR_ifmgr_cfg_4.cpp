
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::AutorouteAnnounce()
    :
    enable{YType::empty, "enable"},
    include_ipv6{YType::empty, "include-ipv6"}
        ,
    exclude_traffic(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>())
    , metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>())
{
    exclude_traffic->parent = this;
    metric->parent = this;

    yang_name = "autoroute-announce"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::~AutorouteAnnounce()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| include_ipv6.is_set
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_data())
	|| (metric !=  nullptr && metric->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(include_ipv6.yfilter)
	|| (exclude_traffic !=  nullptr && exclude_traffic->has_operation())
	|| (metric !=  nullptr && metric->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (include_ipv6.is_set || is_set(include_ipv6.yfilter)) leaf_name_data.push_back(include_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude-traffic")
    {
        if(exclude_traffic == nullptr)
        {
            exclude_traffic = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic>();
        }
        return exclude_traffic;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exclude_traffic != nullptr)
    {
        _children["exclude-traffic"] = exclude_traffic;
    }

    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6 = value;
        include_ipv6.value_namespace = name_space;
        include_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "include-ipv6")
    {
        include_ipv6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude-traffic" || name == "metric" || name == "enable" || name == "include-ipv6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::ExcludeTraffic()
    :
    segment_routing{YType::empty, "segment-routing"}
{

    yang_name = "exclude-traffic"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::~ExcludeTraffic()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_data() const
{
    if (is_presence_container) return true;
    return segment_routing.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_routing.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::ExcludeTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment-routing")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::Metric()
    :
    metric_type{YType::enumeration, "metric-type"},
    absolute_metric{YType::uint32, "absolute-metric"},
    relative_metric{YType::int32, "relative-metric"},
    constant_metric{YType::uint32, "constant-metric"}
{

    yang_name = "metric"; yang_parent_name = "autoroute-announce"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_type.is_set
	|| absolute_metric.is_set
	|| relative_metric.is_set
	|| constant_metric.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(absolute_metric.yfilter)
	|| ydk::is_set(relative_metric.yfilter)
	|| ydk::is_set(constant_metric.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (absolute_metric.is_set || is_set(absolute_metric.yfilter)) leaf_name_data.push_back(absolute_metric.get_name_leafdata());
    if (relative_metric.is_set || is_set(relative_metric.yfilter)) leaf_name_data.push_back(relative_metric.get_name_leafdata());
    if (constant_metric.is_set || is_set(constant_metric.yfilter)) leaf_name_data.push_back(constant_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric = value;
        absolute_metric.value_namespace = name_space;
        absolute_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-metric")
    {
        relative_metric = value;
        relative_metric.value_namespace = name_space;
        relative_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constant-metric")
    {
        constant_metric = value;
        constant_metric.value_namespace = name_space;
        constant_metric.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "absolute-metric")
    {
        absolute_metric.yfilter = yfilter;
    }
    if(value_path == "relative-metric")
    {
        relative_metric.yfilter = yfilter;
    }
    if(value_path == "constant-metric")
    {
        constant_metric.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-type" || name == "absolute-metric" || name == "relative-metric" || name == "constant-metric")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destinations()
    :
    destination(this, {"destination_address"})
{

    yang_name = "destinations"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::~Destinations()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_operation() const
{
    for (std::size_t index=0; index<destination.len(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination>();
        ent_->parent = this;
        destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"}
{

    yang_name = "destination"; yang_parent_name = "destinations"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_data() const
{
    if (is_presence_container) return true;
    return destination_address.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    ADD_KEY_TOKEN(destination_address, "destination-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-address")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::PolicyClasses()
    :
    policy_class{YType::uint32, "policy-class"}
{

    yang_name = "policy-classes"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::~PolicyClasses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_operation() const
{
    for (auto const & leaf : policy_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(policy_class.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto policy_class_name_datas = policy_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), policy_class_name_datas.begin(), policy_class_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-class")
    {
        policy_class.append(value);
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypes()
    :
    new_style_affinity_affinity_type(this, {"affinity_type"})
    , new_style_affinity_affinity_type_affinity1(this, {"affinity_type", "affinity1"})
    , new_style_affinity_affinity_type_affinity1_affinity2(this, {"affinity_type", "affinity1", "affinity2"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3(this, {"affinity_type", "affinity1", "affinity2", "affinity3"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9"})
    , new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinity-affinity-types"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::~NewStyleAffinityAffinityTypes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity_affinity_type.len(); index++)
    {
        if(new_style_affinity_affinity_type[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.len(); index++)
    {
        if(new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity-affinity-type")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType>();
        ent_->parent = this;
        new_style_affinity_affinity_type.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.append(ent_);
        return ent_;
    }

    if(child_yang_name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10>();
        ent_->parent = this;
        new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity-affinity-type" || name == "new-style-affinity-affinity-type-affinity1" || name == "new-style-affinity-affinity-type-affinity1-affinity2" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9" || name == "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::NewStyleAffinityAffinityType()
    :
    affinity_type{YType::enumeration, "affinity-type"}
{

    yang_name = "new-style-affinity-affinity-type"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::~NewStyleAffinityAffinityType()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::NewStyleAffinityAffinityTypeAffinity1()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::~NewStyleAffinityAffinityTypeAffinity1()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::NewStyleAffinityAffinityTypeAffinity1Affinity2()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::~NewStyleAffinityAffinityTypeAffinity1Affinity2()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10"; yang_parent_name = "new-style-affinity-affinity-types"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity-affinity-type-affinity1-affinity2-affinity3-affinity4-affinity5-affinity6-affinity7-affinity8-affinity9-affinity10";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    ADD_KEY_TOKEN(affinity10, "affinity10");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::FastReroute()
    :
    bandwidth_protection{YType::uint32, "bandwidth-protection"},
    node_protection{YType::uint32, "node-protection"}
{

    yang_name = "fast-reroute"; yang_parent_name = "tunnel-te-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::~FastReroute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_protection.is_set
	|| node_protection.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_protection.yfilter)
	|| ydk::is_set(node_protection.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_protection.is_set || is_set(bandwidth_protection.yfilter)) leaf_name_data.push_back(bandwidth_protection.get_name_leafdata());
    if (node_protection.is_set || is_set(node_protection.yfilter)) leaf_name_data.push_back(node_protection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection = value;
        bandwidth_protection.value_namespace = name_space;
        bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protection")
    {
        node_protection = value;
        node_protection.value_namespace = name_space;
        node_protection.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-protection")
    {
        bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "node-protection")
    {
        node_protection.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-protection" || name == "node-protection")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::TransportProfileTunnel()
    :
    source{YType::str, "source"}
        ,
    bfd(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>())
    , working_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>())
    , destination(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>())
    , fault(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>())
    , protect_lsp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>())
{
    bfd->parent = this;
    working_lsp->parent = this;
    destination->parent = this;
    fault->parent = this;
    protect_lsp->parent = this;

    yang_name = "transport-profile-tunnel"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::~TransportProfileTunnel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_data() const
{
    if (is_presence_container) return true;
    return source.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (destination !=  nullptr && destination->has_data())
	|| (fault !=  nullptr && fault->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (destination !=  nullptr && destination->has_operation())
	|| (fault !=  nullptr && fault->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:transport-profile-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fault")
    {
        if(fault == nullptr)
        {
            fault = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault>();
        }
        return fault;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(working_lsp != nullptr)
    {
        _children["working-lsp"] = working_lsp;
    }

    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(fault != nullptr)
    {
        _children["fault"] = fault;
    }

    if(protect_lsp != nullptr)
    {
        _children["protect-lsp"] = protect_lsp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "working-lsp" || name == "destination" || name == "fault" || name == "protect-lsp" || name == "source")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    enable{YType::empty, "enable"},
    multiplier_standby{YType::uint32, "multiplier-standby"}
        ,
    min_interval(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>())
    , min_interval_standby(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>())
{
    min_interval->parent = this;
    min_interval_standby->parent = this;

    yang_name = "bfd"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return detection_multiplier.is_set
	|| enable.is_set
	|| multiplier_standby.is_set
	|| (min_interval !=  nullptr && min_interval->has_data())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(multiplier_standby.yfilter)
	|| (min_interval !=  nullptr && min_interval->has_operation())
	|| (min_interval_standby !=  nullptr && min_interval_standby->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (multiplier_standby.is_set || is_set(multiplier_standby.yfilter)) leaf_name_data.push_back(multiplier_standby.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-interval")
    {
        if(min_interval == nullptr)
        {
            min_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval>();
        }
        return min_interval;
    }

    if(child_yang_name == "min-interval-standby")
    {
        if(min_interval_standby == nullptr)
        {
            min_interval_standby = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby>();
        }
        return min_interval_standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min_interval != nullptr)
    {
        _children["min-interval"] = min_interval;
    }

    if(min_interval_standby != nullptr)
    {
        _children["min-interval-standby"] = min_interval_standby;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby = value;
        multiplier_standby.value_namespace = name_space;
        multiplier_standby.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "multiplier-standby")
    {
        multiplier_standby.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval" || name == "min-interval-standby" || name == "detection-multiplier" || name == "enable" || name == "multiplier-standby")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::MinInterval()
    :
    interval_ms{YType::uint32, "interval-ms"},
    interval_us{YType::uint32, "interval-us"}
{

    yang_name = "min-interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::~MinInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_data() const
{
    if (is_presence_container) return true;
    return interval_ms.is_set
	|| interval_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_ms.yfilter)
	|| ydk::is_set(interval_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_ms.is_set || is_set(interval_ms.yfilter)) leaf_name_data.push_back(interval_ms.get_name_leafdata());
    if (interval_us.is_set || is_set(interval_us.yfilter)) leaf_name_data.push_back(interval_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-ms")
    {
        interval_ms = value;
        interval_ms.value_namespace = name_space;
        interval_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-us")
    {
        interval_us = value;
        interval_us.value_namespace = name_space;
        interval_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-ms")
    {
        interval_ms.yfilter = yfilter;
    }
    if(value_path == "interval-us")
    {
        interval_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-ms" || name == "interval-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::MinIntervalStandby()
    :
    interval_standby_ms{YType::uint32, "interval-standby-ms"},
    interval_standby_us{YType::uint32, "interval-standby-us"}
{

    yang_name = "min-interval-standby"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::~MinIntervalStandby()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_data() const
{
    if (is_presence_container) return true;
    return interval_standby_ms.is_set
	|| interval_standby_us.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval_standby_ms.yfilter)
	|| ydk::is_set(interval_standby_us.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-interval-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval_standby_ms.is_set || is_set(interval_standby_ms.yfilter)) leaf_name_data.push_back(interval_standby_ms.get_name_leafdata());
    if (interval_standby_us.is_set || is_set(interval_standby_us.yfilter)) leaf_name_data.push_back(interval_standby_us.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms = value;
        interval_standby_ms.value_namespace = name_space;
        interval_standby_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us = value;
        interval_standby_us.value_namespace = name_space;
        interval_standby_us.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval-standby-ms")
    {
        interval_standby_ms.yfilter = yfilter;
    }
    if(value_path == "interval-standby-us")
    {
        interval_standby_us.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Bfd::MinIntervalStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval-standby-ms" || name == "interval-standby-us")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::WorkingLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
        ,
    out_label(nullptr) // presence node
{

    yang_name = "working-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::~WorkingLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out_label != nullptr)
    {
        _children["out-label"] = out_label;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "working-lsp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::WorkingLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::Destination()
    :
    node_id{YType::str, "node-id"},
    global_id{YType::uint32, "global-id"},
    tunnel_id{YType::uint32, "tunnel-id"}
{

    yang_name = "destination"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::~Destination()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| global_id.is_set
	|| tunnel_id.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(tunnel_id.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "global-id" || name == "tunnel-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::Fault()
    :
    enable{YType::empty, "enable"}
        ,
    protection_trigger(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>())
{
    protection_trigger->parent = this;

    yang_name = "fault"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::~Fault()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (protection_trigger !=  nullptr && protection_trigger->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (protection_trigger !=  nullptr && protection_trigger->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection-trigger")
    {
        if(protection_trigger == nullptr)
        {
            protection_trigger = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger>();
        }
        return protection_trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protection_trigger != nullptr)
    {
        _children["protection-trigger"] = protection_trigger;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection-trigger" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::ProtectionTrigger()
    :
    ldi{YType::boolean, "ldi"},
    ais{YType::boolean, "ais"},
    lkr{YType::boolean, "lkr"}
{

    yang_name = "protection-trigger"; yang_parent_name = "fault"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::~ProtectionTrigger()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_data() const
{
    if (is_presence_container) return true;
    return ldi.is_set
	|| ais.is_set
	|| lkr.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldi.yfilter)
	|| ydk::is_set(ais.yfilter)
	|| ydk::is_set(lkr.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection-trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldi.is_set || is_set(ldi.yfilter)) leaf_name_data.push_back(ldi.get_name_leafdata());
    if (ais.is_set || is_set(ais.yfilter)) leaf_name_data.push_back(ais.get_name_leafdata());
    if (lkr.is_set || is_set(lkr.yfilter)) leaf_name_data.push_back(lkr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldi")
    {
        ldi = value;
        ldi.value_namespace = name_space;
        ldi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ais")
    {
        ais = value;
        ais.value_namespace = name_space;
        ais.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lkr")
    {
        lkr = value;
        lkr.value_namespace = name_space;
        lkr.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldi")
    {
        ldi.yfilter = yfilter;
    }
    if(value_path == "ais")
    {
        ais.yfilter = yfilter;
    }
    if(value_path == "lkr")
    {
        lkr.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::Fault::ProtectionTrigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldi" || name == "ais" || name == "lkr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::ProtectLsp()
    :
    in_label{YType::uint32, "in-label"},
    lockout{YType::empty, "lockout"},
    lsp_id{YType::uint32, "lsp-id"}
        ,
    out_label(nullptr) // presence node
{

    yang_name = "protect-lsp"; yang_parent_name = "transport-profile-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::~ProtectLsp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_data() const
{
    if (is_presence_container) return true;
    return in_label.is_set
	|| lockout.is_set
	|| lsp_id.is_set
	|| (out_label !=  nullptr && out_label->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_label.yfilter)
	|| ydk::is_set(lockout.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (out_label !=  nullptr && out_label->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_label.is_set || is_set(in_label.yfilter)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (lockout.is_set || is_set(lockout.yfilter)) leaf_name_data.push_back(lockout.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-label")
    {
        if(out_label == nullptr)
        {
            out_label = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel>();
        }
        return out_label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out_label != nullptr)
    {
        _children["out-label"] = out_label;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-label")
    {
        in_label = value;
        in_label.value_namespace = name_space;
        in_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockout")
    {
        lockout = value;
        lockout.value_namespace = name_space;
        lockout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-label")
    {
        in_label.yfilter = yfilter;
    }
    if(value_path == "lockout")
    {
        lockout.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-label" || name == "in-label" || name == "lockout" || name == "lsp-id")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::OutLabel()
    :
    label{YType::uint32, "label"},
    link{YType::uint32, "link"}
{

    yang_name = "out-label"; yang_parent_name = "protect-lsp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::~OutLabel()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| link.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(link.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::TransportProfileTunnel::ProtectLsp::OutLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "link")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::MteTunnelAttributes()
    :
    record_route{YType::empty, "record-route"},
    signalled_name{YType::str, "signalled-name"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    signalled_payload{YType::str, "signalled-payload"},
    fast_reroute{YType::empty, "fast-reroute"},
    impose_explicit_null{YType::empty, "impose-explicit-null"}
        ,
    destination_leafs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>())
    , priority(nullptr) // presence node
    , new_style_affinities(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>())
    , bandwidth(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>())
    , affinity_mask(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>())
    , logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>())
{
    destination_leafs->parent = this;
    new_style_affinities->parent = this;
    bandwidth->parent = this;
    affinity_mask->parent = this;
    logging->parent = this;

    yang_name = "mte-tunnel-attributes"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::~MteTunnelAttributes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_data() const
{
    if (is_presence_container) return true;
    return record_route.is_set
	|| signalled_name.is_set
	|| path_selection_metric.is_set
	|| signalled_payload.is_set
	|| fast_reroute.is_set
	|| impose_explicit_null.is_set
	|| (destination_leafs !=  nullptr && destination_leafs->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(signalled_name.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(signalled_payload.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(impose_explicit_null.yfilter)
	|| (destination_leafs !=  nullptr && destination_leafs->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (new_style_affinities !=  nullptr && new_style_affinities->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-cfg:mte-tunnel-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (signalled_name.is_set || is_set(signalled_name.yfilter)) leaf_name_data.push_back(signalled_name.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (signalled_payload.is_set || is_set(signalled_payload.yfilter)) leaf_name_data.push_back(signalled_payload.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (impose_explicit_null.is_set || is_set(impose_explicit_null.yfilter)) leaf_name_data.push_back(impose_explicit_null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-leafs")
    {
        if(destination_leafs == nullptr)
        {
            destination_leafs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs>();
        }
        return destination_leafs;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "new-style-affinities")
    {
        if(new_style_affinities == nullptr)
        {
            new_style_affinities = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities>();
        }
        return new_style_affinities;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination_leafs != nullptr)
    {
        _children["destination-leafs"] = destination_leafs;
    }

    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    if(new_style_affinities != nullptr)
    {
        _children["new-style-affinities"] = new_style_affinities;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(affinity_mask != nullptr)
    {
        _children["affinity-mask"] = affinity_mask;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-name")
    {
        signalled_name = value;
        signalled_name.value_namespace = name_space;
        signalled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload = value;
        signalled_payload.value_namespace = name_space;
        signalled_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null = value;
        impose_explicit_null.value_namespace = name_space;
        impose_explicit_null.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "signalled-name")
    {
        signalled_name.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "signalled-payload")
    {
        signalled_payload.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "impose-explicit-null")
    {
        impose_explicit_null.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-leafs" || name == "priority" || name == "new-style-affinities" || name == "bandwidth" || name == "affinity-mask" || name == "logging" || name == "record-route" || name == "signalled-name" || name == "path-selection-metric" || name == "signalled-payload" || name == "fast-reroute" || name == "impose-explicit-null")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeafs()
    :
    destination_leaf(this, {"address"})
{

    yang_name = "destination-leafs"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::~DestinationLeafs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_leaf.len(); index++)
    {
        if(destination_leaf[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_operation() const
{
    for (std::size_t index=0; index<destination_leaf.len(); index++)
    {
        if(destination_leaf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leafs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-leaf")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf>();
        ent_->parent = this;
        destination_leaf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : destination_leaf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-leaf")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::DestinationLeaf()
    :
    address{YType::str, "address"},
    destination_disable{YType::empty, "destination-disable"},
    destination{YType::empty, "destination"}
        ,
    s2l_logging(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging>())
    , path_options(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>())
{
    s2l_logging->parent = this;
    path_options->parent = this;

    yang_name = "destination-leaf"; yang_parent_name = "destination-leafs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::~DestinationLeaf()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| destination_disable.is_set
	|| destination.is_set
	|| (s2l_logging !=  nullptr && s2l_logging->has_data())
	|| (path_options !=  nullptr && path_options->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(destination_disable.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| (s2l_logging !=  nullptr && s2l_logging->has_operation())
	|| (path_options !=  nullptr && path_options->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-leaf";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (destination_disable.is_set || is_set(destination_disable.yfilter)) leaf_name_data.push_back(destination_disable.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-logging")
    {
        if(s2l_logging == nullptr)
        {
            s2l_logging = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging>();
        }
        return s2l_logging;
    }

    if(child_yang_name == "path-options")
    {
        if(path_options == nullptr)
        {
            path_options = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions>();
        }
        return path_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(s2l_logging != nullptr)
    {
        _children["s2l-logging"] = s2l_logging;
    }

    if(path_options != nullptr)
    {
        _children["path-options"] = path_options;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-disable")
    {
        destination_disable = value;
        destination_disable.value_namespace = name_space;
        destination_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "destination-disable")
    {
        destination_disable.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-logging" || name == "path-options" || name == "address" || name == "destination-disable" || name == "destination")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::S2lLogging()
    :
    s2l_reroute_messsage{YType::empty, "s2l-reroute-messsage"},
    s2l_insufficient_bw_messsage{YType::empty, "s2l-insufficient-bw-messsage"},
    s2l_pcalc_failure_message{YType::empty, "s2l-pcalc-failure-message"},
    s2l_state_message{YType::empty, "s2l-state-message"}
{

    yang_name = "s2l-logging"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::~S2lLogging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::has_data() const
{
    if (is_presence_container) return true;
    return s2l_reroute_messsage.is_set
	|| s2l_insufficient_bw_messsage.is_set
	|| s2l_pcalc_failure_message.is_set
	|| s2l_state_message.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(s2l_reroute_messsage.yfilter)
	|| ydk::is_set(s2l_insufficient_bw_messsage.yfilter)
	|| ydk::is_set(s2l_pcalc_failure_message.yfilter)
	|| ydk::is_set(s2l_state_message.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (s2l_reroute_messsage.is_set || is_set(s2l_reroute_messsage.yfilter)) leaf_name_data.push_back(s2l_reroute_messsage.get_name_leafdata());
    if (s2l_insufficient_bw_messsage.is_set || is_set(s2l_insufficient_bw_messsage.yfilter)) leaf_name_data.push_back(s2l_insufficient_bw_messsage.get_name_leafdata());
    if (s2l_pcalc_failure_message.is_set || is_set(s2l_pcalc_failure_message.yfilter)) leaf_name_data.push_back(s2l_pcalc_failure_message.get_name_leafdata());
    if (s2l_state_message.is_set || is_set(s2l_state_message.yfilter)) leaf_name_data.push_back(s2l_state_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage = value;
        s2l_reroute_messsage.value_namespace = name_space;
        s2l_reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage = value;
        s2l_insufficient_bw_messsage.value_namespace = name_space;
        s2l_insufficient_bw_messsage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message = value;
        s2l_pcalc_failure_message.value_namespace = name_space;
        s2l_pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message = value;
        s2l_state_message.value_namespace = name_space;
        s2l_state_message.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "s2l-reroute-messsage")
    {
        s2l_reroute_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-insufficient-bw-messsage")
    {
        s2l_insufficient_bw_messsage.yfilter = yfilter;
    }
    if(value_path == "s2l-pcalc-failure-message")
    {
        s2l_pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "s2l-state-message")
    {
        s2l_state_message.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::S2lLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "s2l-reroute-messsage" || name == "s2l-insufficient-bw-messsage" || name == "s2l-pcalc-failure-message" || name == "s2l-state-message")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOptions()
    :
    path_option(this, {"preference_level"})
{

    yang_name = "path-options"; yang_parent_name = "destination-leaf"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::~PathOptions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_operation() const
{
    for (std::size_t index=0; index<path_option.len(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption>();
        ent_->parent = this;
        path_option.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path_option.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::PathOption()
    :
    preference_level{YType::uint32, "preference-level"},
    path_type{YType::enumeration, "path-type"},
    path_id{YType::uint32, "path-id"},
    path_name{YType::str, "path-name"},
    lockdown{YType::enumeration, "lockdown"},
    verbatim{YType::enumeration, "verbatim"}
{

    yang_name = "path-option"; yang_parent_name = "path-options"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::~PathOption()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_data() const
{
    if (is_presence_container) return true;
    return preference_level.is_set
	|| path_type.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| lockdown.is_set
	|| verbatim.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preference_level.yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_name.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    ADD_KEY_TOKEN(preference_level, "preference-level");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference_level.is_set || is_set(preference_level.yfilter)) leaf_name_data.push_back(preference_level.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.yfilter)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference-level")
    {
        preference_level = value;
        preference_level.value_namespace = name_space;
        preference_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-name")
    {
        path_name = value;
        path_name.value_namespace = name_space;
        path_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference-level")
    {
        preference_level.yfilter = yfilter;
    }
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-name")
    {
        path_name.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::DestinationLeafs::DestinationLeaf::PathOptions::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preference-level" || name == "path-type" || name == "path-id" || name == "path-name" || name == "lockdown" || name == "verbatim")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::Priority()
    :
    setup_priority{YType::uint32, "setup-priority"},
    hold_priority{YType::uint32, "hold-priority"}
{

    yang_name = "priority"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::~Priority()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_data() const
{
    if (is_presence_container) return true;
    return setup_priority.is_set
	|| hold_priority.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "setup-priority" || name == "hold-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinities()
    :
    new_style_affinity(this, {"affinity_type", "affinity1", "affinity2", "affinity3", "affinity4", "affinity5", "affinity6", "affinity7", "affinity8", "affinity9", "affinity10"})
{

    yang_name = "new-style-affinities"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::~NewStyleAffinities()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<new_style_affinity.len(); index++)
    {
        if(new_style_affinity[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_operation() const
{
    for (std::size_t index=0; index<new_style_affinity.len(); index++)
    {
        if(new_style_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "new-style-affinity")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity>();
        ent_->parent = this;
        new_style_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : new_style_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-style-affinity")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::NewStyleAffinity()
    :
    affinity_type{YType::enumeration, "affinity-type"},
    affinity1{YType::str, "affinity1"},
    affinity2{YType::str, "affinity2"},
    affinity3{YType::str, "affinity3"},
    affinity4{YType::str, "affinity4"},
    affinity5{YType::str, "affinity5"},
    affinity6{YType::str, "affinity6"},
    affinity7{YType::str, "affinity7"},
    affinity8{YType::str, "affinity8"},
    affinity9{YType::str, "affinity9"},
    affinity10{YType::str, "affinity10"}
{

    yang_name = "new-style-affinity"; yang_parent_name = "new-style-affinities"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::~NewStyleAffinity()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_data() const
{
    if (is_presence_container) return true;
    return affinity_type.is_set
	|| affinity1.is_set
	|| affinity2.is_set
	|| affinity3.is_set
	|| affinity4.is_set
	|| affinity5.is_set
	|| affinity6.is_set
	|| affinity7.is_set
	|| affinity8.is_set
	|| affinity9.is_set
	|| affinity10.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity_type.yfilter)
	|| ydk::is_set(affinity1.yfilter)
	|| ydk::is_set(affinity2.yfilter)
	|| ydk::is_set(affinity3.yfilter)
	|| ydk::is_set(affinity4.yfilter)
	|| ydk::is_set(affinity5.yfilter)
	|| ydk::is_set(affinity6.yfilter)
	|| ydk::is_set(affinity7.yfilter)
	|| ydk::is_set(affinity8.yfilter)
	|| ydk::is_set(affinity9.yfilter)
	|| ydk::is_set(affinity10.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "new-style-affinity";
    ADD_KEY_TOKEN(affinity_type, "affinity-type");
    ADD_KEY_TOKEN(affinity1, "affinity1");
    ADD_KEY_TOKEN(affinity2, "affinity2");
    ADD_KEY_TOKEN(affinity3, "affinity3");
    ADD_KEY_TOKEN(affinity4, "affinity4");
    ADD_KEY_TOKEN(affinity5, "affinity5");
    ADD_KEY_TOKEN(affinity6, "affinity6");
    ADD_KEY_TOKEN(affinity7, "affinity7");
    ADD_KEY_TOKEN(affinity8, "affinity8");
    ADD_KEY_TOKEN(affinity9, "affinity9");
    ADD_KEY_TOKEN(affinity10, "affinity10");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_type.is_set || is_set(affinity_type.yfilter)) leaf_name_data.push_back(affinity_type.get_name_leafdata());
    if (affinity1.is_set || is_set(affinity1.yfilter)) leaf_name_data.push_back(affinity1.get_name_leafdata());
    if (affinity2.is_set || is_set(affinity2.yfilter)) leaf_name_data.push_back(affinity2.get_name_leafdata());
    if (affinity3.is_set || is_set(affinity3.yfilter)) leaf_name_data.push_back(affinity3.get_name_leafdata());
    if (affinity4.is_set || is_set(affinity4.yfilter)) leaf_name_data.push_back(affinity4.get_name_leafdata());
    if (affinity5.is_set || is_set(affinity5.yfilter)) leaf_name_data.push_back(affinity5.get_name_leafdata());
    if (affinity6.is_set || is_set(affinity6.yfilter)) leaf_name_data.push_back(affinity6.get_name_leafdata());
    if (affinity7.is_set || is_set(affinity7.yfilter)) leaf_name_data.push_back(affinity7.get_name_leafdata());
    if (affinity8.is_set || is_set(affinity8.yfilter)) leaf_name_data.push_back(affinity8.get_name_leafdata());
    if (affinity9.is_set || is_set(affinity9.yfilter)) leaf_name_data.push_back(affinity9.get_name_leafdata());
    if (affinity10.is_set || is_set(affinity10.yfilter)) leaf_name_data.push_back(affinity10.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-type")
    {
        affinity_type = value;
        affinity_type.value_namespace = name_space;
        affinity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity1")
    {
        affinity1 = value;
        affinity1.value_namespace = name_space;
        affinity1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity2")
    {
        affinity2 = value;
        affinity2.value_namespace = name_space;
        affinity2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity3")
    {
        affinity3 = value;
        affinity3.value_namespace = name_space;
        affinity3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity4")
    {
        affinity4 = value;
        affinity4.value_namespace = name_space;
        affinity4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity5")
    {
        affinity5 = value;
        affinity5.value_namespace = name_space;
        affinity5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity6")
    {
        affinity6 = value;
        affinity6.value_namespace = name_space;
        affinity6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity7")
    {
        affinity7 = value;
        affinity7.value_namespace = name_space;
        affinity7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity8")
    {
        affinity8 = value;
        affinity8.value_namespace = name_space;
        affinity8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity9")
    {
        affinity9 = value;
        affinity9.value_namespace = name_space;
        affinity9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity10")
    {
        affinity10 = value;
        affinity10.value_namespace = name_space;
        affinity10.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-type")
    {
        affinity_type.yfilter = yfilter;
    }
    if(value_path == "affinity1")
    {
        affinity1.yfilter = yfilter;
    }
    if(value_path == "affinity2")
    {
        affinity2.yfilter = yfilter;
    }
    if(value_path == "affinity3")
    {
        affinity3.yfilter = yfilter;
    }
    if(value_path == "affinity4")
    {
        affinity4.yfilter = yfilter;
    }
    if(value_path == "affinity5")
    {
        affinity5.yfilter = yfilter;
    }
    if(value_path == "affinity6")
    {
        affinity6.yfilter = yfilter;
    }
    if(value_path == "affinity7")
    {
        affinity7.yfilter = yfilter;
    }
    if(value_path == "affinity8")
    {
        affinity8.yfilter = yfilter;
    }
    if(value_path == "affinity9")
    {
        affinity9.yfilter = yfilter;
    }
    if(value_path == "affinity10")
    {
        affinity10.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::NewStyleAffinities::NewStyleAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-type" || name == "affinity1" || name == "affinity2" || name == "affinity3" || name == "affinity4" || name == "affinity5" || name == "affinity6" || name == "affinity7" || name == "affinity8" || name == "affinity9" || name == "affinity10")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::Bandwidth()
    :
    dste_type{YType::enumeration, "dste-type"},
    class_or_pool_type{YType::uint32, "class-or-pool-type"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return dste_type.is_set
	|| class_or_pool_type.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dste_type.yfilter)
	|| ydk::is_set(class_or_pool_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dste_type.is_set || is_set(dste_type.yfilter)) leaf_name_data.push_back(dste_type.get_name_leafdata());
    if (class_or_pool_type.is_set || is_set(class_or_pool_type.yfilter)) leaf_name_data.push_back(class_or_pool_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dste-type")
    {
        dste_type = value;
        dste_type.value_namespace = name_space;
        dste_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type = value;
        class_or_pool_type.value_namespace = name_space;
        class_or_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dste-type")
    {
        dste_type.yfilter = yfilter;
    }
    if(value_path == "class-or-pool-type")
    {
        class_or_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dste-type" || name == "class-or-pool-type" || name == "bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{

    yang_name = "affinity-mask"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::~AffinityMask()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_data() const
{
    if (is_presence_container) return true;
    return affinity.is_set
	|| mask.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::Logging()
    :
    insufficient_bw_message{YType::empty, "insufficient-bw-message"},
    reoptimized_message{YType::empty, "reoptimized-message"},
    bandwidth_change_message{YType::empty, "bandwidth-change-message"},
    all{YType::empty, "all"},
    pcalc_failure_message{YType::empty, "pcalc-failure-message"},
    state_message{YType::empty, "state-message"},
    reoptimize_attempts_message{YType::empty, "reoptimize-attempts-message"},
    sub_lsp_state_message{YType::empty, "sub-lsp-state-message"},
    reroute_messsage{YType::empty, "reroute-messsage"}
{

    yang_name = "logging"; yang_parent_name = "mte-tunnel-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::~Logging()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_data() const
{
    if (is_presence_container) return true;
    return insufficient_bw_message.is_set
	|| reoptimized_message.is_set
	|| bandwidth_change_message.is_set
	|| all.is_set
	|| pcalc_failure_message.is_set
	|| state_message.is_set
	|| reoptimize_attempts_message.is_set
	|| sub_lsp_state_message.is_set
	|| reroute_messsage.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(insufficient_bw_message.yfilter)
	|| ydk::is_set(reoptimized_message.yfilter)
	|| ydk::is_set(bandwidth_change_message.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(pcalc_failure_message.yfilter)
	|| ydk::is_set(state_message.yfilter)
	|| ydk::is_set(reoptimize_attempts_message.yfilter)
	|| ydk::is_set(sub_lsp_state_message.yfilter)
	|| ydk::is_set(reroute_messsage.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insufficient_bw_message.is_set || is_set(insufficient_bw_message.yfilter)) leaf_name_data.push_back(insufficient_bw_message.get_name_leafdata());
    if (reoptimized_message.is_set || is_set(reoptimized_message.yfilter)) leaf_name_data.push_back(reoptimized_message.get_name_leafdata());
    if (bandwidth_change_message.is_set || is_set(bandwidth_change_message.yfilter)) leaf_name_data.push_back(bandwidth_change_message.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (pcalc_failure_message.is_set || is_set(pcalc_failure_message.yfilter)) leaf_name_data.push_back(pcalc_failure_message.get_name_leafdata());
    if (state_message.is_set || is_set(state_message.yfilter)) leaf_name_data.push_back(state_message.get_name_leafdata());
    if (reoptimize_attempts_message.is_set || is_set(reoptimize_attempts_message.yfilter)) leaf_name_data.push_back(reoptimize_attempts_message.get_name_leafdata());
    if (sub_lsp_state_message.is_set || is_set(sub_lsp_state_message.yfilter)) leaf_name_data.push_back(sub_lsp_state_message.get_name_leafdata());
    if (reroute_messsage.is_set || is_set(reroute_messsage.yfilter)) leaf_name_data.push_back(reroute_messsage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message = value;
        insufficient_bw_message.value_namespace = name_space;
        insufficient_bw_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message = value;
        reoptimized_message.value_namespace = name_space;
        reoptimized_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message = value;
        bandwidth_change_message.value_namespace = name_space;
        bandwidth_change_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message = value;
        pcalc_failure_message.value_namespace = name_space;
        pcalc_failure_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-message")
    {
        state_message = value;
        state_message.value_namespace = name_space;
        state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message = value;
        reoptimize_attempts_message.value_namespace = name_space;
        reoptimize_attempts_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message = value;
        sub_lsp_state_message.value_namespace = name_space;
        sub_lsp_state_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage = value;
        reroute_messsage.value_namespace = name_space;
        reroute_messsage.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insufficient-bw-message")
    {
        insufficient_bw_message.yfilter = yfilter;
    }
    if(value_path == "reoptimized-message")
    {
        reoptimized_message.yfilter = yfilter;
    }
    if(value_path == "bandwidth-change-message")
    {
        bandwidth_change_message.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "pcalc-failure-message")
    {
        pcalc_failure_message.yfilter = yfilter;
    }
    if(value_path == "state-message")
    {
        state_message.yfilter = yfilter;
    }
    if(value_path == "reoptimize-attempts-message")
    {
        reoptimize_attempts_message.yfilter = yfilter;
    }
    if(value_path == "sub-lsp-state-message")
    {
        sub_lsp_state_message.yfilter = yfilter;
    }
    if(value_path == "reroute-messsage")
    {
        reroute_messsage.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::MteTunnelAttributes::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "insufficient-bw-message" || name == "reoptimized-message" || name == "bandwidth-change-message" || name == "all" || name == "pcalc-failure-message" || name == "state-message" || name == "reoptimize-attempts-message" || name == "sub-lsp-state-message" || name == "reroute-messsage")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Otu()
    :
    gcc{YType::empty, "gcc"},
    sf{YType::uint32, "sf"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    sd{YType::uint32, "sd"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    loopback{YType::enumeration, "loopback"},
    fec{YType::enumeration, "fec"}
        ,
    otn_send_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>())
    , otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
    , otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
    , proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
    , network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
    , otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
    , otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
    , otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
    , prbs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>())
    , otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
    , otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
{
    otn_send_ttitcmos->parent = this;
    otn_send_ttitcmdapi->parent = this;
    otn_expected_ttisapi->parent = this;
    proactive_protection->parent = this;
    network_srlgs->parent = this;
    otn_send_tti->parent = this;
    otn_expected_ttitcmdapi->parent = this;
    otn_send_ttisapi->parent = this;
    prbs->parent = this;
    otn_expected_ttitcmos->parent = this;
    otn_expected_tti->parent = this;

    yang_name = "otu"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_data() const
{
    if (is_presence_container) return true;
    return gcc.is_set
	|| sf.is_set
	|| secondary_admin_state.is_set
	|| sd.is_set
	|| performance_monitoring.is_set
	|| loopback.is_set
	|| fec.is_set
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_data())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_data())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_data())
	|| (proactive_protection !=  nullptr && proactive_protection->has_data())
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_data())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_data())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_data())
	|| (prbs !=  nullptr && prbs->has_data())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_data())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcc.yfilter)
	|| ydk::is_set(sf.yfilter)
	|| ydk::is_set(secondary_admin_state.yfilter)
	|| ydk::is_set(sd.yfilter)
	|| ydk::is_set(performance_monitoring.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(fec.yfilter)
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_operation())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_operation())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_operation())
	|| (proactive_protection !=  nullptr && proactive_protection->has_operation())
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_operation())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_operation())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_operation())
	|| (prbs !=  nullptr && prbs->has_operation())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_operation())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-cfg:otu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcc.is_set || is_set(gcc.yfilter)) leaf_name_data.push_back(gcc.get_name_leafdata());
    if (sf.is_set || is_set(sf.yfilter)) leaf_name_data.push_back(sf.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.yfilter)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (sd.is_set || is_set(sd.yfilter)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.yfilter)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (fec.is_set || is_set(fec.yfilter)) leaf_name_data.push_back(fec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "otn-send-ttitcmos")
    {
        if(otn_send_ttitcmos == nullptr)
        {
            otn_send_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>();
        }
        return otn_send_ttitcmos;
    }

    if(child_yang_name == "otn-send-ttitcmdapi")
    {
        if(otn_send_ttitcmdapi == nullptr)
        {
            otn_send_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>();
        }
        return otn_send_ttitcmdapi;
    }

    if(child_yang_name == "otn-expected-ttisapi")
    {
        if(otn_expected_ttisapi == nullptr)
        {
            otn_expected_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>();
        }
        return otn_expected_ttisapi;
    }

    if(child_yang_name == "proactive-protection")
    {
        if(proactive_protection == nullptr)
        {
            proactive_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>();
        }
        return proactive_protection;
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs == nullptr)
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>();
        }
        return network_srlgs;
    }

    if(child_yang_name == "otn-send-tti")
    {
        if(otn_send_tti == nullptr)
        {
            otn_send_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>();
        }
        return otn_send_tti;
    }

    if(child_yang_name == "otn-expected-ttitcmdapi")
    {
        if(otn_expected_ttitcmdapi == nullptr)
        {
            otn_expected_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>();
        }
        return otn_expected_ttitcmdapi;
    }

    if(child_yang_name == "otn-send-ttisapi")
    {
        if(otn_send_ttisapi == nullptr)
        {
            otn_send_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>();
        }
        return otn_send_ttisapi;
    }

    if(child_yang_name == "prbs")
    {
        if(prbs == nullptr)
        {
            prbs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs>();
        }
        return prbs;
    }

    if(child_yang_name == "otn-expected-ttitcmos")
    {
        if(otn_expected_ttitcmos == nullptr)
        {
            otn_expected_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>();
        }
        return otn_expected_ttitcmos;
    }

    if(child_yang_name == "otn-expected-tti")
    {
        if(otn_expected_tti == nullptr)
        {
            otn_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>();
        }
        return otn_expected_tti;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(otn_send_ttitcmos != nullptr)
    {
        _children["otn-send-ttitcmos"] = otn_send_ttitcmos;
    }

    if(otn_send_ttitcmdapi != nullptr)
    {
        _children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
    }

    if(otn_expected_ttisapi != nullptr)
    {
        _children["otn-expected-ttisapi"] = otn_expected_ttisapi;
    }

    if(proactive_protection != nullptr)
    {
        _children["proactive-protection"] = proactive_protection;
    }

    if(network_srlgs != nullptr)
    {
        _children["network-srlgs"] = network_srlgs;
    }

    if(otn_send_tti != nullptr)
    {
        _children["otn-send-tti"] = otn_send_tti;
    }

    if(otn_expected_ttitcmdapi != nullptr)
    {
        _children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
    }

    if(otn_send_ttisapi != nullptr)
    {
        _children["otn-send-ttisapi"] = otn_send_ttisapi;
    }

    if(prbs != nullptr)
    {
        _children["prbs"] = prbs;
    }

    if(otn_expected_ttitcmos != nullptr)
    {
        _children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
    }

    if(otn_expected_tti != nullptr)
    {
        _children["otn-expected-tti"] = otn_expected_tti;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcc")
    {
        gcc = value;
        gcc.value_namespace = name_space;
        gcc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sf")
    {
        sf = value;
        sf.value_namespace = name_space;
        sf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
        secondary_admin_state.value_namespace = name_space;
        secondary_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sd")
    {
        sd = value;
        sd.value_namespace = name_space;
        sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
        performance_monitoring.value_namespace = name_space;
        performance_monitoring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec")
    {
        fec = value;
        fec.value_namespace = name_space;
        fec.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcc")
    {
        gcc.yfilter = yfilter;
    }
    if(value_path == "sf")
    {
        sf.yfilter = yfilter;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state.yfilter = yfilter;
    }
    if(value_path == "sd")
    {
        sd.yfilter = yfilter;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring.yfilter = yfilter;
    }
    if(value_path == "loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "fec")
    {
        fec.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "otn-send-ttitcmos" || name == "otn-send-ttitcmdapi" || name == "otn-expected-ttisapi" || name == "proactive-protection" || name == "network-srlgs" || name == "otn-send-tti" || name == "otn-expected-ttitcmdapi" || name == "otn-send-ttisapi" || name == "prbs" || name == "otn-expected-ttitcmos" || name == "otn-expected-tti" || name == "gcc" || name == "sf" || name == "secondary-admin-state" || name == "sd" || name == "performance-monitoring" || name == "loopback" || name == "fec")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::OtnSendTtitcmos()
    :
    string_type{YType::enumeration, "string-type"},
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"}
{

    yang_name = "otn-send-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::~OtnSendTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| osascii_string.is_set
	|| oshex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "osascii-string" || name == "oshex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::OtnSendTtitcmdapi()
    :
    string_type{YType::enumeration, "string-type"},
    dapi_ascii_string{YType::str, "dapi-ascii-string"}
{

    yang_name = "otn-send-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::~OtnSendTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| dapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "dapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::OtnExpectedTtisapi()
    :
    string_type{YType::enumeration, "string-type"},
    sapi_ascii_string{YType::str, "sapi-ascii-string"}
{

    yang_name = "otn-expected-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::~OtnExpectedTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| sapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "sapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::ProactiveProtection()
    :
    status{YType::empty, "status"}
        ,
    trigger_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>())
    , revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
    , trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
    , revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
{
    trigger_threshold->parent = this;
    revert_window->parent = this;
    trigger_window->parent = this;
    revert_threshold->parent = this;

    yang_name = "proactive-protection"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::~ProactiveProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data())
	|| (revert_threshold !=  nullptr && revert_threshold->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation())
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive-protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold == nullptr)
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>();
        }
        return trigger_threshold;
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window == nullptr)
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>();
        }
        return revert_window;
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window == nullptr)
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>();
        }
        return trigger_window;
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold == nullptr)
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>();
        }
        return revert_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger_threshold != nullptr)
    {
        _children["trigger-threshold"] = trigger_threshold;
    }

    if(revert_window != nullptr)
    {
        _children["revert-window"] = revert_window;
    }

    if(trigger_window != nullptr)
    {
        _children["trigger-window"] = trigger_window;
    }

    if(revert_threshold != nullptr)
    {
        _children["revert-threshold"] = revert_threshold;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-threshold" || name == "revert-window" || name == "trigger-window" || name == "revert-threshold" || name == "status")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::TriggerThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    power{YType::uint32, "power"},
    enable{YType::empty, "enable"}
{

    yang_name = "trigger-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_data() const
{
    if (is_presence_container) return true;
    return coefficient.is_set
	|| power.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "power" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::RevertWindow()
    :
    value_{YType::uint32, "value"},
    enable{YType::empty, "enable"}
{

    yang_name = "revert-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::TriggerWindow()
    :
    value_{YType::uint32, "value"},
    enable{YType::empty, "enable"}
{

    yang_name = "trigger-window"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::RevertThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    power{YType::uint32, "power"},
    enable{YType::empty, "enable"}
{

    yang_name = "revert-threshold"; yang_parent_name = "proactive-protection"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_data() const
{
    if (is_presence_container) return true;
    return coefficient.is_set
	|| power.is_set
	|| enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coefficient.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.yfilter)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
        coefficient.value_namespace = name_space;
        coefficient.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coefficient")
    {
        coefficient.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coefficient" || name == "power" || name == "enable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlgs()
    :
    network_srlg(this, {"set_id"})
{

    yang_name = "network-srlgs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.len(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-srlg")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        ent_->parent = this;
        network_srlg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network_srlg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-srlg")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{

    yang_name = "network-srlg"; yang_parent_name = "network-srlgs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_data() const
{
    if (is_presence_container) return true;
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_id.yfilter)
	|| ydk::is_set(srlg1.yfilter)
	|| ydk::is_set(srlg2.yfilter)
	|| ydk::is_set(srlg3.yfilter)
	|| ydk::is_set(srlg4.yfilter)
	|| ydk::is_set(srlg5.yfilter)
	|| ydk::is_set(srlg6.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg";
    ADD_KEY_TOKEN(set_id, "set-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.yfilter)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.yfilter)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.yfilter)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.yfilter)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.yfilter)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.yfilter)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.yfilter)) leaf_name_data.push_back(srlg6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-id")
    {
        set_id = value;
        set_id.value_namespace = name_space;
        set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
        srlg1.value_namespace = name_space;
        srlg1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
        srlg2.value_namespace = name_space;
        srlg2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
        srlg3.value_namespace = name_space;
        srlg3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
        srlg4.value_namespace = name_space;
        srlg4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
        srlg5.value_namespace = name_space;
        srlg5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
        srlg6.value_namespace = name_space;
        srlg6.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-id")
    {
        set_id.yfilter = yfilter;
    }
    if(value_path == "srlg1")
    {
        srlg1.yfilter = yfilter;
    }
    if(value_path == "srlg2")
    {
        srlg2.yfilter = yfilter;
    }
    if(value_path == "srlg3")
    {
        srlg3.yfilter = yfilter;
    }
    if(value_path == "srlg4")
    {
        srlg4.yfilter = yfilter;
    }
    if(value_path == "srlg5")
    {
        srlg5.yfilter = yfilter;
    }
    if(value_path == "srlg6")
    {
        srlg6.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-id" || name == "srlg1" || name == "srlg2" || name == "srlg3" || name == "srlg4" || name == "srlg5" || name == "srlg6")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::OtnSendTti()
    :
    string_type{YType::enumeration, "string-type"},
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otn-send-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::~OtnSendTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| full_ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "full-ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::OtnExpectedTtitcmdapi()
    :
    string_type{YType::enumeration, "string-type"},
    dapi_ascii_string{YType::str, "dapi-ascii-string"}
{

    yang_name = "otn-expected-ttitcmdapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::~OtnExpectedTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| dapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(dapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmdapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.yfilter)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
        dapi_ascii_string.value_namespace = name_space;
        dapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "dapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::OtnSendTtisapi()
    :
    string_type{YType::enumeration, "string-type"},
    sapi_ascii_string{YType::str, "sapi-ascii-string"}
{

    yang_name = "otn-send-ttisapi"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::~OtnSendTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| sapi_ascii_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(sapi_ascii_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttisapi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.yfilter)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
        sapi_ascii_string.value_namespace = name_space;
        sapi_ascii_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "sapi-ascii-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::Prbs()
    :
    mode_value{YType::enumeration, "mode-value"},
    patternvalue{YType::enumeration, "patternvalue"}
{

    yang_name = "prbs"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::~Prbs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_data() const
{
    if (is_presence_container) return true;
    return mode_value.is_set
	|| patternvalue.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode_value.yfilter)
	|| ydk::is_set(patternvalue.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prbs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode_value.is_set || is_set(mode_value.yfilter)) leaf_name_data.push_back(mode_value.get_name_leafdata());
    if (patternvalue.is_set || is_set(patternvalue.yfilter)) leaf_name_data.push_back(patternvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode-value")
    {
        mode_value = value;
        mode_value.value_namespace = name_space;
        mode_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "patternvalue")
    {
        patternvalue = value;
        patternvalue.value_namespace = name_space;
        patternvalue.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode-value")
    {
        mode_value.yfilter = yfilter;
    }
    if(value_path == "patternvalue")
    {
        patternvalue.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::Prbs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-value" || name == "patternvalue")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::OtnExpectedTtitcmos()
    :
    string_type{YType::enumeration, "string-type"},
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"}
{

    yang_name = "otn-expected-ttitcmos"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::~OtnExpectedTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| osascii_string.is_set
	|| oshex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(osascii_string.yfilter)
	|| ydk::is_set(oshex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (osascii_string.is_set || is_set(osascii_string.yfilter)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.yfilter)) leaf_name_data.push_back(oshex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "osascii-string")
    {
        osascii_string = value;
        osascii_string.value_namespace = name_space;
        osascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
        oshex_string.value_namespace = name_space;
        oshex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "osascii-string")
    {
        osascii_string.yfilter = yfilter;
    }
    if(value_path == "oshex-string")
    {
        oshex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "osascii-string" || name == "oshex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::OtnExpectedTti()
    :
    string_type{YType::enumeration, "string-type"},
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"}
{

    yang_name = "otn-expected-tti"; yang_parent_name = "otu"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::~OtnExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_data() const
{
    if (is_presence_container) return true;
    return string_type.is_set
	|| full_ascii_string.is_set
	|| hex_string.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string_type.yfilter)
	|| ydk::is_set(full_ascii_string.yfilter)
	|| ydk::is_set(hex_string.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-tti";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string_type.is_set || is_set(string_type.yfilter)) leaf_name_data.push_back(string_type.get_name_leafdata());
    if (full_ascii_string.is_set || is_set(full_ascii_string.yfilter)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.yfilter)) leaf_name_data.push_back(hex_string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-type")
    {
        string_type = value;
        string_type.value_namespace = name_space;
        string_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
        full_ascii_string.value_namespace = name_space;
        full_ascii_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
        hex_string.value_namespace = name_space;
        hex_string.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-type")
    {
        string_type.yfilter = yfilter;
    }
    if(value_path == "full-ascii-string")
    {
        full_ascii_string.yfilter = yfilter;
    }
    if(value_path == "hex-string")
    {
        hex_string.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-type" || name == "full-ascii-string" || name == "hex-string")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::NetFlow()
    :
    data_link_frame_section(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>())
    , mpls(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>())
    , ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>())
    , ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>())
{
    data_link_frame_section->parent = this;
    mpls->parent = this;
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "net-flow"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::~NetFlow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_data() const
{
    if (is_presence_container) return true;
    return (data_link_frame_section !=  nullptr && data_link_frame_section->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_operation() const
{
    return is_set(yfilter)
	|| (data_link_frame_section !=  nullptr && data_link_frame_section->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-traffmon-netflow-cfg:net-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-link-frame-section")
    {
        if(data_link_frame_section == nullptr)
        {
            data_link_frame_section = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection>();
        }
        return data_link_frame_section;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(data_link_frame_section != nullptr)
    {
        _children["data-link-frame-section"] = data_link_frame_section;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-link-frame-section" || name == "mpls" || name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::DataLinkFrameSection()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "data-link-frame-section"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::~DataLinkFrameSection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_data() const
{
    if (is_presence_container) return true;
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-link-frame-section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_monitor_map != nullptr)
    {
        _children["flow-monitor-map"] = flow_monitor_map;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>())
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "data-link-frame-section"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        _children["egress"] = egress;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::Ingress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::Egress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::DataLinkFrameSection::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::Mpls()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "mpls"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::~Mpls()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_monitor_map != nullptr)
    {
        _children["flow-monitor-map"] = flow_monitor_map;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>())
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        _children["egress"] = egress;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::Ingress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::Egress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Mpls::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::Ipv6()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv6"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_monitor_map != nullptr)
    {
        _children["flow-monitor-map"] = flow_monitor_map;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>())
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        _children["egress"] = egress;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::Ingress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::Egress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv6::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::Ipv4()
    :
    flow_monitor_map(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>())
{
    flow_monitor_map->parent = this;

    yang_name = "ipv4"; yang_parent_name = "net-flow"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (flow_monitor_map !=  nullptr && flow_monitor_map->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (flow_monitor_map !=  nullptr && flow_monitor_map->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-map")
    {
        if(flow_monitor_map == nullptr)
        {
            flow_monitor_map = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap>();
        }
        return flow_monitor_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flow_monitor_map != nullptr)
    {
        _children["flow-monitor-map"] = flow_monitor_map;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-map")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::FlowMonitorMap()
    :
    ingress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>())
    , egress(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>())
{
    ingress->parent = this;
    egress->parent = this;

    yang_name = "flow-monitor-map"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::~FlowMonitorMap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_data() const
{
    if (is_presence_container) return true;
    return (ingress !=  nullptr && ingress->has_data())
	|| (egress !=  nullptr && egress->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_operation() const
{
    return is_set(yfilter)
	|| (ingress !=  nullptr && ingress->has_operation())
	|| (egress !=  nullptr && egress->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress")
    {
        if(ingress == nullptr)
        {
            ingress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress>();
        }
        return ingress;
    }

    if(child_yang_name == "egress")
    {
        if(egress == nullptr)
        {
            egress = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress>();
        }
        return egress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ingress != nullptr)
    {
        _children["ingress"] = ingress;
    }

    if(egress != nullptr)
    {
        _children["egress"] = egress;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress" || name == "egress")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::Ingress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "ingress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::~Ingress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "ingress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Ingress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::Egress()
    :
    flow_monitor_name(this, {"monitor_map_name"})
{

    yang_name = "egress"; yang_parent_name = "flow-monitor-map"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::~Egress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_operation() const
{
    for (std::size_t index=0; index<flow_monitor_name.len(); index++)
    {
        if(flow_monitor_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-monitor-name")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName>();
        ent_->parent = this;
        flow_monitor_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flow_monitor_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::FlowMonitorName()
    :
    monitor_map_name{YType::str, "monitor-map-name"},
    sampler_map_name{YType::str, "sampler-map-name"}
{

    yang_name = "flow-monitor-name"; yang_parent_name = "egress"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::~FlowMonitorName()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_data() const
{
    if (is_presence_container) return true;
    return monitor_map_name.is_set
	|| sampler_map_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_map_name.yfilter)
	|| ydk::is_set(sampler_map_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-monitor-name";
    ADD_KEY_TOKEN(monitor_map_name, "monitor-map-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_map_name.is_set || is_set(monitor_map_name.yfilter)) leaf_name_data.push_back(monitor_map_name.get_name_leafdata());
    if (sampler_map_name.is_set || is_set(sampler_map_name.yfilter)) leaf_name_data.push_back(sampler_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name = value;
        monitor_map_name.value_namespace = name_space;
        monitor_map_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name = value;
        sampler_map_name.value_namespace = name_space;
        sampler_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-map-name")
    {
        monitor_map_name.yfilter = yfilter;
    }
    if(value_path == "sampler-map-name")
    {
        sampler_map_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::NetFlow::Ipv4::FlowMonitorMap::Egress::FlowMonitorName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-map-name" || name == "sampler-map-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::Bfd()
    :
    mode{YType::enumeration, "mode"}
        ,
    address_family(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "bfd"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::~Bfd()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return mode.is_set
	|| (address_family !=  nullptr && address_family->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_family != nullptr)
    {
        _children["address-family"] = address_family;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::AddressFamily()
    :
    ipv6(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>())
    , ipv4(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "address-family"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::~AddressFamily()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6()
    :
    ipv6_destination_address{YType::str, "ipv6-destination-address"},
    ipv6_detection_multiplier{YType::uint32, "ipv6-detection-multiplier"},
    ipv6_fast_detect{YType::empty, "ipv6-fast-detect"},
    ipv6_interval{YType::uint32, "ipv6-interval"}
        ,
    ipv6_timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>())
{
    ipv6_timers->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::~Ipv6()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_destination_address.is_set
	|| ipv6_detection_multiplier.is_set
	|| ipv6_fast_detect.is_set
	|| ipv6_interval.is_set
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_destination_address.yfilter)
	|| ydk::is_set(ipv6_detection_multiplier.yfilter)
	|| ydk::is_set(ipv6_fast_detect.yfilter)
	|| ydk::is_set(ipv6_interval.yfilter)
	|| (ipv6_timers !=  nullptr && ipv6_timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_destination_address.is_set || is_set(ipv6_destination_address.yfilter)) leaf_name_data.push_back(ipv6_destination_address.get_name_leafdata());
    if (ipv6_detection_multiplier.is_set || is_set(ipv6_detection_multiplier.yfilter)) leaf_name_data.push_back(ipv6_detection_multiplier.get_name_leafdata());
    if (ipv6_fast_detect.is_set || is_set(ipv6_fast_detect.yfilter)) leaf_name_data.push_back(ipv6_fast_detect.get_name_leafdata());
    if (ipv6_interval.is_set || is_set(ipv6_interval.yfilter)) leaf_name_data.push_back(ipv6_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-timers")
    {
        if(ipv6_timers == nullptr)
        {
            ipv6_timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers>();
        }
        return ipv6_timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_timers != nullptr)
    {
        _children["ipv6-timers"] = ipv6_timers;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address = value;
        ipv6_destination_address.value_namespace = name_space;
        ipv6_destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier = value;
        ipv6_detection_multiplier.value_namespace = name_space;
        ipv6_detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect = value;
        ipv6_fast_detect.value_namespace = name_space;
        ipv6_fast_detect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval = value;
        ipv6_interval.value_namespace = name_space;
        ipv6_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-destination-address")
    {
        ipv6_destination_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-detection-multiplier")
    {
        ipv6_detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "ipv6-fast-detect")
    {
        ipv6_fast_detect.yfilter = yfilter;
    }
    if(value_path == "ipv6-interval")
    {
        ipv6_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-timers" || name == "ipv6-destination-address" || name == "ipv6-detection-multiplier" || name == "ipv6-fast-detect" || name == "ipv6-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::Ipv6Timers()
    :
    ipv6_nbor_unconfig_timer{YType::uint32, "ipv6-nbor-unconfig-timer"},
    ipv6_start_timer{YType::uint32, "ipv6-start-timer"}
{

    yang_name = "ipv6-timers"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::~Ipv6Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_nbor_unconfig_timer.is_set
	|| ipv6_start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_nbor_unconfig_timer.yfilter)
	|| ydk::is_set(ipv6_start_timer.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_nbor_unconfig_timer.is_set || is_set(ipv6_nbor_unconfig_timer.yfilter)) leaf_name_data.push_back(ipv6_nbor_unconfig_timer.get_name_leafdata());
    if (ipv6_start_timer.is_set || is_set(ipv6_start_timer.yfilter)) leaf_name_data.push_back(ipv6_start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer = value;
        ipv6_nbor_unconfig_timer.value_namespace = name_space;
        ipv6_nbor_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer = value;
        ipv6_start_timer.value_namespace = name_space;
        ipv6_start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-nbor-unconfig-timer")
    {
        ipv6_nbor_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "ipv6-start-timer")
    {
        ipv6_start_timer.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv6::Ipv6Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-nbor-unconfig-timer" || name == "ipv6-start-timer")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Ipv4()
    :
    interval{YType::uint32, "interval"},
    detection_multiplier{YType::uint32, "detection-multiplier"},
    destination_address{YType::str, "destination-address"},
    fast_detect{YType::empty, "fast-detect"}
        ,
    echo(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>())
    , timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>())
{
    echo->parent = this;
    timers->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::~Ipv4()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| detection_multiplier.is_set
	|| destination_address.is_set
	|| fast_detect.is_set
	|| (echo !=  nullptr && echo->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(detection_multiplier.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(fast_detect.yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (detection_multiplier.is_set || is_set(detection_multiplier.yfilter)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (fast_detect.is_set || is_set(fast_detect.yfilter)) leaf_name_data.push_back(fast_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(echo != nullptr)
    {
        _children["echo"] = echo;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
        detection_multiplier.value_namespace = name_space;
        detection_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-detect")
    {
        fast_detect = value;
        fast_detect.value_namespace = name_space;
        fast_detect.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "detection-multiplier")
    {
        detection_multiplier.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "fast-detect")
    {
        fast_detect.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "timers" || name == "interval" || name == "detection-multiplier" || name == "destination-address" || name == "fast-detect")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::Echo()
    :
    min_interval{YType::uint32, "min-interval"}
{

    yang_name = "echo"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::~Echo()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_data() const
{
    if (is_presence_container) return true;
    return min_interval.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_interval.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_interval.is_set || is_set(min_interval.yfilter)) leaf_name_data.push_back(min_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-interval")
    {
        min_interval = value;
        min_interval.value_namespace = name_space;
        min_interval.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-interval")
    {
        min_interval.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-interval")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::Timers()
    :
    nbor_unconfig_timer{YType::uint32, "nbor-unconfig-timer"},
    start_timer{YType::uint32, "start-timer"}
{

    yang_name = "timers"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_data() const
{
    if (is_presence_container) return true;
    return nbor_unconfig_timer.is_set
	|| start_timer.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbor_unconfig_timer.yfilter)
	|| ydk::is_set(start_timer.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbor_unconfig_timer.is_set || is_set(nbor_unconfig_timer.yfilter)) leaf_name_data.push_back(nbor_unconfig_timer.get_name_leafdata());
    if (start_timer.is_set || is_set(start_timer.yfilter)) leaf_name_data.push_back(start_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer = value;
        nbor_unconfig_timer.value_namespace = name_space;
        nbor_unconfig_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-timer")
    {
        start_timer = value;
        start_timer.value_namespace = name_space;
        start_timer.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbor-unconfig-timer")
    {
        nbor_unconfig_timer.yfilter = yfilter;
    }
    if(value_path == "start-timer")
    {
        start_timer.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bfd::AddressFamily::Ipv4::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbor-unconfig-timer" || name == "start-timer")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::Bundle()
    :
    lacp_delay{YType::uint32, "lacp-delay"},
    lacp_fallback{YType::uint32, "lacp-fallback"},
    shutdown{YType::empty, "shutdown"},
    wait_while{YType::uint32, "wait-while"}
        ,
    bundle_load_balancing(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>())
    , minimum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>())
    , maximum_active(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>())
{
    bundle_load_balancing->parent = this;
    minimum_active->parent = this;
    maximum_active->parent = this;

    yang_name = "bundle"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::~Bundle()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_data() const
{
    if (is_presence_container) return true;
    return lacp_delay.is_set
	|| lacp_fallback.is_set
	|| shutdown.is_set
	|| wait_while.is_set
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_data())
	|| (minimum_active !=  nullptr && minimum_active->has_data())
	|| (maximum_active !=  nullptr && maximum_active->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lacp_delay.yfilter)
	|| ydk::is_set(lacp_fallback.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(wait_while.yfilter)
	|| (bundle_load_balancing !=  nullptr && bundle_load_balancing->has_operation())
	|| (minimum_active !=  nullptr && minimum_active->has_operation())
	|| (maximum_active !=  nullptr && maximum_active->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lacp_delay.is_set || is_set(lacp_delay.yfilter)) leaf_name_data.push_back(lacp_delay.get_name_leafdata());
    if (lacp_fallback.is_set || is_set(lacp_fallback.yfilter)) leaf_name_data.push_back(lacp_fallback.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (wait_while.is_set || is_set(wait_while.yfilter)) leaf_name_data.push_back(wait_while.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-load-balancing")
    {
        if(bundle_load_balancing == nullptr)
        {
            bundle_load_balancing = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing>();
        }
        return bundle_load_balancing;
    }

    if(child_yang_name == "minimum-active")
    {
        if(minimum_active == nullptr)
        {
            minimum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive>();
        }
        return minimum_active;
    }

    if(child_yang_name == "maximum-active")
    {
        if(maximum_active == nullptr)
        {
            maximum_active = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive>();
        }
        return maximum_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bundle_load_balancing != nullptr)
    {
        _children["bundle-load-balancing"] = bundle_load_balancing;
    }

    if(minimum_active != nullptr)
    {
        _children["minimum-active"] = minimum_active;
    }

    if(maximum_active != nullptr)
    {
        _children["maximum-active"] = maximum_active;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay = value;
        lacp_delay.value_namespace = name_space;
        lacp_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-fallback")
    {
        lacp_fallback = value;
        lacp_fallback.value_namespace = name_space;
        lacp_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-while")
    {
        wait_while = value;
        wait_while.value_namespace = name_space;
        wait_while.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lacp-delay")
    {
        lacp_delay.yfilter = yfilter;
    }
    if(value_path == "lacp-fallback")
    {
        lacp_fallback.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "wait-while")
    {
        wait_while.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-load-balancing" || name == "minimum-active" || name == "maximum-active" || name == "lacp-delay" || name == "lacp-fallback" || name == "shutdown" || name == "wait-while")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::BundleLoadBalancing()
    :
    localize_links{YType::uint32, "localize-links"}
        ,
    hash_function(nullptr) // presence node
{

    yang_name = "bundle-load-balancing"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::~BundleLoadBalancing()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_data() const
{
    if (is_presence_container) return true;
    return localize_links.is_set
	|| (hash_function !=  nullptr && hash_function->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(localize_links.yfilter)
	|| (hash_function !=  nullptr && hash_function->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-load-balancing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (localize_links.is_set || is_set(localize_links.yfilter)) leaf_name_data.push_back(localize_links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hash-function")
    {
        if(hash_function == nullptr)
        {
            hash_function = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction>();
        }
        return hash_function;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hash_function != nullptr)
    {
        _children["hash-function"] = hash_function;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "localize-links")
    {
        localize_links = value;
        localize_links.value_namespace = name_space;
        localize_links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "localize-links")
    {
        localize_links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-function" || name == "localize-links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::HashFunction()
    :
    hash_type{YType::enumeration, "hash-type"},
    hash_value{YType::uint32, "hash-value"}
{

    yang_name = "hash-function"; yang_parent_name = "bundle-load-balancing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::~HashFunction()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_data() const
{
    if (is_presence_container) return true;
    return hash_type.is_set
	|| hash_value.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_type.yfilter)
	|| ydk::is_set(hash_value.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash-function";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_type.is_set || is_set(hash_type.yfilter)) leaf_name_data.push_back(hash_type.get_name_leafdata());
    if (hash_value.is_set || is_set(hash_value.yfilter)) leaf_name_data.push_back(hash_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-type")
    {
        hash_type = value;
        hash_type.value_namespace = name_space;
        hash_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-value")
    {
        hash_value = value;
        hash_value.value_namespace = name_space;
        hash_value.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-type")
    {
        hash_type.yfilter = yfilter;
    }
    if(value_path == "hash-value")
    {
        hash_value.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::BundleLoadBalancing::HashFunction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-type" || name == "hash-value")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::MinimumActive()
    :
    links{YType::uint32, "links"}
        ,
    bandwidth(nullptr) // presence node
{

    yang_name = "minimum-active"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::~MinimumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_data() const
{
    if (is_presence_container) return true;
    return links.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::Bandwidth()
    :
    min_bandwidth_range{YType::enumeration, "min-bandwidth-range"},
    bandwidth{YType::uint32, "bandwidth"}
{

    yang_name = "bandwidth"; yang_parent_name = "minimum-active"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::~Bandwidth()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return min_bandwidth_range.is_set
	|| bandwidth.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min_bandwidth_range.yfilter)
	|| ydk::is_set(bandwidth.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min_bandwidth_range.is_set || is_set(min_bandwidth_range.yfilter)) leaf_name_data.push_back(min_bandwidth_range.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range = value;
        min_bandwidth_range.value_namespace = name_space;
        min_bandwidth_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min-bandwidth-range")
    {
        min_bandwidth_range.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MinimumActive::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-bandwidth-range" || name == "bandwidth")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::MaximumActive()
    :
    links(nullptr) // presence node
{

    yang_name = "maximum-active"; yang_parent_name = "bundle"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::~MaximumActive()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_data() const
{
    if (is_presence_container) return true;
    return (links !=  nullptr && links->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_operation() const
{
    return is_set(yfilter)
	|| (links !=  nullptr && links->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "links")
    {
        if(links == nullptr)
        {
            links = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links>();
        }
        return links;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(links != nullptr)
    {
        _children["links"] = links;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::Links()
    :
    links{YType::uint32, "links"},
    max_active_links_mode{YType::enumeration, "max-active-links-mode"}
{

    yang_name = "links"; yang_parent_name = "maximum-active"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::~Links()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_data() const
{
    if (is_presence_container) return true;
    return links.is_set
	|| max_active_links_mode.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(max_active_links_mode.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (max_active_links_mode.is_set || is_set(max_active_links_mode.yfilter)) leaf_name_data.push_back(max_active_links_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode = value;
        max_active_links_mode.value_namespace = name_space;
        max_active_links_mode.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "max-active-links-mode")
    {
        max_active_links_mode.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Bundle::MaximumActive::Links::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "links" || name == "max-active-links-mode")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Lacp()
    :
    system_priority{YType::uint32, "system-priority"},
    period{YType::str, "period"},
    collector_max_delay{YType::uint32, "collector-max-delay"},
    lacp_nonrevertive{YType::empty, "lacp-nonrevertive"},
    mode{YType::enumeration, "mode"},
    fast_switchover{YType::empty, "fast-switchover"},
    suppress_flaps{YType::uint32, "suppress-flaps"},
    system_mac{YType::str, "system-mac"},
    period_short{YType::str, "period-short"},
    churn_logging{YType::enumeration, "churn-logging"}
        ,
    cisco_extensions(nullptr) // presence node
    , timeout(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>())
{
    timeout->parent = this;

    yang_name = "lacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::~Lacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_data() const
{
    if (is_presence_container) return true;
    return system_priority.is_set
	|| period.is_set
	|| collector_max_delay.is_set
	|| lacp_nonrevertive.is_set
	|| mode.is_set
	|| fast_switchover.is_set
	|| suppress_flaps.is_set
	|| system_mac.is_set
	|| period_short.is_set
	|| churn_logging.is_set
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_priority.yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(collector_max_delay.yfilter)
	|| ydk::is_set(lacp_nonrevertive.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(fast_switchover.yfilter)
	|| ydk::is_set(suppress_flaps.yfilter)
	|| ydk::is_set(system_mac.yfilter)
	|| ydk::is_set(period_short.yfilter)
	|| ydk::is_set(churn_logging.yfilter)
	|| (cisco_extensions !=  nullptr && cisco_extensions->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:lacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_priority.is_set || is_set(system_priority.yfilter)) leaf_name_data.push_back(system_priority.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (collector_max_delay.is_set || is_set(collector_max_delay.yfilter)) leaf_name_data.push_back(collector_max_delay.get_name_leafdata());
    if (lacp_nonrevertive.is_set || is_set(lacp_nonrevertive.yfilter)) leaf_name_data.push_back(lacp_nonrevertive.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (fast_switchover.is_set || is_set(fast_switchover.yfilter)) leaf_name_data.push_back(fast_switchover.get_name_leafdata());
    if (suppress_flaps.is_set || is_set(suppress_flaps.yfilter)) leaf_name_data.push_back(suppress_flaps.get_name_leafdata());
    if (system_mac.is_set || is_set(system_mac.yfilter)) leaf_name_data.push_back(system_mac.get_name_leafdata());
    if (period_short.is_set || is_set(period_short.yfilter)) leaf_name_data.push_back(period_short.get_name_leafdata());
    if (churn_logging.is_set || is_set(churn_logging.yfilter)) leaf_name_data.push_back(churn_logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-extensions")
    {
        if(cisco_extensions == nullptr)
        {
            cisco_extensions = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions>();
        }
        return cisco_extensions;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cisco_extensions != nullptr)
    {
        _children["cisco-extensions"] = cisco_extensions;
    }

    if(timeout != nullptr)
    {
        _children["timeout"] = timeout;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-priority")
    {
        system_priority = value;
        system_priority.value_namespace = name_space;
        system_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay = value;
        collector_max_delay.value_namespace = name_space;
        collector_max_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive = value;
        lacp_nonrevertive.value_namespace = name_space;
        lacp_nonrevertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover = value;
        fast_switchover.value_namespace = name_space;
        fast_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps = value;
        suppress_flaps.value_namespace = name_space;
        suppress_flaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-mac")
    {
        system_mac = value;
        system_mac.value_namespace = name_space;
        system_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period-short")
    {
        period_short = value;
        period_short.value_namespace = name_space;
        period_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "churn-logging")
    {
        churn_logging = value;
        churn_logging.value_namespace = name_space;
        churn_logging.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-priority")
    {
        system_priority.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "collector-max-delay")
    {
        collector_max_delay.yfilter = yfilter;
    }
    if(value_path == "lacp-nonrevertive")
    {
        lacp_nonrevertive.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "fast-switchover")
    {
        fast_switchover.yfilter = yfilter;
    }
    if(value_path == "suppress-flaps")
    {
        suppress_flaps.yfilter = yfilter;
    }
    if(value_path == "system-mac")
    {
        system_mac.yfilter = yfilter;
    }
    if(value_path == "period-short")
    {
        period_short.yfilter = yfilter;
    }
    if(value_path == "churn-logging")
    {
        churn_logging.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-extensions" || name == "timeout" || name == "system-priority" || name == "period" || name == "collector-max-delay" || name == "lacp-nonrevertive" || name == "mode" || name == "fast-switchover" || name == "suppress-flaps" || name == "system-mac" || name == "period-short" || name == "churn-logging")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::CiscoExtensions()
    :
    cisco_ext{YType::empty, "cisco-ext"},
    cisco_ext_type{YType::enumeration, "cisco-ext-type"}
{

    yang_name = "cisco-extensions"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::~CiscoExtensions()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_data() const
{
    if (is_presence_container) return true;
    return cisco_ext.is_set
	|| cisco_ext_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco_ext.yfilter)
	|| ydk::is_set(cisco_ext_type.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-extensions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco_ext.is_set || is_set(cisco_ext.yfilter)) leaf_name_data.push_back(cisco_ext.get_name_leafdata());
    if (cisco_ext_type.is_set || is_set(cisco_ext_type.yfilter)) leaf_name_data.push_back(cisco_ext_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext = value;
        cisco_ext.value_namespace = name_space;
        cisco_ext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type = value;
        cisco_ext_type.value_namespace = name_space;
        cisco_ext_type.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco-ext")
    {
        cisco_ext.yfilter = yfilter;
    }
    if(value_path == "cisco-ext-type")
    {
        cisco_ext_type.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::CiscoExtensions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-ext" || name == "cisco-ext-type")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::Timeout()
    :
    rx_default{YType::uint32, "rx-default"},
    actor_churn{YType::uint32, "actor-churn"},
    partner_churn{YType::uint32, "partner-churn"}
{

    yang_name = "timeout"; yang_parent_name = "lacp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::~Timeout()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_data() const
{
    if (is_presence_container) return true;
    return rx_default.is_set
	|| actor_churn.is_set
	|| partner_churn.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rx_default.yfilter)
	|| ydk::is_set(actor_churn.yfilter)
	|| ydk::is_set(partner_churn.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rx_default.is_set || is_set(rx_default.yfilter)) leaf_name_data.push_back(rx_default.get_name_leafdata());
    if (actor_churn.is_set || is_set(actor_churn.yfilter)) leaf_name_data.push_back(actor_churn.get_name_leafdata());
    if (partner_churn.is_set || is_set(partner_churn.yfilter)) leaf_name_data.push_back(partner_churn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rx-default")
    {
        rx_default = value;
        rx_default.value_namespace = name_space;
        rx_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actor-churn")
    {
        actor_churn = value;
        actor_churn.value_namespace = name_space;
        actor_churn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-churn")
    {
        partner_churn = value;
        partner_churn.value_namespace = name_space;
        partner_churn.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rx-default")
    {
        rx_default.yfilter = yfilter;
    }
    if(value_path == "actor-churn")
    {
        actor_churn.yfilter = yfilter;
    }
    if(value_path == "partner-churn")
    {
        partner_churn.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Lacp::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-default" || name == "actor-churn" || name == "partner-churn")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::BundleMember()
    :
    port_priority{YType::uint16, "port-priority"}
        ,
    id(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>())
{
    id->parent = this;

    yang_name = "bundle-member"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::~BundleMember()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| (id !=  nullptr && id->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:bundle-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "port-priority")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::Id()
    :
    bundle_id{YType::uint32, "bundle-id"},
    port_activity{YType::enumeration, "port-activity"}
{

    yang_name = "id"; yang_parent_name = "bundle-member"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::~Id()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_data() const
{
    if (is_presence_container) return true;
    return bundle_id.is_set
	|| port_activity.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_id.yfilter)
	|| ydk::is_set(port_activity.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_id.is_set || is_set(bundle_id.yfilter)) leaf_name_data.push_back(bundle_id.get_name_leafdata());
    if (port_activity.is_set || is_set(port_activity.yfilter)) leaf_name_data.push_back(port_activity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-id")
    {
        bundle_id = value;
        bundle_id.value_namespace = name_space;
        bundle_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-activity")
    {
        port_activity = value;
        port_activity.value_namespace = name_space;
        port_activity.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-id")
    {
        bundle_id.yfilter = yfilter;
    }
    if(value_path == "port-activity")
    {
        port_activity.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::BundleMember::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-id" || name == "port-activity")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Mlacp()
    :
    port_priority{YType::uint16, "port-priority"},
    recovery_delay{YType::uint32, "recovery-delay"},
    switchover_type{YType::enumeration, "switchover-type"},
    iccp_group{YType::uint32, "iccp-group"}
        ,
    maximize(nullptr) // presence node
{

    yang_name = "mlacp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::~Mlacp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_data() const
{
    if (is_presence_container) return true;
    return port_priority.is_set
	|| recovery_delay.is_set
	|| switchover_type.is_set
	|| iccp_group.is_set
	|| (maximize !=  nullptr && maximize->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_priority.yfilter)
	|| ydk::is_set(recovery_delay.yfilter)
	|| ydk::is_set(switchover_type.yfilter)
	|| ydk::is_set(iccp_group.yfilter)
	|| (maximize !=  nullptr && maximize->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-bundlemgr-cfg:mlacp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_priority.is_set || is_set(port_priority.yfilter)) leaf_name_data.push_back(port_priority.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.yfilter)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (switchover_type.is_set || is_set(switchover_type.yfilter)) leaf_name_data.push_back(switchover_type.get_name_leafdata());
    if (iccp_group.is_set || is_set(iccp_group.yfilter)) leaf_name_data.push_back(iccp_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maximize")
    {
        if(maximize == nullptr)
        {
            maximize = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize>();
        }
        return maximize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(maximize != nullptr)
    {
        _children["maximize"] = maximize;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-priority")
    {
        port_priority = value;
        port_priority.value_namespace = name_space;
        port_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
        recovery_delay.value_namespace = name_space;
        recovery_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover-type")
    {
        switchover_type = value;
        switchover_type.value_namespace = name_space;
        switchover_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-group")
    {
        iccp_group = value;
        iccp_group.value_namespace = name_space;
        iccp_group.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-priority")
    {
        port_priority.yfilter = yfilter;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay.yfilter = yfilter;
    }
    if(value_path == "switchover-type")
    {
        switchover_type.yfilter = yfilter;
    }
    if(value_path == "iccp-group")
    {
        iccp_group.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximize" || name == "port-priority" || name == "recovery-delay" || name == "switchover-type" || name == "iccp-group")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::Maximize()
    :
    maximize_by{YType::enumeration, "maximize-by"},
    link_threshold{YType::uint32, "link-threshold"},
    bandwidth_threshold{YType::uint32, "bandwidth-threshold"}
{

    yang_name = "maximize"; yang_parent_name = "mlacp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::~Maximize()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_data() const
{
    if (is_presence_container) return true;
    return maximize_by.is_set
	|| link_threshold.is_set
	|| bandwidth_threshold.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximize_by.yfilter)
	|| ydk::is_set(link_threshold.yfilter)
	|| ydk::is_set(bandwidth_threshold.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximize_by.is_set || is_set(maximize_by.yfilter)) leaf_name_data.push_back(maximize_by.get_name_leafdata());
    if (link_threshold.is_set || is_set(link_threshold.yfilter)) leaf_name_data.push_back(link_threshold.get_name_leafdata());
    if (bandwidth_threshold.is_set || is_set(bandwidth_threshold.yfilter)) leaf_name_data.push_back(bandwidth_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximize-by")
    {
        maximize_by = value;
        maximize_by.value_namespace = name_space;
        maximize_by.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-threshold")
    {
        link_threshold = value;
        link_threshold.value_namespace = name_space;
        link_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold = value;
        bandwidth_threshold.value_namespace = name_space;
        bandwidth_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximize-by")
    {
        maximize_by.yfilter = yfilter;
    }
    if(value_path == "link-threshold")
    {
        link_threshold.yfilter = yfilter;
    }
    if(value_path == "bandwidth-threshold")
    {
        bandwidth_threshold.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Mlacp::Maximize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximize-by" || name == "link-threshold" || name == "bandwidth-threshold")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Macsec()
    :
    macsec_service(nullptr) // presence node
    , eap(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>())
    , psk_key_chain(nullptr) // presence node
{
    eap->parent = this;

    yang_name = "macsec"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::~Macsec()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_data() const
{
    if (is_presence_container) return true;
    return (macsec_service !=  nullptr && macsec_service->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_service !=  nullptr && macsec_service->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk_key_chain !=  nullptr && psk_key_chain->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-mka-if-cfg:macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-service")
    {
        if(macsec_service == nullptr)
        {
            macsec_service = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService>();
        }
        return macsec_service;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk-key-chain")
    {
        if(psk_key_chain == nullptr)
        {
            psk_key_chain = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain>();
        }
        return psk_key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(macsec_service != nullptr)
    {
        _children["macsec-service"] = macsec_service;
    }

    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(psk_key_chain != nullptr)
    {
        _children["psk-key-chain"] = psk_key_chain;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-service" || name == "eap" || name == "psk-key-chain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::MacsecService()
    :
    decrypt_port{YType::str, "decrypt-port"},
    key_chain{YType::str, "key-chain"},
    policy{YType::str, "policy"}
{

    yang_name = "macsec-service"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::~MacsecService()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_data() const
{
    if (is_presence_container) return true;
    return decrypt_port.is_set
	|| key_chain.is_set
	|| policy.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(decrypt_port.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decrypt_port.is_set || is_set(decrypt_port.yfilter)) leaf_name_data.push_back(decrypt_port.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port = value;
        decrypt_port.value_namespace = name_space;
        decrypt_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "decrypt-port")
    {
        decrypt_port.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::MacsecService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "decrypt-port" || name == "key-chain" || name == "policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::Eap()
    :
    eap_config{YType::str, "eap-config"},
    policy_name{YType::str, "policy-name"}
{

    yang_name = "eap"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::~Eap()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_data() const
{
    if (is_presence_container) return true;
    return eap_config.is_set
	|| policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eap_config.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eap_config.is_set || is_set(eap_config.yfilter)) leaf_name_data.push_back(eap_config.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eap-config")
    {
        eap_config = value;
        eap_config.value_namespace = name_space;
        eap_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eap-config")
    {
        eap_config.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::Eap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eap-config" || name == "policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::PskKeyChain()
    :
    key_chain_name{YType::str, "key-chain-name"},
    policy_name{YType::str, "policy-name"},
    fallback_key_chain{YType::str, "fallback-key-chain"}
{

    yang_name = "psk-key-chain"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::~PskKeyChain()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_data() const
{
    if (is_presence_container) return true;
    return key_chain_name.is_set
	|| policy_name.is_set
	|| fallback_key_chain.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain_name.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(fallback_key_chain.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk-key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain_name.is_set || is_set(key_chain_name.yfilter)) leaf_name_data.push_back(key_chain_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (fallback_key_chain.is_set || is_set(fallback_key_chain.yfilter)) leaf_name_data.push_back(fallback_key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain-name")
    {
        key_chain_name = value;
        key_chain_name.value_namespace = name_space;
        key_chain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain = value;
        fallback_key_chain.value_namespace = name_space;
        fallback_key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain-name")
    {
        key_chain_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "fallback-key-chain")
    {
        fallback_key_chain.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Macsec::PskKeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-name" || name == "policy-name" || name == "fallback-key-chain")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Neighbor()
    :
    reachable_time{YType::uint32, "reachable-time"},
    ra_unspecify_hoplimit{YType::empty, "ra-unspecify-hoplimit"},
    dad_attempts{YType::uint32, "dad-attempts"},
    srp_multicast_encapsulation{YType::enumeration, "srp-multicast-encapsulation"},
    ns_interval{YType::uint32, "ns-interval"},
    cache_limit{YType::uint32, "cache-limit"},
    redirect{YType::empty, "redirect"},
    srp_unicast_encapsulation{YType::enumeration, "srp-unicast-encapsulation"},
    ramtu_suppress{YType::empty, "ramtu-suppress"},
    managed_config{YType::empty, "managed-config"},
    ra_unicast{YType::empty, "ra-unicast"},
    ra_lifetime{YType::uint32, "ra-lifetime"},
    other_config{YType::empty, "other-config"},
    ra_suppress{YType::empty, "ra-suppress"},
    router_preference{YType::enumeration, "router-preference"}
        ,
    raspecific_route_s(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>())
    , radns_searches(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>())
    , radns_servers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>())
    , ra_interval(nullptr) // presence node
    , ipv6_prefixes(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>())
{
    raspecific_route_s->parent = this;
    radns_searches->parent = this;
    radns_servers->parent = this;
    ipv6_prefixes->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return reachable_time.is_set
	|| ra_unspecify_hoplimit.is_set
	|| dad_attempts.is_set
	|| srp_multicast_encapsulation.is_set
	|| ns_interval.is_set
	|| cache_limit.is_set
	|| redirect.is_set
	|| srp_unicast_encapsulation.is_set
	|| ramtu_suppress.is_set
	|| managed_config.is_set
	|| ra_unicast.is_set
	|| ra_lifetime.is_set
	|| other_config.is_set
	|| ra_suppress.is_set
	|| router_preference.is_set
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_data())
	|| (radns_searches !=  nullptr && radns_searches->has_data())
	|| (radns_servers !=  nullptr && radns_servers->has_data())
	|| (ra_interval !=  nullptr && ra_interval->has_data())
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_time.yfilter)
	|| ydk::is_set(ra_unspecify_hoplimit.yfilter)
	|| ydk::is_set(dad_attempts.yfilter)
	|| ydk::is_set(srp_multicast_encapsulation.yfilter)
	|| ydk::is_set(ns_interval.yfilter)
	|| ydk::is_set(cache_limit.yfilter)
	|| ydk::is_set(redirect.yfilter)
	|| ydk::is_set(srp_unicast_encapsulation.yfilter)
	|| ydk::is_set(ramtu_suppress.yfilter)
	|| ydk::is_set(managed_config.yfilter)
	|| ydk::is_set(ra_unicast.yfilter)
	|| ydk::is_set(ra_lifetime.yfilter)
	|| ydk::is_set(other_config.yfilter)
	|| ydk::is_set(ra_suppress.yfilter)
	|| ydk::is_set(router_preference.yfilter)
	|| (raspecific_route_s !=  nullptr && raspecific_route_s->has_operation())
	|| (radns_searches !=  nullptr && radns_searches->has_operation())
	|| (radns_servers !=  nullptr && radns_servers->has_operation())
	|| (ra_interval !=  nullptr && ra_interval->has_operation())
	|| (ipv6_prefixes !=  nullptr && ipv6_prefixes->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_time.is_set || is_set(reachable_time.yfilter)) leaf_name_data.push_back(reachable_time.get_name_leafdata());
    if (ra_unspecify_hoplimit.is_set || is_set(ra_unspecify_hoplimit.yfilter)) leaf_name_data.push_back(ra_unspecify_hoplimit.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.yfilter)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (srp_multicast_encapsulation.is_set || is_set(srp_multicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_multicast_encapsulation.get_name_leafdata());
    if (ns_interval.is_set || is_set(ns_interval.yfilter)) leaf_name_data.push_back(ns_interval.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.yfilter)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.yfilter)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (srp_unicast_encapsulation.is_set || is_set(srp_unicast_encapsulation.yfilter)) leaf_name_data.push_back(srp_unicast_encapsulation.get_name_leafdata());
    if (ramtu_suppress.is_set || is_set(ramtu_suppress.yfilter)) leaf_name_data.push_back(ramtu_suppress.get_name_leafdata());
    if (managed_config.is_set || is_set(managed_config.yfilter)) leaf_name_data.push_back(managed_config.get_name_leafdata());
    if (ra_unicast.is_set || is_set(ra_unicast.yfilter)) leaf_name_data.push_back(ra_unicast.get_name_leafdata());
    if (ra_lifetime.is_set || is_set(ra_lifetime.yfilter)) leaf_name_data.push_back(ra_lifetime.get_name_leafdata());
    if (other_config.is_set || is_set(other_config.yfilter)) leaf_name_data.push_back(other_config.get_name_leafdata());
    if (ra_suppress.is_set || is_set(ra_suppress.yfilter)) leaf_name_data.push_back(ra_suppress.get_name_leafdata());
    if (router_preference.is_set || is_set(router_preference.yfilter)) leaf_name_data.push_back(router_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route-s")
    {
        if(raspecific_route_s == nullptr)
        {
            raspecific_route_s = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS>();
        }
        return raspecific_route_s;
    }

    if(child_yang_name == "radns-searches")
    {
        if(radns_searches == nullptr)
        {
            radns_searches = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches>();
        }
        return radns_searches;
    }

    if(child_yang_name == "radns-servers")
    {
        if(radns_servers == nullptr)
        {
            radns_servers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers>();
        }
        return radns_servers;
    }

    if(child_yang_name == "ra-interval")
    {
        if(ra_interval == nullptr)
        {
            ra_interval = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval>();
        }
        return ra_interval;
    }

    if(child_yang_name == "ipv6-prefixes")
    {
        if(ipv6_prefixes == nullptr)
        {
            ipv6_prefixes = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes>();
        }
        return ipv6_prefixes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(raspecific_route_s != nullptr)
    {
        _children["raspecific-route-s"] = raspecific_route_s;
    }

    if(radns_searches != nullptr)
    {
        _children["radns-searches"] = radns_searches;
    }

    if(radns_servers != nullptr)
    {
        _children["radns-servers"] = radns_servers;
    }

    if(ra_interval != nullptr)
    {
        _children["ra-interval"] = ra_interval;
    }

    if(ipv6_prefixes != nullptr)
    {
        _children["ipv6-prefixes"] = ipv6_prefixes;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-time")
    {
        reachable_time = value;
        reachable_time.value_namespace = name_space;
        reachable_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit = value;
        ra_unspecify_hoplimit.value_namespace = name_space;
        ra_unspecify_hoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
        dad_attempts.value_namespace = name_space;
        dad_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation = value;
        srp_multicast_encapsulation.value_namespace = name_space;
        srp_multicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ns-interval")
    {
        ns_interval = value;
        ns_interval.value_namespace = name_space;
        ns_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
        cache_limit.value_namespace = name_space;
        cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect")
    {
        redirect = value;
        redirect.value_namespace = name_space;
        redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation = value;
        srp_unicast_encapsulation.value_namespace = name_space;
        srp_unicast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress = value;
        ramtu_suppress.value_namespace = name_space;
        ramtu_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "managed-config")
    {
        managed_config = value;
        managed_config.value_namespace = name_space;
        managed_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast = value;
        ra_unicast.value_namespace = name_space;
        ra_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime = value;
        ra_lifetime.value_namespace = name_space;
        ra_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "other-config")
    {
        other_config = value;
        other_config.value_namespace = name_space;
        other_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress = value;
        ra_suppress.value_namespace = name_space;
        ra_suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-preference")
    {
        router_preference = value;
        router_preference.value_namespace = name_space;
        router_preference.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-time")
    {
        reachable_time.yfilter = yfilter;
    }
    if(value_path == "ra-unspecify-hoplimit")
    {
        ra_unspecify_hoplimit.yfilter = yfilter;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts.yfilter = yfilter;
    }
    if(value_path == "srp-multicast-encapsulation")
    {
        srp_multicast_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ns-interval")
    {
        ns_interval.yfilter = yfilter;
    }
    if(value_path == "cache-limit")
    {
        cache_limit.yfilter = yfilter;
    }
    if(value_path == "redirect")
    {
        redirect.yfilter = yfilter;
    }
    if(value_path == "srp-unicast-encapsulation")
    {
        srp_unicast_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ramtu-suppress")
    {
        ramtu_suppress.yfilter = yfilter;
    }
    if(value_path == "managed-config")
    {
        managed_config.yfilter = yfilter;
    }
    if(value_path == "ra-unicast")
    {
        ra_unicast.yfilter = yfilter;
    }
    if(value_path == "ra-lifetime")
    {
        ra_lifetime.yfilter = yfilter;
    }
    if(value_path == "other-config")
    {
        other_config.yfilter = yfilter;
    }
    if(value_path == "ra-suppress")
    {
        ra_suppress.yfilter = yfilter;
    }
    if(value_path == "router-preference")
    {
        router_preference.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raspecific-route-s" || name == "radns-searches" || name == "radns-servers" || name == "ra-interval" || name == "ipv6-prefixes" || name == "reachable-time" || name == "ra-unspecify-hoplimit" || name == "dad-attempts" || name == "srp-multicast-encapsulation" || name == "ns-interval" || name == "cache-limit" || name == "redirect" || name == "srp-unicast-encapsulation" || name == "ramtu-suppress" || name == "managed-config" || name == "ra-unicast" || name == "ra-lifetime" || name == "other-config" || name == "ra-suppress" || name == "router-preference")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRouteS()
    :
    raspecific_route(this, {"specific_route"})
{

    yang_name = "raspecific-route-s"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::~RaspecificRouteS()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<raspecific_route.len(); index++)
    {
        if(raspecific_route[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_operation() const
{
    for (std::size_t index=0; index<raspecific_route.len(); index++)
    {
        if(raspecific_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "raspecific-route")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute>();
        ent_->parent = this;
        raspecific_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : raspecific_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raspecific-route")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::RaspecificRoute()
    :
    specific_route{YType::str, "specific-route"},
    prefix_length{YType::uint8, "prefix-length"},
    lifetime{YType::uint32, "lifetime"},
    preference{YType::enumeration, "preference"}
{

    yang_name = "raspecific-route"; yang_parent_name = "raspecific-route-s"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::~RaspecificRoute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_data() const
{
    if (is_presence_container) return true;
    return specific_route.is_set
	|| prefix_length.is_set
	|| lifetime.is_set
	|| preference.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(specific_route.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(lifetime.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raspecific-route";
    ADD_KEY_TOKEN(specific_route, "specific-route");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (specific_route.is_set || is_set(specific_route.yfilter)) leaf_name_data.push_back(specific_route.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "specific-route")
    {
        specific_route = value;
        specific_route.value_namespace = name_space;
        specific_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "specific-route")
    {
        specific_route.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaspecificRouteS::RaspecificRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "specific-route" || name == "prefix-length" || name == "lifetime" || name == "preference")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearches()
    :
    radns_search(this, {"dns_search_list"})
{

    yang_name = "radns-searches"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::~RadnsSearches()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radns_search.len(); index++)
    {
        if(radns_search[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_operation() const
{
    for (std::size_t index=0; index<radns_search.len(); index++)
    {
        if(radns_search[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-searches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-search")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch>();
        ent_->parent = this;
        radns_search.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : radns_search.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-search")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::RadnsSearch()
    :
    dns_search_list{YType::str, "dns-search-list"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-search"; yang_parent_name = "radns-searches"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::~RadnsSearch()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_data() const
{
    if (is_presence_container) return true;
    return dns_search_list.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_search_list.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-search";
    ADD_KEY_TOKEN(dns_search_list, "dns-search-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_search_list.is_set || is_set(dns_search_list.yfilter)) leaf_name_data.push_back(dns_search_list.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list = value;
        dns_search_list.value_namespace = name_space;
        dns_search_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-search-list")
    {
        dns_search_list.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsSearches::RadnsSearch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-search-list" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServers()
    :
    radns_server(this, {"dns_server"})
{

    yang_name = "radns-servers"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::~RadnsServers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<radns_server.len(); index++)
    {
        if(radns_server[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_operation() const
{
    for (std::size_t index=0; index<radns_server.len(); index++)
    {
        if(radns_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radns-server")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer>();
        ent_->parent = this;
        radns_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : radns_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radns-server")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::RadnsServer()
    :
    dns_server{YType::str, "dns-server"},
    lifetime{YType::uint32, "lifetime"}
{

    yang_name = "radns-server"; yang_parent_name = "radns-servers"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::~RadnsServer()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_data() const
{
    if (is_presence_container) return true;
    return dns_server.is_set
	|| lifetime.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(lifetime.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radns-server";
    ADD_KEY_TOKEN(dns_server, "dns-server");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_server.is_set || is_set(dns_server.yfilter)) leaf_name_data.push_back(dns_server.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.yfilter)) leaf_name_data.push_back(lifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns-server")
    {
        dns_server = value;
        dns_server.value_namespace = name_space;
        dns_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
        lifetime.value_namespace = name_space;
        lifetime.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "lifetime")
    {
        lifetime.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RadnsServers::RadnsServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-server" || name == "lifetime")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::RaInterval()
    :
    maximum{YType::uint32, "maximum"},
    minimum{YType::uint32, "minimum"}
{

    yang_name = "ra-interval"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::~RaInterval()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ra-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::RaInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefixes()
    :
    ipv6_prefix(this, {"prefix"})
{

    yang_name = "ipv6-prefixes"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::~Ipv6Prefixes()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_operation() const
{
    for (std::size_t index=0; index<ipv6_prefix.len(); index++)
    {
        if(ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-prefix")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix>();
        ent_->parent = this;
        ipv6_prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-prefix")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::Ipv6Prefix()
    :
    prefix{YType::str, "prefix"},
    prefix_zone{YType::str, "prefix-zone"},
    prefix_length{YType::uint8, "prefix-length"},
    valid_lifetime{YType::uint32, "valid-lifetime"},
    preferred_lifetime{YType::uint32, "preferred-lifetime"},
    off_link{YType::boolean, "off-link"},
    no_auto_config{YType::boolean, "no-auto-config"},
    no_advertize{YType::boolean, "no-advertize"},
    expiry_month{YType::enumeration, "expiry-month"},
    expiry_date{YType::uint32, "expiry-date"},
    expiry_year{YType::uint32, "expiry-year"},
    expiry_hour{YType::uint32, "expiry-hour"},
    expiry_minute{YType::uint32, "expiry-minute"},
    pref_expiry_month{YType::enumeration, "pref-expiry-month"},
    pref_expiry_date{YType::uint32, "pref-expiry-date"},
    pref_expiry_year{YType::uint32, "pref-expiry-year"},
    pref_expiry_hour{YType::uint32, "pref-expiry-hour"},
    pref_expiry_minute{YType::uint32, "pref-expiry-minute"}
{

    yang_name = "ipv6-prefix"; yang_parent_name = "ipv6-prefixes"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::~Ipv6Prefix()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_zone.is_set
	|| prefix_length.is_set
	|| valid_lifetime.is_set
	|| preferred_lifetime.is_set
	|| off_link.is_set
	|| no_auto_config.is_set
	|| no_advertize.is_set
	|| expiry_month.is_set
	|| expiry_date.is_set
	|| expiry_year.is_set
	|| expiry_hour.is_set
	|| expiry_minute.is_set
	|| pref_expiry_month.is_set
	|| pref_expiry_date.is_set
	|| pref_expiry_year.is_set
	|| pref_expiry_hour.is_set
	|| pref_expiry_minute.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_zone.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(valid_lifetime.yfilter)
	|| ydk::is_set(preferred_lifetime.yfilter)
	|| ydk::is_set(off_link.yfilter)
	|| ydk::is_set(no_auto_config.yfilter)
	|| ydk::is_set(no_advertize.yfilter)
	|| ydk::is_set(expiry_month.yfilter)
	|| ydk::is_set(expiry_date.yfilter)
	|| ydk::is_set(expiry_year.yfilter)
	|| ydk::is_set(expiry_hour.yfilter)
	|| ydk::is_set(expiry_minute.yfilter)
	|| ydk::is_set(pref_expiry_month.yfilter)
	|| ydk::is_set(pref_expiry_date.yfilter)
	|| ydk::is_set(pref_expiry_year.yfilter)
	|| ydk::is_set(pref_expiry_hour.yfilter)
	|| ydk::is_set(pref_expiry_minute.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prefix";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_zone.is_set || is_set(prefix_zone.yfilter)) leaf_name_data.push_back(prefix_zone.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (valid_lifetime.is_set || is_set(valid_lifetime.yfilter)) leaf_name_data.push_back(valid_lifetime.get_name_leafdata());
    if (preferred_lifetime.is_set || is_set(preferred_lifetime.yfilter)) leaf_name_data.push_back(preferred_lifetime.get_name_leafdata());
    if (off_link.is_set || is_set(off_link.yfilter)) leaf_name_data.push_back(off_link.get_name_leafdata());
    if (no_auto_config.is_set || is_set(no_auto_config.yfilter)) leaf_name_data.push_back(no_auto_config.get_name_leafdata());
    if (no_advertize.is_set || is_set(no_advertize.yfilter)) leaf_name_data.push_back(no_advertize.get_name_leafdata());
    if (expiry_month.is_set || is_set(expiry_month.yfilter)) leaf_name_data.push_back(expiry_month.get_name_leafdata());
    if (expiry_date.is_set || is_set(expiry_date.yfilter)) leaf_name_data.push_back(expiry_date.get_name_leafdata());
    if (expiry_year.is_set || is_set(expiry_year.yfilter)) leaf_name_data.push_back(expiry_year.get_name_leafdata());
    if (expiry_hour.is_set || is_set(expiry_hour.yfilter)) leaf_name_data.push_back(expiry_hour.get_name_leafdata());
    if (expiry_minute.is_set || is_set(expiry_minute.yfilter)) leaf_name_data.push_back(expiry_minute.get_name_leafdata());
    if (pref_expiry_month.is_set || is_set(pref_expiry_month.yfilter)) leaf_name_data.push_back(pref_expiry_month.get_name_leafdata());
    if (pref_expiry_date.is_set || is_set(pref_expiry_date.yfilter)) leaf_name_data.push_back(pref_expiry_date.get_name_leafdata());
    if (pref_expiry_year.is_set || is_set(pref_expiry_year.yfilter)) leaf_name_data.push_back(pref_expiry_year.get_name_leafdata());
    if (pref_expiry_hour.is_set || is_set(pref_expiry_hour.yfilter)) leaf_name_data.push_back(pref_expiry_hour.get_name_leafdata());
    if (pref_expiry_minute.is_set || is_set(pref_expiry_minute.yfilter)) leaf_name_data.push_back(pref_expiry_minute.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone = value;
        prefix_zone.value_namespace = name_space;
        prefix_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime = value;
        valid_lifetime.value_namespace = name_space;
        valid_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime = value;
        preferred_lifetime.value_namespace = name_space;
        preferred_lifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "off-link")
    {
        off_link = value;
        off_link.value_namespace = name_space;
        off_link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config = value;
        no_auto_config.value_namespace = name_space;
        no_auto_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-advertize")
    {
        no_advertize = value;
        no_advertize.value_namespace = name_space;
        no_advertize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-month")
    {
        expiry_month = value;
        expiry_month.value_namespace = name_space;
        expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-date")
    {
        expiry_date = value;
        expiry_date.value_namespace = name_space;
        expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-year")
    {
        expiry_year = value;
        expiry_year.value_namespace = name_space;
        expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour = value;
        expiry_hour.value_namespace = name_space;
        expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute = value;
        expiry_minute.value_namespace = name_space;
        expiry_minute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month = value;
        pref_expiry_month.value_namespace = name_space;
        pref_expiry_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date = value;
        pref_expiry_date.value_namespace = name_space;
        pref_expiry_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year = value;
        pref_expiry_year.value_namespace = name_space;
        pref_expiry_year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour = value;
        pref_expiry_hour.value_namespace = name_space;
        pref_expiry_hour.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute = value;
        pref_expiry_minute.value_namespace = name_space;
        pref_expiry_minute.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-zone")
    {
        prefix_zone.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "valid-lifetime")
    {
        valid_lifetime.yfilter = yfilter;
    }
    if(value_path == "preferred-lifetime")
    {
        preferred_lifetime.yfilter = yfilter;
    }
    if(value_path == "off-link")
    {
        off_link.yfilter = yfilter;
    }
    if(value_path == "no-auto-config")
    {
        no_auto_config.yfilter = yfilter;
    }
    if(value_path == "no-advertize")
    {
        no_advertize.yfilter = yfilter;
    }
    if(value_path == "expiry-month")
    {
        expiry_month.yfilter = yfilter;
    }
    if(value_path == "expiry-date")
    {
        expiry_date.yfilter = yfilter;
    }
    if(value_path == "expiry-year")
    {
        expiry_year.yfilter = yfilter;
    }
    if(value_path == "expiry-hour")
    {
        expiry_hour.yfilter = yfilter;
    }
    if(value_path == "expiry-minute")
    {
        expiry_minute.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-month")
    {
        pref_expiry_month.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-date")
    {
        pref_expiry_date.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-year")
    {
        pref_expiry_year.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-hour")
    {
        pref_expiry_hour.yfilter = yfilter;
    }
    if(value_path == "pref-expiry-minute")
    {
        pref_expiry_minute.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6Neighbor::Ipv6Prefixes::Ipv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-zone" || name == "prefix-length" || name == "valid-lifetime" || name == "preferred-lifetime" || name == "off-link" || name == "no-auto-config" || name == "no-advertize" || name == "expiry-month" || name == "expiry-date" || name == "expiry-year" || name == "expiry-hour" || name == "expiry-minute" || name == "pref-expiry-month" || name == "pref-expiry-date" || name == "pref-expiry-year" || name == "pref-expiry-hour" || name == "pref-expiry-minute")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
    :
    service_policy(this, {"service_policy_name"})
{

    yang_name = "service-policies"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.len(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        ent_->parent = this;
        service_policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : service_policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{

    yang_name = "service-policy"; yang_parent_name = "service-policies"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_policy_name.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    ADD_KEY_TOKEN(service_policy_name, "service-policy-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.yfilter)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
        service_policy_name.value_namespace = name_space;
        service_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-policy-name")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::Portmode()
    :
    speed_sel{YType::enumeration, "speed-sel"},
    fec_sel{YType::enumeration, "fec-sel"},
    diff_sel{YType::enumeration, "diff-sel"},
    mod_sel{YType::enumeration, "mod-sel"}
{

    yang_name = "portmode"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Portmode::~Portmode()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_data() const
{
    if (is_presence_container) return true;
    return speed_sel.is_set
	|| fec_sel.is_set
	|| diff_sel.is_set
	|| mod_sel.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(speed_sel.yfilter)
	|| ydk::is_set(fec_sel.yfilter)
	|| ydk::is_set(diff_sel.yfilter)
	|| ydk::is_set(mod_sel.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Portmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs5500-coherent-portmode-cfg:portmode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Portmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (speed_sel.is_set || is_set(speed_sel.yfilter)) leaf_name_data.push_back(speed_sel.get_name_leafdata());
    if (fec_sel.is_set || is_set(fec_sel.yfilter)) leaf_name_data.push_back(fec_sel.get_name_leafdata());
    if (diff_sel.is_set || is_set(diff_sel.yfilter)) leaf_name_data.push_back(diff_sel.get_name_leafdata());
    if (mod_sel.is_set || is_set(mod_sel.yfilter)) leaf_name_data.push_back(mod_sel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Portmode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "speed-sel")
    {
        speed_sel = value;
        speed_sel.value_namespace = name_space;
        speed_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-sel")
    {
        fec_sel = value;
        fec_sel.value_namespace = name_space;
        fec_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diff-sel")
    {
        diff_sel = value;
        diff_sel.value_namespace = name_space;
        diff_sel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mod-sel")
    {
        mod_sel = value;
        mod_sel.value_namespace = name_space;
        mod_sel.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Portmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "speed-sel")
    {
        speed_sel.yfilter = yfilter;
    }
    if(value_path == "fec-sel")
    {
        fec_sel.yfilter = yfilter;
    }
    if(value_path == "diff-sel")
    {
        diff_sel.yfilter = yfilter;
    }
    if(value_path == "mod-sel")
    {
        mod_sel.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Portmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "speed-sel" || name == "fec-sel" || name == "diff-sel" || name == "mod-sel")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::CiscoIOSXRPppMaIpcpCfgPpp()
    :
    ipcp(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>())
{
    ipcp->parent = this;

    yang_name = "ppp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::~CiscoIOSXRPppMaIpcpCfgPpp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_data() const
{
    if (is_presence_container) return true;
    return (ipcp !=  nullptr && ipcp->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_operation() const
{
    return is_set(yfilter)
	|| (ipcp !=  nullptr && ipcp->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-ipcp-cfg:ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp")
    {
        if(ipcp == nullptr)
        {
            ipcp = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp>();
        }
        return ipcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipcp != nullptr)
    {
        _children["ipcp"] = ipcp;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipcp")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Ipcp()
    :
    neighbor_route_disable{YType::empty, "neighbor-route-disable"}
        ,
    peer_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>())
    , dns(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>())
{
    peer_address->parent = this;
    dns->parent = this;

    yang_name = "ipcp"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::~Ipcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_route_disable.is_set
	|| (peer_address !=  nullptr && peer_address->has_data())
	|| (dns !=  nullptr && dns->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_route_disable.yfilter)
	|| (peer_address !=  nullptr && peer_address->has_operation())
	|| (dns !=  nullptr && dns->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_route_disable.is_set || is_set(neighbor_route_disable.yfilter)) leaf_name_data.push_back(neighbor_route_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress>();
        }
        return peer_address;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns>();
        }
        return dns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address != nullptr)
    {
        _children["peer-address"] = peer_address;
    }

    if(dns != nullptr)
    {
        _children["dns"] = dns;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable = value;
        neighbor_route_disable.value_namespace = name_space;
        neighbor_route_disable.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address" || name == "dns" || name == "neighbor-route-disable")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::PeerAddress()
    :
    default_{YType::str, "default"}
{

    yang_name = "peer-address"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::~PeerAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_data() const
{
    if (is_presence_container) return true;
    return default_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::Dns()
    :
    dns_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>())
{
    dns_addresses->parent = this;

    yang_name = "dns"; yang_parent_name = "ipcp"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::~Dns()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_data() const
{
    if (is_presence_container) return true;
    return (dns_addresses !=  nullptr && dns_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_operation() const
{
    return is_set(yfilter)
	|| (dns_addresses !=  nullptr && dns_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-addresses")
    {
        if(dns_addresses == nullptr)
        {
            dns_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses>();
        }
        return dns_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dns_addresses != nullptr)
    {
        _children["dns-addresses"] = dns_addresses;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-addresses")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::DnsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{

    yang_name = "dns-addresses"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::~DnsAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| secondary.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaIpcpCfgPpp::Ipcp::Dns::DnsAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagrs()
    :
    dagr(this, {"ip_addr"})
{

    yang_name = "dagrs"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::~Dagrs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dagr.len(); index++)
    {
        if(dagr[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_operation() const
{
    for (std::size_t index=0; index<dagr.len(); index++)
    {
        if(dagr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:dagrs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dagr")
    {
        auto ent_ = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr>();
        ent_->parent = this;
        dagr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dagr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dagr")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Dagr()
    :
    ip_addr{YType::str, "ip-addr"},
    enter{YType::empty, "enter"}
        ,
    sub(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>())
{
    sub->parent = this;

    yang_name = "dagr"; yang_parent_name = "dagrs"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::~Dagr()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| enter.is_set
	|| (sub !=  nullptr && sub->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(enter.yfilter)
	|| (sub !=  nullptr && sub->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dagr";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (enter.is_set || is_set(enter.yfilter)) leaf_name_data.push_back(enter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub")
    {
        if(sub == nullptr)
        {
            sub = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub>();
        }
        return sub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sub != nullptr)
    {
        _children["sub"] = sub;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enter")
    {
        enter = value;
        enter.value_namespace = name_space;
        enter.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "enter")
    {
        enter.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub" || name == "ip-addr" || name == "enter")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Sub()
    :
    priority_timeout{YType::uint32, "priority-timeout"}
        ,
    metric(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>())
    , timers(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>())
    , distance(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>())
{
    metric->parent = this;
    timers->parent = this;
    distance->parent = this;

    yang_name = "sub"; yang_parent_name = "dagr"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::~Sub()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_data() const
{
    if (is_presence_container) return true;
    return priority_timeout.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (distance !=  nullptr && distance->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_timeout.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (distance !=  nullptr && distance->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_timeout.is_set || is_set(priority_timeout.yfilter)) leaf_name_data.push_back(priority_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance>();
        }
        return distance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(timers != nullptr)
    {
        _children["timers"] = timers;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout = value;
        priority_timeout.value_namespace = name_space;
        priority_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-timeout")
    {
        priority_timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "timers" || name == "distance" || name == "priority-timeout")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::Metric()
    :
    metric_norm{YType::uint32, "metric-norm"},
    metric_prio{YType::uint32, "metric-prio"}
{

    yang_name = "metric"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::~Metric()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_data() const
{
    if (is_presence_container) return true;
    return metric_norm.is_set
	|| metric_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_norm.yfilter)
	|| ydk::is_set(metric_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_norm.is_set || is_set(metric_norm.yfilter)) leaf_name_data.push_back(metric_norm.get_name_leafdata());
    if (metric_prio.is_set || is_set(metric_prio.yfilter)) leaf_name_data.push_back(metric_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-norm")
    {
        metric_norm = value;
        metric_norm.value_namespace = name_space;
        metric_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-prio")
    {
        metric_prio = value;
        metric_prio.value_namespace = name_space;
        metric_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-norm")
    {
        metric_norm.yfilter = yfilter;
    }
    if(value_path == "metric-prio")
    {
        metric_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-norm" || name == "metric-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::Timers()
    :
    query_time{YType::uint32, "query-time"},
    sby_time{YType::uint32, "sby-time"}
{

    yang_name = "timers"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::~Timers()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_data() const
{
    if (is_presence_container) return true;
    return query_time.is_set
	|| sby_time.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(query_time.yfilter)
	|| ydk::is_set(sby_time.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_time.is_set || is_set(query_time.yfilter)) leaf_name_data.push_back(query_time.get_name_leafdata());
    if (sby_time.is_set || is_set(sby_time.yfilter)) leaf_name_data.push_back(sby_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "query-time")
    {
        query_time = value;
        query_time.value_namespace = name_space;
        query_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sby-time")
    {
        sby_time = value;
        sby_time.value_namespace = name_space;
        sby_time.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "query-time")
    {
        query_time.yfilter = yfilter;
    }
    if(value_path == "sby-time")
    {
        sby_time.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query-time" || name == "sby-time")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::Distance()
    :
    dist_norm{YType::uint32, "dist-norm"},
    dist_prio{YType::uint32, "dist-prio"}
{

    yang_name = "distance"; yang_parent_name = "sub"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::~Distance()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_data() const
{
    if (is_presence_container) return true;
    return dist_norm.is_set
	|| dist_prio.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dist_norm.yfilter)
	|| ydk::is_set(dist_prio.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dist_norm.is_set || is_set(dist_norm.yfilter)) leaf_name_data.push_back(dist_norm.get_name_leafdata());
    if (dist_prio.is_set || is_set(dist_prio.yfilter)) leaf_name_data.push_back(dist_prio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dist-norm")
    {
        dist_norm = value;
        dist_norm.value_namespace = name_space;
        dist_norm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dist-prio")
    {
        dist_prio = value;
        dist_prio.value_namespace = name_space;
        dist_prio.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dist-norm")
    {
        dist_norm.yfilter = yfilter;
    }
    if(value_path == "dist-prio")
    {
        dist_prio.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dist-norm" || name == "dist-prio")
        return true;
    return false;
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::Ipv4arp()
    :
    learning_local{YType::empty, "learning-local"},
    learning_solicited{YType::empty, "learning-solicited"},
    gratuitous_ignore{YType::empty, "gratuitous-ignore"},
    proxy_arp{YType::empty, "proxy-arp"},
    purge_delay{YType::uint32, "purge-delay"},
    learning_disable{YType::empty, "learning-disable"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "ipv4arp"; yang_parent_name = "interface-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::~Ipv4arp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_data() const
{
    if (is_presence_container) return true;
    return learning_local.is_set
	|| learning_solicited.is_set
	|| gratuitous_ignore.is_set
	|| proxy_arp.is_set
	|| purge_delay.is_set
	|| learning_disable.is_set
	|| local_proxy_arp.is_set
	|| timeout.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learning_local.yfilter)
	|| ydk::is_set(learning_solicited.yfilter)
	|| ydk::is_set(gratuitous_ignore.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(purge_delay.yfilter)
	|| ydk::is_set(learning_disable.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-cfg:ipv4arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_local.is_set || is_set(learning_local.yfilter)) leaf_name_data.push_back(learning_local.get_name_leafdata());
    if (learning_solicited.is_set || is_set(learning_solicited.yfilter)) leaf_name_data.push_back(learning_solicited.get_name_leafdata());
    if (gratuitous_ignore.is_set || is_set(gratuitous_ignore.yfilter)) leaf_name_data.push_back(gratuitous_ignore.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (purge_delay.is_set || is_set(purge_delay.yfilter)) leaf_name_data.push_back(purge_delay.get_name_leafdata());
    if (learning_disable.is_set || is_set(learning_disable.yfilter)) leaf_name_data.push_back(learning_disable.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learning-local")
    {
        learning_local = value;
        learning_local.value_namespace = name_space;
        learning_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited = value;
        learning_solicited.value_namespace = name_space;
        learning_solicited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore = value;
        gratuitous_ignore.value_namespace = name_space;
        gratuitous_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-delay")
    {
        purge_delay = value;
        purge_delay.value_namespace = name_space;
        purge_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning-disable")
    {
        learning_disable = value;
        learning_disable.value_namespace = name_space;
        learning_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learning-local")
    {
        learning_local.yfilter = yfilter;
    }
    if(value_path == "learning-solicited")
    {
        learning_solicited.yfilter = yfilter;
    }
    if(value_path == "gratuitous-ignore")
    {
        gratuitous_ignore.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "purge-delay")
    {
        purge_delay.yfilter = yfilter;
    }
    if(value_path == "learning-disable")
    {
        learning_disable.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning-local" || name == "learning-solicited" || name == "gratuitous-ignore" || name == "proxy-arp" || name == "purge-delay" || name == "learning-disable" || name == "local-proxy-arp" || name == "timeout")
        return true;
    return false;
}


}
}

