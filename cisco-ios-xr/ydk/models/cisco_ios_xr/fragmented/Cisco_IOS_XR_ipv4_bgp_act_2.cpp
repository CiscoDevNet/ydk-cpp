
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceAsGraceful::ClearBgpInstanceAsGraceful()
    :
    input(std::make_shared<ClearBgpInstanceAsGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAsGraceful::~ClearBgpInstanceAsGraceful()
{
}

bool ClearBgpInstanceAsGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAsGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAsGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAsGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAsGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAsGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAsGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAsGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAsGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAsGraceful>();
}

std::string ClearBgpInstanceAsGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAsGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAsGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAsGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAsGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAsGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-as-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAsGraceful::Input::~Input()
{
}

bool ClearBgpInstanceAsGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAsGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAsGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAsGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAsGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAsGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAsGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAsGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAsGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceAs::ClearBgpInstanceAs()
    :
    input(std::make_shared<ClearBgpInstanceAs::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAs::~ClearBgpInstanceAs()
{
}

bool ClearBgpInstanceAs::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAs::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAs::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAs::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAs>();
}

std::string ClearBgpInstanceAs::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAs::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAs::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAs::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAs::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-as"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAs::Input::~Input()
{
}

bool ClearBgpInstanceAs::Input::has_data() const
{
    return instance_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAs::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAs::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAs::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAs::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAs::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAs::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAs::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAs::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAs::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpAddrIpNetmask::ClearBgpInstanceBestpathIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpAddrIpNetmask::~ClearBgpInstanceBestpathIpAddrIpNetmask()
{
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmask>();
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpAddr::ClearBgpInstanceBestpathIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpAddr::~ClearBgpInstanceBestpathIpAddr()
{
}

bool ClearBgpInstanceBestpathIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpAddr>();
}

std::string ClearBgpInstanceBestpathIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceBestpathIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpPrefix::ClearBgpInstanceBestpathIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpPrefix::~ClearBgpInstanceBestpathIpPrefix()
{
}

bool ClearBgpInstanceBestpathIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpPrefix>();
}

std::string ClearBgpInstanceBestpathIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpAddr::ClearBgpInstanceBestpathAfiSafiIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpAddr::~ClearBgpInstanceBestpathAfiSafiIpAddr()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddr>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpPrefix::ClearBgpInstanceBestpathAfiSafiIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpPrefix::~ClearBgpInstanceBestpathAfiSafiIpPrefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddr::ClearBgpInstanceBestpathAfiSafiRdIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddr::~ClearBgpInstanceBestpathAfiSafiRdIpAddr()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddr>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefix::ClearBgpInstanceBestpathAfiSafiRdIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefix::~ClearBgpInstanceBestpathAfiSafiRdIpPrefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Addr::ClearBgpInstanceBestpathAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Addr::~ClearBgpInstanceBestpathAfiSafiIpv4Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Prefix::ClearBgpInstanceBestpathAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Prefix::~ClearBgpInstanceBestpathAfiSafiIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::ClearBgpInstanceBestpathAfiSafiRdIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::~ClearBgpInstanceBestpathAfiSafiRdIpv4Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::~ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiNetwork::ClearBgpInstanceBestpathAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiNetwork::~ClearBgpInstanceBestpathAfiSafiNetwork()
{
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiNetwork>();
}

std::string ClearBgpInstanceBestpathAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdNetwork::ClearBgpInstanceBestpathAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdNetwork::~ClearBgpInstanceBestpathAfiSafiRdNetwork()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetwork>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfNetwork::ClearBgpInstanceBestpathAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfNetwork::~ClearBgpInstanceBestpathAfiSafiVrfNetwork()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetwork>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::~ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork()
{
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rt-constraint-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork>();
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rt-constraint-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rt_constraint_network.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rt-constraint-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.yfilter)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network = value;
        rt_constraint_network.value_namespace = name_space;
        rt_constraint_network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rt-constraint-network")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_tunnel_network.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.yfilter)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network = value;
        ipv4_tunnel_network.value_namespace = name_space;
        ipv4_tunnel_network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-tunnel-network")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
        ipv6_netmask.value_namespace = name_space;
        ipv6_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Addr::ClearBgpInstanceBestpathAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Addr::~ClearBgpInstanceBestpathAfiSafiIpv6Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Prefix::ClearBgpInstanceBestpathAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Prefix::~ClearBgpInstanceBestpathAfiSafiIpv6Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRd::ClearBgpInstanceBestpathAfiSafiRd()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRd::~ClearBgpInstanceBestpathAfiSafiRd()
{
}

bool ClearBgpInstanceBestpathAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRd>();
}

std::string ClearBgpInstanceBestpathAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRd::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRd::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRd::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrf::ClearBgpInstanceBestpathAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrf::~ClearBgpInstanceBestpathAfiSafiVrf()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrf>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrf::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrf::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafi::ClearBgpInstanceBestpathAfiSafi()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafi::~ClearBgpInstanceBestpathAfiSafi()
{
}

bool ClearBgpInstanceBestpathAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafi>();
}

std::string ClearBgpInstanceBestpathAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafi::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafi::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafi::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(sr_policy_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.yfilter)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix = value;
        sr_policy_prefix.value_namespace = name_space;
        sr_policy_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "sr-policy-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::~ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::~ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    mp2mp{YType::str, "mp2mp"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| mp2mp.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(mp2mp.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.yfilter)) leaf_name_data.push_back(mp2mp.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp")
    {
        mp2mp = value;
        mp2mp.value_namespace = name_space;
        mp2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "mp2mp")
    {
        mp2mp.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "mp2mp" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::~ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
        ipv6_netmask.value_namespace = name_space;
        ipv6_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::ClearBgpInstanceBestpathAfiSafiRdIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::~ClearBgpInstanceBestpathAfiSafiRdIpv6Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::~ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
        ipv6_netmask.value_namespace = name_space;
        ipv6_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::~ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::~ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmask::ClearBgpInstanceBestpathVrfIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmask::~ClearBgpInstanceBestpathVrfIpAddrIpNetmask()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmask>();
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpAddr::ClearBgpInstanceBestpathVrfIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpAddr::~ClearBgpInstanceBestpathVrfIpAddr()
{
}

bool ClearBgpInstanceBestpathVrfIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpAddr>();
}

std::string ClearBgpInstanceBestpathVrfIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceBestpathVrfIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpPrefix::ClearBgpInstanceBestpathVrfIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpPrefix::~ClearBgpInstanceBestpathVrfIpPrefix()
{
}

bool ClearBgpInstanceBestpathVrfIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpPrefix>();
}

std::string ClearBgpInstanceBestpathVrfIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathVrfIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathVrfIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::~ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::~ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiNetwork::ClearBgpInstanceBestpathVrfAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiNetwork::~ClearBgpInstanceBestpathVrfAfiSafiNetwork()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetwork>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::ClearBgpInstanceBestpathVrfAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::~ClearBgpInstanceBestpathVrfAfiSafiRdNetwork()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetwork>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::~ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
        ipv6_netmask.value_namespace = name_space;
        ipv6_netmask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::~ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::~ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiRd::ClearBgpInstanceBestpathVrfAfiSafiRd()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiRd::~ClearBgpInstanceBestpathVrfAfiSafiRd()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRd>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiRd::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiRd::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrf::ClearBgpInstanceBestpathVrfAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrf::~ClearBgpInstanceBestpathVrfAfiSafiVrf()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrf>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafi::ClearBgpInstanceBestpathVrfAfiSafi()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafi::~ClearBgpInstanceBestpathVrfAfiSafi()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceBestpathVrfAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafi>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceBestpathVrfAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceBestpathVrfAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceBestpathVrfAfiSafi::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceBestpathVrfAfiSafi::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafi::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceBestpathVrfAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceBestpathVrfAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceBestpathVrfAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceBestpathVrfAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceBestpathVrfAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceExternalGraceful::ClearBgpInstanceExternalGraceful()
    :
    input(std::make_shared<ClearBgpInstanceExternalGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceExternalGraceful::~ClearBgpInstanceExternalGraceful()
{
}

bool ClearBgpInstanceExternalGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceExternalGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceExternalGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceExternalGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceExternalGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceExternalGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceExternalGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceExternalGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceExternalGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceExternalGraceful>();
}

std::string ClearBgpInstanceExternalGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceExternalGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceExternalGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceExternalGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceExternalGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceExternalGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-external-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceExternalGraceful::Input::~Input()
{
}

bool ClearBgpInstanceExternalGraceful::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternalGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceExternalGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceExternalGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceExternalGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceExternalGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceExternalGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceExternalGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceExternalGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceExternal::ClearBgpInstanceExternal()
    :
    input(std::make_shared<ClearBgpInstanceExternal::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceExternal::~ClearBgpInstanceExternal()
{
}

bool ClearBgpInstanceExternal::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceExternal::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceExternal::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceExternal::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceExternal>();
}

std::string ClearBgpInstanceExternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceExternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceExternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceExternal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceExternal::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-external"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceExternal::Input::~Input()
{
}

bool ClearBgpInstanceExternal::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternal::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceExternal::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceExternal::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceExternal::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceExternal::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternal::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceExternal::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceExternal::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceExternal::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpv4Prefix::ClearBgpInstanceAfiSafiDampeningIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpv4Prefix::~ClearBgpInstanceAfiSafiDampeningIpv4Prefix()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiDampeningIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4Prefix>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiDampeningIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::~ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpv6Prefix::ClearBgpInstanceAfiSafiDampeningIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpv6Prefix::~ClearBgpInstanceAfiSafiDampeningIpv6Prefix()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiDampeningIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6Prefix>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiDampeningIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::~ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceNexthopPerformanceStatistics::ClearBgpInstanceNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstanceNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceNexthopPerformanceStatistics::~ClearBgpInstanceNexthopPerformanceStatistics()
{
}

bool ClearBgpInstanceNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceNexthopPerformanceStatistics>();
}

std::string ClearBgpInstanceNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceNexthopPerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstanceNexthopPerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceNexthopRegistrationIpAddr::ClearBgpInstanceNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceNexthopRegistrationIpAddr::~ClearBgpInstanceNexthopRegistrationIpAddr()
{
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddr>();
}

std::string ClearBgpInstanceNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceNexthopRegistrationIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstanceNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstancePeerDropsAll::ClearBgpInstancePeerDropsAll()
    :
    input(std::make_shared<ClearBgpInstancePeerDropsAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstancePeerDropsAll::~ClearBgpInstancePeerDropsAll()
{
}

bool ClearBgpInstancePeerDropsAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePeerDropsAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePeerDropsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePeerDropsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePeerDropsAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePeerDropsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstancePeerDropsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAll::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePeerDropsAll>();
}

std::string ClearBgpInstancePeerDropsAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePeerDropsAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePeerDropsAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstancePeerDropsAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstancePeerDropsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstancePeerDropsAll::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-peer-drops-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstancePeerDropsAll::Input::~Input()
{
}

bool ClearBgpInstancePeerDropsAll::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePeerDropsAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstancePeerDropsAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstancePeerDropsAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePeerDropsAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePeerDropsAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstancePeerDropsAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstancePeerDropsAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstancePeerDropsIpAddr::ClearBgpInstancePeerDropsIpAddr()
    :
    input(std::make_shared<ClearBgpInstancePeerDropsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstancePeerDropsIpAddr::~ClearBgpInstancePeerDropsIpAddr()
{
}

bool ClearBgpInstancePeerDropsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePeerDropsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePeerDropsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePeerDropsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePeerDropsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePeerDropsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstancePeerDropsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePeerDropsIpAddr>();
}

std::string ClearBgpInstancePeerDropsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePeerDropsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePeerDropsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstancePeerDropsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstancePeerDropsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstancePeerDropsIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-peer-drops-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstancePeerDropsIpAddr::Input::~Input()
{
}

bool ClearBgpInstancePeerDropsIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstancePeerDropsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstancePeerDropsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstancePeerDropsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePeerDropsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePeerDropsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstancePeerDropsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpInstancePeerDropsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstancePerformanceStatistics::ClearBgpInstancePerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstancePerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstancePerformanceStatistics::~ClearBgpInstancePerformanceStatistics()
{
}

bool ClearBgpInstancePerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstancePerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePerformanceStatistics>();
}

std::string ClearBgpInstancePerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstancePerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstancePerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstancePerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstancePerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstancePerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstancePerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstancePerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstancePerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstancePerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstancePerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerAllSerialQuery::ClearBgpInstanceRpkiServerAllSerialQuery()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerAllSerialQuery::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerAllSerialQuery::~ClearBgpInstanceRpkiServerAllSerialQuery()
{
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerAllSerialQuery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all-serial-query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerAllSerialQuery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQuery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerAllSerialQuery::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllSerialQuery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerAllSerialQuery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiServerAllSerialQuery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQuery::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerAllSerialQuery>();
}

std::string ClearBgpInstanceRpkiServerAllSerialQuery::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerAllSerialQuery::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerAllSerialQuery::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiServerAllSerialQuery::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerAllSerialQuery::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-all-serial-query"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerAllSerialQuery::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceRpkiServerAllSerialQuery::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all-serial-query/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiServerAllSerialQuery::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerAllSerialQuery::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQuery::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllSerialQuery::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerAllSerialQuery::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiServerAllSerialQuery::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiServerAllSerialQuery::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerAll::ClearBgpInstanceRpkiServerAll()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerAll::~ClearBgpInstanceRpkiServerAll()
{
}

bool ClearBgpInstanceRpkiServerAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiServerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAll::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerAll>();
}

std::string ClearBgpInstanceRpkiServerAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiServerAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiServerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerAll::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerAll::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerAll::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceRpkiServerAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiServerAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiServerAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiServerAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerRpkiServer::ClearBgpInstanceRpkiServerRpkiServer()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerRpkiServer::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerRpkiServer::~ClearBgpInstanceRpkiServerRpkiServer()
{
}

bool ClearBgpInstanceRpkiServerRpkiServer::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerRpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerRpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-rpki-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerRpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerRpkiServer::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerRpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerRpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiServerRpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServer::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerRpkiServer>();
}

std::string ClearBgpInstanceRpkiServerRpkiServer::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerRpkiServer::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerRpkiServer::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiServerRpkiServer::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiServerRpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiServerRpkiServer::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    rpki_server{YType::str, "rpki-server"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-rpki-server"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiServerRpkiServer::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerRpkiServer::Input::has_data() const
{
    return instance_name.is_set
	|| rpki_server.is_set;
}

bool ClearBgpInstanceRpkiServerRpkiServer::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(rpki_server.yfilter);
}

std::string ClearBgpInstanceRpkiServerRpkiServer::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-rpki-server/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiServerRpkiServer::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiServerRpkiServer::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rpki_server.is_set || is_set(rpki_server.yfilter)) leaf_name_data.push_back(rpki_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServer::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerRpkiServer::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerRpkiServer::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-server")
    {
        rpki_server = value;
        rpki_server.value_namespace = name_space;
        rpki_server.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiServerRpkiServer::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "rpki-server")
    {
        rpki_server.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiServerRpkiServer::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "rpki-server")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidationIpv4::ClearBgpInstanceRpkiValidationIpv4()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidationIpv4::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidationIpv4::~ClearBgpInstanceRpkiValidationIpv4()
{
}

bool ClearBgpInstanceRpkiValidationIpv4::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidationIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidationIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidationIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidationIpv4::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidationIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiValidationIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidationIpv4>();
}

std::string ClearBgpInstanceRpkiValidationIpv4::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidationIpv4::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidationIpv4::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiValidationIpv4::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiValidationIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidationIpv4::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation-ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidationIpv4::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidationIpv4::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv4::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceRpkiValidationIpv4::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiValidationIpv4::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidationIpv4::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv4::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidationIpv4::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiValidationIpv4::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiValidationIpv4::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidationIpv6::ClearBgpInstanceRpkiValidationIpv6()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidationIpv6::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation-ipv6"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidationIpv6::~ClearBgpInstanceRpkiValidationIpv6()
{
}

bool ClearBgpInstanceRpkiValidationIpv6::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidationIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidationIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidationIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidationIpv6::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidationIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiValidationIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidationIpv6>();
}

std::string ClearBgpInstanceRpkiValidationIpv6::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidationIpv6::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidationIpv6::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiValidationIpv6::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiValidationIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidationIpv6::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation-ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidationIpv6::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidationIpv6::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv6::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceRpkiValidationIpv6::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiValidationIpv6::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidationIpv6::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv6::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidationIpv6::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiValidationIpv6::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiValidationIpv6::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidation::ClearBgpInstanceRpkiValidation()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidation::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidation::~ClearBgpInstanceRpkiValidation()
{
}

bool ClearBgpInstanceRpkiValidation::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidation::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidation::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceRpkiValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidation::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidation>();
}

std::string ClearBgpInstanceRpkiValidation::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidation::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidation::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceRpkiValidation::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceRpkiValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceRpkiValidation::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceRpkiValidation::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidation::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidation::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceRpkiValidation::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceRpkiValidation::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceRpkiValidation::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidation::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidation::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidation::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceRpkiValidation::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceRpkiValidation::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}


}
}

