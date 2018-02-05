
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_3.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceShutdown::ClearBgpInstanceShutdown()
    :
    input(std::make_shared<ClearBgpInstanceShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceShutdown::~ClearBgpInstanceShutdown()
{
}

bool ClearBgpInstanceShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceShutdown>();
}

std::string ClearBgpInstanceShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceShutdown::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceShutdown::Input::~Input()
{
}

bool ClearBgpInstanceShutdown::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::~ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqAddressFamily::ClearBgpInstanceUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqAddressFamily::~ClearBgpInstanceUpdateOutqAddressFamily()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqAddressFamily>();
}

std::string ClearBgpInstanceUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqAddressFamily::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamily::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::~ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddr::ClearBgpInstanceUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddr::~ClearBgpInstanceUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqProcess::ClearBgpInstanceUpdateOutqProcess()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqProcess::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqProcess::~ClearBgpInstanceUpdateOutqProcess()
{
}

bool ClearBgpInstanceUpdateOutqProcess::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqProcess::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqProcess::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqProcess::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqProcess>();
}

std::string ClearBgpInstanceUpdateOutqProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqProcess::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-process"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqProcess::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqProcess::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqProcess::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceUpdateOutqProcess::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-process/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqProcess::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqProcess::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqProcess::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqProcess::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqProcess::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqProcess::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqProcess::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::ClearBgpInstanceUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::~ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroup::ClearBgpInstanceUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroup::~ClearBgpInstanceUpdateOutqUpdateGroup()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroup>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceUpdateOutqUpdateGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::Input::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceVersionIpAddrIpNetmask::ClearBgpInstanceVersionIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpAddrIpNetmask::~ClearBgpInstanceVersionIpAddrIpNetmask()
{
}

bool ClearBgpInstanceVersionIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpAddrIpNetmask>();
}

std::string ClearBgpInstanceVersionIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceVersionIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionIpAddr::ClearBgpInstanceVersionIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVersionIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpAddr::~ClearBgpInstanceVersionIpAddr()
{
}

bool ClearBgpInstanceVersionIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpAddr>();
}

std::string ClearBgpInstanceVersionIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVersionIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVersionIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionIpPrefix::ClearBgpInstanceVersionIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpPrefix::~ClearBgpInstanceVersionIpPrefix()
{
}

bool ClearBgpInstanceVersionIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpPrefix>();
}

std::string ClearBgpInstanceVersionIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceVersionIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::~ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask>();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpAddr::ClearBgpInstanceVersionAfiSafiIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpAddr::~ClearBgpInstanceVersionAfiSafiIpAddr()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddr>();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpPrefix::ClearBgpInstanceVersionAfiSafiIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpPrefix::~ClearBgpInstanceVersionAfiSafiIpPrefix()
{
}

bool ClearBgpInstanceVersionAfiSafiIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpPrefix>();
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::~ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddr::ClearBgpInstanceVersionAfiSafiRdIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddr::~ClearBgpInstanceVersionAfiSafiRdIpAddr()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddr>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpPrefix::ClearBgpInstanceVersionAfiSafiRdIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpPrefix::~ClearBgpInstanceVersionAfiSafiRdIpPrefix()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpPrefix>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::~ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4Addr::ClearBgpInstanceVersionAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4Addr::~ClearBgpInstanceVersionAfiSafiIpv4Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4Prefix::ClearBgpInstanceVersionAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4Prefix::~ClearBgpInstanceVersionAfiSafiIpv4Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Addr::ClearBgpInstanceVersionAfiSafiRdIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Addr::~ClearBgpInstanceVersionAfiSafiRdIpv4Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::ClearBgpInstanceVersionAfiSafiVrfIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::~ClearBgpInstanceVersionAfiSafiVrfIpv4Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiNetwork::ClearBgpInstanceVersionAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiNetwork::~ClearBgpInstanceVersionAfiSafiNetwork()
{
}

bool ClearBgpInstanceVersionAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiNetwork>();
}

std::string ClearBgpInstanceVersionAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdNetwork::ClearBgpInstanceVersionAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdNetwork::~ClearBgpInstanceVersionAfiSafiRdNetwork()
{
}

bool ClearBgpInstanceVersionAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdNetwork>();
}

std::string ClearBgpInstanceVersionAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfNetwork::ClearBgpInstanceVersionAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfNetwork::~ClearBgpInstanceVersionAfiSafiVrfNetwork()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfNetwork>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::ClearBgpInstanceVersionAfiSafiRtConstraintNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::~ClearBgpInstanceVersionAfiSafiRtConstraintNetwork()
{
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rt-constraint-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRtConstraintNetwork>();
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rt-constraint-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rt_constraint_network.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rt-constraint-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.yfilter)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rt-constraint-network")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::~ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-tunnel-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv4-tunnel-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_tunnel_network.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.yfilter)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv4-tunnel-network")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::~ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6Addr::ClearBgpInstanceVersionAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6Addr::~ClearBgpInstanceVersionAfiSafiIpv6Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6Prefix::ClearBgpInstanceVersionAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6Prefix::~ClearBgpInstanceVersionAfiSafiIpv6Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRd::ClearBgpInstanceVersionAfiSafiRd()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRd::~ClearBgpInstanceVersionAfiSafiRd()
{
}

bool ClearBgpInstanceVersionAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRd>();
}

std::string ClearBgpInstanceVersionAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRd::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRd::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRd::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrf::ClearBgpInstanceVersionAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrf::~ClearBgpInstanceVersionAfiSafiVrf()
{
}

bool ClearBgpInstanceVersionAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrf>();
}

std::string ClearBgpInstanceVersionAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrf::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrf::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafi::ClearBgpInstanceVersionAfiSafi()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafi::~ClearBgpInstanceVersionAfiSafi()
{
}

bool ClearBgpInstanceVersionAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafi>();
}

std::string ClearBgpInstanceVersionAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafi::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafi::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafi::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::ClearBgpInstanceVersionAfiSafiSrPolicyPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::~ClearBgpInstanceVersionAfiSafiSrPolicyPrefix()
{
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-sr-policy-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiSrPolicyPrefix>();
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-sr-policy-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(sr_policy_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-sr-policy-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.yfilter)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "sr-policy-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "bridge-domain-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::ClearBgpInstanceVersionAfiSafiRdIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::~ClearBgpInstanceVersionAfiSafiRdIpv4Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::~ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    mp2mp{YType::str, "mp2mp"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| mp2mp.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(mp2mp.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.yfilter)) leaf_name_data.push_back(mp2mp.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "mp2mp" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::~ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::~ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::~ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::~ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Addr::ClearBgpInstanceVersionAfiSafiRdIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Addr::~ClearBgpInstanceVersionAfiSafiRdIpv6Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::ClearBgpInstanceVersionAfiSafiRdIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::~ClearBgpInstanceVersionAfiSafiRdIpv6Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiRdIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "rd" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::~ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::ClearBgpInstanceVersionAfiSafiVrfIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::~ClearBgpInstanceVersionAfiSafiVrfIpv6Addr()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Addr>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::~ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionAfiSafiVrfIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpAddrIpNetmask::ClearBgpInstanceVersionVrfIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpAddrIpNetmask::~ClearBgpInstanceVersionVrfIpAddrIpNetmask()
{
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpAddrIpNetmask>();
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpAddr::ClearBgpInstanceVersionVrfIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpAddr::~ClearBgpInstanceVersionVrfIpAddr()
{
}

bool ClearBgpInstanceVersionVrfIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpAddr>();
}

std::string ClearBgpInstanceVersionVrfIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionVrfIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVersionVrfIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpPrefix::ClearBgpInstanceVersionVrfIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpPrefix::~ClearBgpInstanceVersionVrfIpPrefix()
{
}

bool ClearBgpInstanceVersionVrfIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpPrefix>();
}

std::string ClearBgpInstanceVersionVrfIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionVrfIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceVersionVrfIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::~ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::~ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::ClearBgpInstanceVersionVrfAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::~ClearBgpInstanceVersionVrfAfiSafiIpv4Addr()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4Addr>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiNetwork::ClearBgpInstanceVersionVrfAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiNetwork::~ClearBgpInstanceVersionVrfAfiSafiNetwork()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiNetwork>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiRdNetwork::ClearBgpInstanceVersionVrfAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiRdNetwork::~ClearBgpInstanceVersionVrfAfiSafiRdNetwork()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRdNetwork>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::ClearBgpInstanceVersionVrfAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::~ClearBgpInstanceVersionVrfAfiSafiVrfNetwork()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrfNetwork>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::~ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::ClearBgpInstanceVersionVrfAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::~ClearBgpInstanceVersionVrfAfiSafiIpv6Addr()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Addr>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::~ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiRd::ClearBgpInstanceVersionVrfAfiSafiRd()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiRd::~ClearBgpInstanceVersionVrfAfiSafiRd()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRd>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiRd::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiRd::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRd::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiVrf::ClearBgpInstanceVersionVrfAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiVrf::~ClearBgpInstanceVersionVrfAfiSafiVrf()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrf>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafiVrf::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrf::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafi::ClearBgpInstanceVersionVrfAfiSafi()
    :
    input(std::make_shared<ClearBgpInstanceVersionVrfAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-version-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafi::~ClearBgpInstanceVersionVrfAfiSafi()
{
}

bool ClearBgpInstanceVersionVrfAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVersionVrfAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVersionVrfAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVersionVrfAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVersionVrfAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVersionVrfAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafi>();
}

std::string ClearBgpInstanceVersionVrfAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVersionVrfAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVersionVrfAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVersionVrfAfiSafi::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-version-vrf-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVersionVrfAfiSafi::Input::~Input()
{
}

bool ClearBgpInstanceVersionVrfAfiSafi::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceVersionVrfAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVersionVrfAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVersionVrfAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVersionVrfAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVersionVrfAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVersionVrfAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceVrfAllGraceful::ClearBgpInstanceVrfAllGraceful()
    :
    input(std::make_shared<ClearBgpInstanceVrfAllGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAllGraceful::~ClearBgpInstanceVrfAllGraceful()
{
}

bool ClearBgpInstanceVrfAllGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAllGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAllGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAllGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAllGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAllGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAllGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAllGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAllGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAllGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAllGraceful>();
}

std::string ClearBgpInstanceVrfAllGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAllGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAllGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAllGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAllGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAllGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-all-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAllGraceful::Input::~Input()
{
}

bool ClearBgpInstanceVrfAllGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAllGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfAllGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAllGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAllGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAllGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAllGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVrfAllGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ClearBgpInstanceVrfAllGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAllGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfAll::ClearBgpInstanceVrfAll()
    :
    input(std::make_shared<ClearBgpInstanceVrfAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfAll::~ClearBgpInstanceVrfAll()
{
}

bool ClearBgpInstanceVrfAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAll::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAll>();
}

std::string ClearBgpInstanceVrfAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfAll::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfAll::Input::~Input()
{
}

bool ClearBgpInstanceVrfAll::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpInstanceVrfAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVrfAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void ClearBgpInstanceVrfAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpInstanceVrfAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddrGraceful::ClearBgpInstanceVrfIpAddrGraceful()
    :
    input(std::make_shared<ClearBgpInstanceVrfIpAddrGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddrGraceful::~ClearBgpInstanceVrfIpAddrGraceful()
{
}

bool ClearBgpInstanceVrfIpAddrGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfIpAddrGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfIpAddrGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddrGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfIpAddrGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddrGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfIpAddrGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfIpAddrGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddrGraceful>();
}

std::string ClearBgpInstanceVrfIpAddrGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddrGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddrGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfIpAddrGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfIpAddrGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddrGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-ip-addr-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddrGraceful::Input::~Input()
{
}

bool ClearBgpInstanceVrfIpAddrGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfIpAddrGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfIpAddrGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfIpAddrGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddrGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddrGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVrfIpAddrGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVrfIpAddrGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVrfIpAddrGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddrLongLivedStale::ClearBgpInstanceVrfIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpInstanceVrfIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddrLongLivedStale::~ClearBgpInstanceVrfIpAddrLongLivedStale()
{
}

bool ClearBgpInstanceVrfIpAddrLongLivedStale::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddrLongLivedStale>();
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddrLongLivedStale::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpInstanceVrfIpAddrLongLivedStale::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVrfIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVrfIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVrfIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddr::ClearBgpInstanceVrfIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceVrfIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddr::~ClearBgpInstanceVrfIpAddr()
{
}

bool ClearBgpInstanceVrfIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceVrfIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceVrfIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceVrfIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceVrfIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceVrfIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddr>();
}

std::string ClearBgpInstanceVrfIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceVrfIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceVrfIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceVrfIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-vrf-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceVrfIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceVrfIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVrfIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceVrfIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceVrfIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceVrfIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceVrfIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void ClearBgpInstanceVrfIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceVrfIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceVrfIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}


}
}

