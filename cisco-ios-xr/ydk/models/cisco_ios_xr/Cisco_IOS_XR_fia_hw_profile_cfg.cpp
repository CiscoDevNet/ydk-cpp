
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fia_hw_profile_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

HwModuleProfileConfig::HwModuleProfileConfig()
    :
    fib_scale(std::make_shared<HwModuleProfileConfig::FibScale>())
	,profile(std::make_shared<HwModuleProfileConfig::Profile>())
	,tcam(std::make_shared<HwModuleProfileConfig::Tcam>())
{
    fib_scale->parent = this;
    profile->parent = this;
    tcam->parent = this;

    yang_name = "hw-module-profile-config"; yang_parent_name = "Cisco-IOS-XR-fia-hw-profile-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

HwModuleProfileConfig::~HwModuleProfileConfig()
{
}

bool HwModuleProfileConfig::has_data() const
{
    return (fib_scale !=  nullptr && fib_scale->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (tcam !=  nullptr && tcam->has_data());
}

bool HwModuleProfileConfig::has_operation() const
{
    return is_set(yfilter)
	|| (fib_scale !=  nullptr && fib_scale->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (tcam !=  nullptr && tcam->has_operation());
}

std::string HwModuleProfileConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-scale")
    {
        if(fib_scale == nullptr)
        {
            fib_scale = std::make_shared<HwModuleProfileConfig::FibScale>();
        }
        return fib_scale;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<HwModuleProfileConfig::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "tcam")
    {
        if(tcam == nullptr)
        {
            tcam = std::make_shared<HwModuleProfileConfig::Tcam>();
        }
        return tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_scale != nullptr)
    {
        children["fib-scale"] = fib_scale;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(tcam != nullptr)
    {
        children["tcam"] = tcam;
    }

    return children;
}

void HwModuleProfileConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HwModuleProfileConfig::clone_ptr() const
{
    return std::make_shared<HwModuleProfileConfig>();
}

std::string HwModuleProfileConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModuleProfileConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModuleProfileConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModuleProfileConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModuleProfileConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-scale" || name == "profile" || name == "tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::FibScale()
    :
    ipv4_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>())
	,ipv6_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>())
{
    ipv4_unicast_scale_no_tcam->parent = this;
    ipv6_unicast_scale_no_tcam->parent = this;

    yang_name = "fib-scale"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::~FibScale()
{
}

bool HwModuleProfileConfig::FibScale::has_data() const
{
    return (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_data())
	|| (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_operation())
	|| (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-scale-no-tcam")
    {
        if(ipv4_unicast_scale_no_tcam == nullptr)
        {
            ipv4_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>();
        }
        return ipv4_unicast_scale_no_tcam;
    }

    if(child_yang_name == "ipv6-unicast-scale-no-tcam")
    {
        if(ipv6_unicast_scale_no_tcam == nullptr)
        {
            ipv6_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>();
        }
        return ipv6_unicast_scale_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast_scale_no_tcam != nullptr)
    {
        children["ipv4-unicast-scale-no-tcam"] = ipv4_unicast_scale_no_tcam;
    }

    if(ipv6_unicast_scale_no_tcam != nullptr)
    {
        children["ipv6-unicast-scale-no-tcam"] = ipv6_unicast_scale_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-scale-no-tcam" || name == "ipv6-unicast-scale-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::Ipv4UnicastScaleNoTcam()
    :
    scale_ipv4_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam>())
{
    scale_ipv4_no_tcam->parent = this;

    yang_name = "ipv4-unicast-scale-no-tcam"; yang_parent_name = "fib-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::~Ipv4UnicastScaleNoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_data() const
{
    return (scale_ipv4_no_tcam !=  nullptr && scale_ipv4_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_operation() const
{
    return is_set(yfilter)
	|| (scale_ipv4_no_tcam !=  nullptr && scale_ipv4_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scale-ipv4-no-tcam")
    {
        if(scale_ipv4_no_tcam == nullptr)
        {
            scale_ipv4_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam>();
        }
        return scale_ipv4_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scale_ipv4_no_tcam != nullptr)
    {
        children["scale-ipv4-no-tcam"] = scale_ipv4_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scale-ipv4-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::ScaleIpv4NoTcam()
    :
    host_optimized_ipv4_no_tcam{YType::str, "host-optimized-ipv4-no-tcam"},
    internet_optimized_ipv4_no_tcam{YType::str, "internet-optimized-ipv4-no-tcam"}
{

    yang_name = "scale-ipv4-no-tcam"; yang_parent_name = "ipv4-unicast-scale-no-tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::~ScaleIpv4NoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_data() const
{
    return host_optimized_ipv4_no_tcam.is_set
	|| internet_optimized_ipv4_no_tcam.is_set;
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_optimized_ipv4_no_tcam.yfilter)
	|| ydk::is_set(internet_optimized_ipv4_no_tcam.yfilter);
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv4-unicast-scale-no-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv4-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_optimized_ipv4_no_tcam.is_set || is_set(host_optimized_ipv4_no_tcam.yfilter)) leaf_name_data.push_back(host_optimized_ipv4_no_tcam.get_name_leafdata());
    if (internet_optimized_ipv4_no_tcam.is_set || is_set(internet_optimized_ipv4_no_tcam.yfilter)) leaf_name_data.push_back(internet_optimized_ipv4_no_tcam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-optimized-ipv4-no-tcam")
    {
        host_optimized_ipv4_no_tcam = value;
        host_optimized_ipv4_no_tcam.value_namespace = name_space;
        host_optimized_ipv4_no_tcam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-optimized-ipv4-no-tcam")
    {
        internet_optimized_ipv4_no_tcam = value;
        internet_optimized_ipv4_no_tcam.value_namespace = name_space;
        internet_optimized_ipv4_no_tcam.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-optimized-ipv4-no-tcam")
    {
        host_optimized_ipv4_no_tcam.yfilter = yfilter;
    }
    if(value_path == "internet-optimized-ipv4-no-tcam")
    {
        internet_optimized_ipv4_no_tcam.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-optimized-ipv4-no-tcam" || name == "internet-optimized-ipv4-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::Ipv6UnicastScaleNoTcam()
    :
    scale_ipv6_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam>())
{
    scale_ipv6_no_tcam->parent = this;

    yang_name = "ipv6-unicast-scale-no-tcam"; yang_parent_name = "fib-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::~Ipv6UnicastScaleNoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_data() const
{
    return (scale_ipv6_no_tcam !=  nullptr && scale_ipv6_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_operation() const
{
    return is_set(yfilter)
	|| (scale_ipv6_no_tcam !=  nullptr && scale_ipv6_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-scale-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scale-ipv6-no-tcam")
    {
        if(scale_ipv6_no_tcam == nullptr)
        {
            scale_ipv6_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam>();
        }
        return scale_ipv6_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scale_ipv6_no_tcam != nullptr)
    {
        children["scale-ipv6-no-tcam"] = scale_ipv6_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scale-ipv6-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::ScaleIpv6NoTcam()
    :
    internet_optimized_ipv6_no_tcam{YType::str, "internet-optimized-ipv6-no-tcam"}
{

    yang_name = "scale-ipv6-no-tcam"; yang_parent_name = "ipv6-unicast-scale-no-tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::~ScaleIpv6NoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_data() const
{
    return internet_optimized_ipv6_no_tcam.is_set;
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_optimized_ipv6_no_tcam.yfilter);
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv6-unicast-scale-no-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv6-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_optimized_ipv6_no_tcam.is_set || is_set(internet_optimized_ipv6_no_tcam.yfilter)) leaf_name_data.push_back(internet_optimized_ipv6_no_tcam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-optimized-ipv6-no-tcam")
    {
        internet_optimized_ipv6_no_tcam = value;
        internet_optimized_ipv6_no_tcam.value_namespace = name_space;
        internet_optimized_ipv6_no_tcam.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-optimized-ipv6-no-tcam")
    {
        internet_optimized_ipv6_no_tcam.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-optimized-ipv6-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Profile()
    :
    qos(std::make_shared<HwModuleProfileConfig::Profile::Qos>())
	,stats(std::make_shared<HwModuleProfileConfig::Profile::Stats>())
	,tcam_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable>())
{
    qos->parent = this;
    stats->parent = this;
    tcam_table->parent = this;

    yang_name = "profile"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::~Profile()
{
}

bool HwModuleProfileConfig::Profile::has_data() const
{
    return (qos !=  nullptr && qos->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (tcam_table !=  nullptr && tcam_table->has_data());
}

bool HwModuleProfileConfig::Profile::has_operation() const
{
    return is_set(yfilter)
	|| (qos !=  nullptr && qos->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (tcam_table !=  nullptr && tcam_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<HwModuleProfileConfig::Profile::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<HwModuleProfileConfig::Profile::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "tcam-table")
    {
        if(tcam_table == nullptr)
        {
            tcam_table = std::make_shared<HwModuleProfileConfig::Profile::TcamTable>();
        }
        return tcam_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(tcam_table != nullptr)
    {
        children["tcam-table"] = tcam_table;
    }

    return children;
}

void HwModuleProfileConfig::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos" || name == "stats" || name == "tcam-table")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::Qos()
    :
    class_maps(std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps>())
	,class_maps_root_def(std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef>())
	,hqos_enable_all(std::make_shared<HwModuleProfileConfig::Profile::Qos::HqosEnableAll>())
	,ingress_model_root_def(std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModelRootDef>())
	,ingress_models(std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels>())
	,trunks(std::make_shared<HwModuleProfileConfig::Profile::Qos::Trunks>())
{
    class_maps->parent = this;
    class_maps_root_def->parent = this;
    hqos_enable_all->parent = this;
    ingress_model_root_def->parent = this;
    ingress_models->parent = this;
    trunks->parent = this;

    yang_name = "qos"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::~Qos()
{
}

bool HwModuleProfileConfig::Profile::Qos::has_data() const
{
    return (class_maps !=  nullptr && class_maps->has_data())
	|| (class_maps_root_def !=  nullptr && class_maps_root_def->has_data())
	|| (hqos_enable_all !=  nullptr && hqos_enable_all->has_data())
	|| (ingress_model_root_def !=  nullptr && ingress_model_root_def->has_data())
	|| (ingress_models !=  nullptr && ingress_models->has_data())
	|| (trunks !=  nullptr && trunks->has_data());
}

bool HwModuleProfileConfig::Profile::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (class_maps !=  nullptr && class_maps->has_operation())
	|| (class_maps_root_def !=  nullptr && class_maps_root_def->has_operation())
	|| (hqos_enable_all !=  nullptr && hqos_enable_all->has_operation())
	|| (ingress_model_root_def !=  nullptr && ingress_model_root_def->has_operation())
	|| (ingress_models !=  nullptr && ingress_models->has_operation())
	|| (trunks !=  nullptr && trunks->has_operation());
}

std::string HwModuleProfileConfig::Profile::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-maps")
    {
        if(class_maps == nullptr)
        {
            class_maps = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps>();
        }
        return class_maps;
    }

    if(child_yang_name == "class-maps-root-def")
    {
        if(class_maps_root_def == nullptr)
        {
            class_maps_root_def = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef>();
        }
        return class_maps_root_def;
    }

    if(child_yang_name == "hqos-enable-all")
    {
        if(hqos_enable_all == nullptr)
        {
            hqos_enable_all = std::make_shared<HwModuleProfileConfig::Profile::Qos::HqosEnableAll>();
        }
        return hqos_enable_all;
    }

    if(child_yang_name == "ingress-model-root-def")
    {
        if(ingress_model_root_def == nullptr)
        {
            ingress_model_root_def = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModelRootDef>();
        }
        return ingress_model_root_def;
    }

    if(child_yang_name == "ingress-models")
    {
        if(ingress_models == nullptr)
        {
            ingress_models = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels>();
        }
        return ingress_models;
    }

    if(child_yang_name == "trunks")
    {
        if(trunks == nullptr)
        {
            trunks = std::make_shared<HwModuleProfileConfig::Profile::Qos::Trunks>();
        }
        return trunks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_maps != nullptr)
    {
        children["class-maps"] = class_maps;
    }

    if(class_maps_root_def != nullptr)
    {
        children["class-maps-root-def"] = class_maps_root_def;
    }

    if(hqos_enable_all != nullptr)
    {
        children["hqos-enable-all"] = hqos_enable_all;
    }

    if(ingress_model_root_def != nullptr)
    {
        children["ingress-model-root-def"] = ingress_model_root_def;
    }

    if(ingress_models != nullptr)
    {
        children["ingress-models"] = ingress_models;
    }

    if(trunks != nullptr)
    {
        children["trunks"] = trunks;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-maps" || name == "class-maps-root-def" || name == "hqos-enable-all" || name == "ingress-model-root-def" || name == "ingress-models" || name == "trunks")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMaps()
{

    yang_name = "class-maps"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::~ClassMaps()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMap()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "class-map"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::~ClassMap()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_data() const
{
    for (std::size_t index=0; index<class_map_size.size(); index++)
    {
        if(class_map_size[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_size.size(); index++)
    {
        if(class_map_size[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-size")
    {
        for(auto const & c : class_map_size)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize>();
        c->parent = this;
        class_map_size.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map_size)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-size" || name == "node-name")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::ClassMapSize()
    :
    location{YType::int32, "location"},
    class_map_size{YType::int32, "class-map-size"}
{

    yang_name = "class-map-size"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::~ClassMapSize()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_data() const
{
    return location.is_set
	|| class_map_size.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(class_map_size.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-size" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (class_map_size.is_set || is_set(class_map_size.yfilter)) leaf_name_data.push_back(class_map_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map-size")
    {
        class_map_size = value;
        class_map_size.value_namespace = name_space;
        class_map_size.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "class-map-size")
    {
        class_map_size.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "class-map-size")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::ClassMapsRootDef()
    :
    class_map_size_def{YType::int32, "class-map-size-def"}
{

    yang_name = "class-maps-root-def"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::~ClassMapsRootDef()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_data() const
{
    return class_map_size_def.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_map_size_def.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps-root-def";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_size_def.is_set || is_set(class_map_size_def.yfilter)) leaf_name_data.push_back(class_map_size_def.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-map-size-def")
    {
        class_map_size_def = value;
        class_map_size_def.value_namespace = name_space;
        class_map_size_def.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-map-size-def")
    {
        class_map_size_def.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-size-def")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::HqosEnableAll::HqosEnableAll()
    :
    hqos_enable{YType::int32, "hqos-enable"}
{

    yang_name = "hqos-enable-all"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::HqosEnableAll::~HqosEnableAll()
{
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_data() const
{
    return hqos_enable.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hqos_enable.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hqos-enable-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hqos_enable.is_set || is_set(hqos_enable.yfilter)) leaf_name_data.push_back(hqos_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::HqosEnableAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hqos-enable")
    {
        hqos_enable = value;
        hqos_enable.value_namespace = name_space;
        hqos_enable.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::HqosEnableAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hqos-enable")
    {
        hqos_enable.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hqos-enable")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::IngressModelRootDef()
    :
    ingress_model_leaf_def{YType::int32, "ingress-model-leaf-def"}
{

    yang_name = "ingress-model-root-def"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::~IngressModelRootDef()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_data() const
{
    return ingress_model_leaf_def.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_model_leaf_def.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model-root-def";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_model_leaf_def.is_set || is_set(ingress_model_leaf_def.yfilter)) leaf_name_data.push_back(ingress_model_leaf_def.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-model-leaf-def")
    {
        ingress_model_leaf_def = value;
        ingress_model_leaf_def.value_namespace = name_space;
        ingress_model_leaf_def.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-model-leaf-def")
    {
        ingress_model_leaf_def.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model-leaf-def")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModels()
{

    yang_name = "ingress-models"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::~IngressModels()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_data() const
{
    for (std::size_t index=0; index<ingress_model.size(); index++)
    {
        if(ingress_model[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_operation() const
{
    for (std::size_t index=0; index<ingress_model.size(); index++)
    {
        if(ingress_model[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-models";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-model")
    {
        for(auto const & c : ingress_model)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel>();
        c->parent = this;
        ingress_model.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ingress_model)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModel()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "ingress-model"; yang_parent_name = "ingress-models"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::~IngressModel()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_data() const
{
    for (std::size_t index=0; index<ingress_model_leaf.size(); index++)
    {
        if(ingress_model_leaf[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_operation() const
{
    for (std::size_t index=0; index<ingress_model_leaf.size(); index++)
    {
        if(ingress_model_leaf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/ingress-models/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-model-leaf")
    {
        for(auto const & c : ingress_model_leaf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf>();
        c->parent = this;
        ingress_model_leaf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ingress_model_leaf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model-leaf" || name == "node-name")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::IngressModelLeaf()
    :
    location{YType::int32, "location"},
    ingress_model_leaf{YType::int32, "ingress-model-leaf"}
{

    yang_name = "ingress-model-leaf"; yang_parent_name = "ingress-model"; is_top_level_class = false; has_list_ancestor = true;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::~IngressModelLeaf()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_data() const
{
    return location.is_set
	|| ingress_model_leaf.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ingress_model_leaf.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model-leaf" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ingress_model_leaf.is_set || is_set(ingress_model_leaf.yfilter)) leaf_name_data.push_back(ingress_model_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-model-leaf")
    {
        ingress_model_leaf = value;
        ingress_model_leaf.value_namespace = name_space;
        ingress_model_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ingress-model-leaf")
    {
        ingress_model_leaf.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "ingress-model-leaf")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::Trunks::Trunks()
    :
    trunk_size{YType::int32, "trunk-size"}
{

    yang_name = "trunks"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::Trunks::~Trunks()
{
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_data() const
{
    return trunk_size.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_size.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::Trunks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::Trunks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::Trunks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_size.is_set || is_set(trunk_size.yfilter)) leaf_name_data.push_back(trunk_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::Trunks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::Trunks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Qos::Trunks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-size")
    {
        trunk_size = value;
        trunk_size.value_namespace = name_space;
        trunk_size.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::Trunks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-size")
    {
        trunk_size.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-size")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Stats::Stats()
    :
    counter_profile{YType::int32, "counter-profile"}
{

    yang_name = "stats"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Stats::~Stats()
{
}

bool HwModuleProfileConfig::Profile::Stats::has_data() const
{
    return counter_profile.is_set;
}

bool HwModuleProfileConfig::Profile::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_profile.yfilter);
}

std::string HwModuleProfileConfig::Profile::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_profile.is_set || is_set(counter_profile.yfilter)) leaf_name_data.push_back(counter_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-profile")
    {
        counter_profile = value;
        counter_profile.value_namespace = name_space;
        counter_profile.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-profile")
    {
        counter_profile.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-profile")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::TcamTable()
    :
    fib_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable>())
{
    fib_table->parent = this;

    yang_name = "tcam-table"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::~TcamTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::has_data() const
{
    return (fib_table !=  nullptr && fib_table->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::has_operation() const
{
    return is_set(yfilter)
	|| (fib_table !=  nullptr && fib_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-table")
    {
        if(fib_table == nullptr)
        {
            fib_table = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable>();
        }
        return fib_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_table != nullptr)
    {
        children["fib-table"] = fib_table;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-table")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::FibTable()
    :
    ipv4_address(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>())
	,ipv6_address(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>())
{
    ipv4_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "fib-table"; yang_parent_name = "tcam-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::~FibTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_data() const
{
    return (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Address()
    :
    ipv4_unicast(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>())
{
    ipv4_unicast->parent = this;

    yang_name = "ipv4-address"; yang_parent_name = "fib-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::~Ipv4Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_data() const
{
    return (ipv4_unicast !=  nullptr && ipv4_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4Unicast()
    :
    ipv4_unicast_percent{YType::uint32, "ipv4-unicast-percent"}
    	,
    ipv4_unicast_prefix_lengths(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>())
{
    ipv4_unicast_prefix_lengths->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "ipv4-address"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::~Ipv4Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_data() const
{
    return ipv4_unicast_percent.is_set
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast_percent.yfilter)
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast_percent.is_set || is_set(ipv4_unicast_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-prefix-lengths")
    {
        if(ipv4_unicast_prefix_lengths == nullptr)
        {
            ipv4_unicast_prefix_lengths = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>();
        }
        return ipv4_unicast_prefix_lengths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast_prefix_lengths != nullptr)
    {
        children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast-percent")
    {
        ipv4_unicast_percent = value;
        ipv4_unicast_percent.value_namespace = name_space;
        ipv4_unicast_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast-percent")
    {
        ipv4_unicast_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-prefix-lengths" || name == "ipv4-unicast-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLengths()
{

    yang_name = "ipv4-unicast-prefix-lengths"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::~Ipv4UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-lengths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-prefix-length")
    {
        for(auto const & c : ipv4_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength>();
        c->parent = this;
        ipv4_unicast_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_unicast_prefix_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-prefix-length")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::Ipv4UnicastPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    ipv4_unicast_prefix_percent{YType::str, "ipv4-unicast-prefix-percent"}
{

    yang_name = "ipv4-unicast-prefix-length"; yang_parent_name = "ipv4-unicast-prefix-lengths"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::~Ipv4UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv4_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ipv4_unicast_prefix_percent.yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/ipv4-unicast-prefix-lengths/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv4_unicast_prefix_percent.is_set || is_set(ipv4_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_prefix_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-unicast-prefix-percent")
    {
        ipv4_unicast_prefix_percent = value;
        ipv4_unicast_prefix_percent.value_namespace = name_space;
        ipv4_unicast_prefix_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ipv4-unicast-prefix-percent")
    {
        ipv4_unicast_prefix_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "ipv4-unicast-prefix-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Address()
    :
    ipv6_unicast(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>())
{
    ipv6_unicast->parent = this;

    yang_name = "ipv6-address"; yang_parent_name = "fib-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::~Ipv6Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_data() const
{
    return (ipv6_unicast !=  nullptr && ipv6_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6Unicast()
    :
    ipv6_unicast_percent{YType::uint32, "ipv6-unicast-percent"}
    	,
    ipv6_unicast_prefix_lengths(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>())
{
    ipv6_unicast_prefix_lengths->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "ipv6-address"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::~Ipv6Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_data() const
{
    return ipv6_unicast_percent.is_set
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_unicast_percent.yfilter)
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_unicast_percent.is_set || is_set(ipv6_unicast_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-prefix-lengths")
    {
        if(ipv6_unicast_prefix_lengths == nullptr)
        {
            ipv6_unicast_prefix_lengths = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>();
        }
        return ipv6_unicast_prefix_lengths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6_unicast_prefix_lengths != nullptr)
    {
        children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-unicast-percent")
    {
        ipv6_unicast_percent = value;
        ipv6_unicast_percent.value_namespace = name_space;
        ipv6_unicast_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-unicast-percent")
    {
        ipv6_unicast_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast-prefix-lengths" || name == "ipv6-unicast-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLengths()
{

    yang_name = "ipv6-unicast-prefix-lengths"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::~Ipv6UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-lengths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-prefix-length")
    {
        for(auto const & c : ipv6_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength>();
        c->parent = this;
        ipv6_unicast_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_unicast_prefix_length)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast-prefix-length")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::Ipv6UnicastPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    ipv6_unicast_prefix_percent{YType::str, "ipv6-unicast-prefix-percent"}
{

    yang_name = "ipv6-unicast-prefix-length"; yang_parent_name = "ipv6-unicast-prefix-lengths"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::~Ipv6UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv6_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ipv6_unicast_prefix_percent.yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/ipv6-unicast-prefix-lengths/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv6_unicast_prefix_percent.is_set || is_set(ipv6_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_prefix_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-unicast-prefix-percent")
    {
        ipv6_unicast_prefix_percent = value;
        ipv6_unicast_prefix_percent.value_namespace = name_space;
        ipv6_unicast_prefix_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ipv6-unicast-prefix-percent")
    {
        ipv6_unicast_prefix_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "ipv6-unicast-prefix-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::Tcam()
    :
    fib_tcam_scale(std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale>())
{
    fib_tcam_scale->parent = this;

    yang_name = "tcam"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::~Tcam()
{
}

bool HwModuleProfileConfig::Tcam::has_data() const
{
    return (fib_tcam_scale !=  nullptr && fib_tcam_scale->has_data());
}

bool HwModuleProfileConfig::Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (fib_tcam_scale !=  nullptr && fib_tcam_scale->has_operation());
}

std::string HwModuleProfileConfig::Tcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-tcam-scale")
    {
        if(fib_tcam_scale == nullptr)
        {
            fib_tcam_scale = std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale>();
        }
        return fib_tcam_scale;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_tcam_scale != nullptr)
    {
        children["fib-tcam-scale"] = fib_tcam_scale;
    }

    return children;
}

void HwModuleProfileConfig::Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-tcam-scale")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::FibTcamScale()
    :
    ipv4_unicast_scale(std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale>())
{
    ipv4_unicast_scale->parent = this;

    yang_name = "fib-tcam-scale"; yang_parent_name = "tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::~FibTcamScale()
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_data() const
{
    return (ipv4_unicast_scale !=  nullptr && ipv4_unicast_scale->has_data());
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast_scale !=  nullptr && ipv4_unicast_scale->has_operation());
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-tcam-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::FibTcamScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::FibTcamScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-scale")
    {
        if(ipv4_unicast_scale == nullptr)
        {
            ipv4_unicast_scale = std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale>();
        }
        return ipv4_unicast_scale;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::FibTcamScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast_scale != nullptr)
    {
        children["ipv4-unicast-scale"] = ipv4_unicast_scale;
    }

    return children;
}

void HwModuleProfileConfig::Tcam::FibTcamScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Tcam::FibTcamScale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-scale")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::Ipv4UnicastScale()
    :
    ipv4_scale{YType::empty, "ipv4-scale"}
{

    yang_name = "ipv4-unicast-scale"; yang_parent_name = "fib-tcam-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::~Ipv4UnicastScale()
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_data() const
{
    return ipv4_scale.is_set;
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_scale.yfilter);
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/fib-tcam-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_scale.is_set || is_set(ipv4_scale.yfilter)) leaf_name_data.push_back(ipv4_scale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-scale")
    {
        ipv4_scale = value;
        ipv4_scale.value_namespace = name_space;
        ipv4_scale.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-scale")
    {
        ipv4_scale.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-scale")
        return true;
    return false;
}


}
}

