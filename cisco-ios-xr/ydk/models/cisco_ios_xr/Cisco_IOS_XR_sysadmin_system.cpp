
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_system.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_system {

Mgmt::Mgmt()
    :
    ipv4(std::make_shared<Mgmt::Ipv4>())
    , ipv6(std::make_shared<Mgmt::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "mgmt"; yang_parent_name = "Cisco-IOS-XR-sysadmin-system"; is_top_level_class = true; has_list_ancestor = false; 
}

Mgmt::~Mgmt()
{
}

bool Mgmt::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Mgmt::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Mgmt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-system:mgmt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mgmt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mgmt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Mgmt::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Mgmt::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mgmt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Mgmt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mgmt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Mgmt::clone_ptr() const
{
    return std::make_shared<Mgmt>();
}

std::string Mgmt::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mgmt::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mgmt::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mgmt::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mgmt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Mgmt::Ipv4::Ipv4()
    :
    address{YType::str, "address"},
    subnet_mask_ip{YType::str, "subnet-mask-ip"}
{

    yang_name = "ipv4"; yang_parent_name = "mgmt"; is_top_level_class = false; has_list_ancestor = false; 
}

Mgmt::Ipv4::~Ipv4()
{
}

bool Mgmt::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| subnet_mask_ip.is_set;
}

bool Mgmt::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(subnet_mask_ip.yfilter);
}

std::string Mgmt::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-system:mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string Mgmt::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mgmt::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (subnet_mask_ip.is_set || is_set(subnet_mask_ip.yfilter)) leaf_name_data.push_back(subnet_mask_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mgmt::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mgmt::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mgmt::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-mask-ip")
    {
        subnet_mask_ip = value;
        subnet_mask_ip.value_namespace = name_space;
        subnet_mask_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Mgmt::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "subnet-mask-ip")
    {
        subnet_mask_ip.yfilter = yfilter;
    }
}

bool Mgmt::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet-mask-ip")
        return true;
    return false;
}

Mgmt::Ipv6::Ipv6()
    :
    address{YType::str, "address"},
    prefix{YType::uint8, "prefix"}
{

    yang_name = "ipv6"; yang_parent_name = "mgmt"; is_top_level_class = false; has_list_ancestor = false; 
}

Mgmt::Ipv6::~Ipv6()
{
}

bool Mgmt::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix.is_set;
}

bool Mgmt::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Mgmt::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-system:mgmt/" << get_segment_path();
    return path_buffer.str();
}

std::string Mgmt::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mgmt::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mgmt::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mgmt::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mgmt::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Mgmt::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Mgmt::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix")
        return true;
    return false;
}


}
}

