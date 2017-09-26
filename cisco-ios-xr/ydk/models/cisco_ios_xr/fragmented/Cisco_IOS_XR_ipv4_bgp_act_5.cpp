
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_5.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpRpkiValidationIpv4::ClearBgpRpkiValidationIpv4()
{

    yang_name = "clear-bgp-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiValidationIpv4::~ClearBgpRpkiValidationIpv4()
{
}

bool ClearBgpRpkiValidationIpv4::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv4::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpRpkiValidationIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiValidationIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiValidationIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv4>();
}

std::string ClearBgpRpkiValidationIpv4::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv4::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv4::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiValidationIpv4::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiValidationIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpRpkiValidationIpv6::ClearBgpRpkiValidationIpv6()
{

    yang_name = "clear-bgp-rpki-validation-ipv6"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpRpkiValidationIpv6::~ClearBgpRpkiValidationIpv6()
{
}

bool ClearBgpRpkiValidationIpv6::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv6::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpRpkiValidationIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpRpkiValidationIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpRpkiValidationIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv6::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv6>();
}

std::string ClearBgpRpkiValidationIpv6::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv6::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv6::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpRpkiValidationIpv6::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpRpkiValidationIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpShutdown::ClearBgpShutdown()
{

    yang_name = "clear-bgp-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpShutdown::~ClearBgpShutdown()
{
}

bool ClearBgpShutdown::has_data() const
{
    return false;
}

bool ClearBgpShutdown::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpShutdown>();
}

std::string ClearBgpShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpUpdateOutqAddressFamily::ClearBgpUpdateOutqAddressFamily()
{

    yang_name = "clear-bgp-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqAddressFamily::~ClearBgpUpdateOutqAddressFamily()
{
}

bool ClearBgpUpdateOutqAddressFamily::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqAddressFamily>();
}

std::string ClearBgpUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpUpdateOutqAddressFamilyUpdateParent::ClearBgpUpdateOutqAddressFamilyUpdateParent()
{

    yang_name = "clear-bgp-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqAddressFamilyUpdateParent::~ClearBgpUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpUpdateOutqNeighborIpAddr::ClearBgpUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddr::~ClearBgpUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrRefresh::ClearBgpUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrRefresh::~ClearBgpUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParent::ClearBgpUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpUpdateOutqProcess::ClearBgpUpdateOutqProcess()
{

    yang_name = "clear-bgp-update-outq-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqProcess::~ClearBgpUpdateOutqProcess()
{
}

bool ClearBgpUpdateOutqProcess::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqProcess::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpUpdateOutqProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqProcess::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqProcess>();
}

std::string ClearBgpUpdateOutqProcess::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqProcess::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqProcess::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqProcess::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpUpdateOutqUpdateGroup::ClearBgpUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroup::~ClearBgpUpdateOutqUpdateGroup()
{
}

bool ClearBgpUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroup>();
}

std::string ClearBgpUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroup::Input::Input()
    :
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroup::Input::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-group")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroup::ClearBgpUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroup::~ClearBgpUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-group" || name == "update-group")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-sub-group" || name == "update-group")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
        refresh_sub_group.value_namespace = name_space;
        refresh_sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-sub-group" || name == "update-group")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
        sub_group.value_namespace = name_space;
        sub_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group")
    {
        sub_group.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-group" || name == "update-group")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupUpdateParent::ClearBgpUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupUpdateParent::~ClearBgpUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-group")
        return true;
    return false;
}

ClearBgpVersionAfiSafi::ClearBgpVersionAfiSafi()
    :
    input(std::make_shared<ClearBgpVersionAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafi::~ClearBgpVersionAfiSafi()
{
}

bool ClearBgpVersionAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafi>();
}

std::string ClearBgpVersionAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafi::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafi::Input::~Input()
{
}

bool ClearBgpVersionAfiSafi::Input::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpVersionAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpVersionAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddr::ClearBgpVersionAfiSafiBridgeDomainIpAddr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddr::~ClearBgpVersionAfiSafiBridgeDomainIpAddr()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddr>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiBridgeDomainIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiBridgeDomainIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::~ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefix::ClearBgpVersionAfiSafiBridgeDomainIpPrefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefix::~ClearBgpVersionAfiSafiBridgeDomainIpPrefix()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefix>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::~ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiBridgeDomainIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpAddr::ClearBgpVersionAfiSafiIpAddr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpAddr::~ClearBgpVersionAfiSafiIpAddr()
{
}

bool ClearBgpVersionAfiSafiIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpAddr>();
}

std::string ClearBgpVersionAfiSafiIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpAddr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpAddr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVersionAfiSafiIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpAddrIpNetmask::ClearBgpVersionAfiSafiIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpAddrIpNetmask::~ClearBgpVersionAfiSafiIpAddrIpNetmask()
{
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmask>();
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpPrefix::ClearBgpVersionAfiSafiIpPrefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpPrefix::~ClearBgpVersionAfiSafiIpPrefix()
{
}

bool ClearBgpVersionAfiSafiIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpPrefix>();
}

std::string ClearBgpVersionAfiSafiIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpPrefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpPrefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4Addr::ClearBgpVersionAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4Addr::~ClearBgpVersionAfiSafiIpv4Addr()
{
}

bool ClearBgpVersionAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4Addr>();
}

std::string ClearBgpVersionAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::ClearBgpVersionAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::~ClearBgpVersionAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4Prefix::ClearBgpVersionAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4Prefix::~ClearBgpVersionAfiSafiIpv4Prefix()
{
}

bool ClearBgpVersionAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4Prefix>();
}

std::string ClearBgpVersionAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4TunnelNetwork::ClearBgpVersionAfiSafiIpv4TunnelNetwork()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4TunnelNetwork::~ClearBgpVersionAfiSafiIpv4TunnelNetwork()
{
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-tunnel-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4TunnelNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv4TunnelNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetwork>();
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv4TunnelNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-tunnel-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_tunnel_network.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.yfilter)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-tunnel-network")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6Addr::ClearBgpVersionAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6Addr::~ClearBgpVersionAfiSafiIpv6Addr()
{
}

bool ClearBgpVersionAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6Addr>();
}

std::string ClearBgpVersionAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::~ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpVersionAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6Prefix::ClearBgpVersionAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6Prefix::~ClearBgpVersionAfiSafiIpv6Prefix()
{
}

bool ClearBgpVersionAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6Prefix>();
}

std::string ClearBgpVersionAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiMp2MpIpv4Prefix::ClearBgpVersionAfiSafiMp2MpIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiMp2MpIpv4Prefix::~ClearBgpVersionAfiSafiMp2MpIpv4Prefix()
{
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-mp2mp-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiMp2MpIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiMp2MpIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4Prefix>();
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-mp2mp-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(mp2mp.yfilter);
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.yfilter)) leaf_name_data.push_back(mp2mp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "mp2mp")
    {
        mp2mp = value;
        mp2mp.value_namespace = name_space;
        mp2mp.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "mp2mp")
    {
        mp2mp.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiMp2MpIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix" || name == "mp2mp")
        return true;
    return false;
}

ClearBgpVersionAfiSafiNetwork::ClearBgpVersionAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiNetwork::~ClearBgpVersionAfiSafiNetwork()
{
}

bool ClearBgpVersionAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiNetwork>();
}

std::string ClearBgpVersionAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpVersionAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpVersionAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRd::ClearBgpVersionAfiSafiRd()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRd::~ClearBgpVersionAfiSafiRd()
{
}

bool ClearBgpVersionAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRd>();
}

std::string ClearBgpVersionAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRd::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRd::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRd::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpAddr::ClearBgpVersionAfiSafiRdIpAddr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpAddr::~ClearBgpVersionAfiSafiRdIpAddr()
{
}

bool ClearBgpVersionAfiSafiRdIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpAddr>();
}

std::string ClearBgpVersionAfiSafiRdIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpAddr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpAddr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpAddr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmask::ClearBgpVersionAfiSafiRdIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmask::~ClearBgpVersionAfiSafiRdIpAddrIpNetmask()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmask>();
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-addr" || name == "ip-netmask" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpPrefix::ClearBgpVersionAfiSafiRdIpPrefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpPrefix::~ClearBgpVersionAfiSafiRdIpPrefix()
{
}

bool ClearBgpVersionAfiSafiRdIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpPrefix>();
}

std::string ClearBgpVersionAfiSafiRdIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpPrefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpPrefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ip-prefix" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4Addr::ClearBgpVersionAfiSafiRdIpv4Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4Addr::~ClearBgpVersionAfiSafiRdIpv4Addr()
{
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4Addr>();
}

std::string ClearBgpVersionAfiSafiRdIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::~ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask>();
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4Prefix::ClearBgpVersionAfiSafiRdIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4Prefix::~ClearBgpVersionAfiSafiRdIpv4Prefix()
{
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4Prefix>();
}

std::string ClearBgpVersionAfiSafiRdIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6Addr::ClearBgpVersionAfiSafiRdIpv6Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6Addr::~ClearBgpVersionAfiSafiRdIpv6Addr()
{
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6Addr>();
}

std::string ClearBgpVersionAfiSafiRdIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::~ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask>();
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6Prefix::ClearBgpVersionAfiSafiRdIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6Prefix::~ClearBgpVersionAfiSafiRdIpv6Prefix()
{
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6Prefix>();
}

std::string ClearBgpVersionAfiSafiRdIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdNetwork::ClearBgpVersionAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdNetwork::~ClearBgpVersionAfiSafiRdNetwork()
{
}

bool ClearBgpVersionAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdNetwork>();
}

std::string ClearBgpVersionAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRdNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpVersionAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network" || name == "rd")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRtConstraintNetwork::ClearBgpVersionAfiSafiRtConstraintNetwork()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRtConstraintNetwork::~ClearBgpVersionAfiSafiRtConstraintNetwork()
{
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRtConstraintNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rt-constraint-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRtConstraintNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRtConstraintNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRtConstraintNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiRtConstraintNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetwork>();
}

std::string ClearBgpVersionAfiSafiRtConstraintNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRtConstraintNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRtConstraintNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiRtConstraintNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiRtConstraintNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rt-constraint-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiRtConstraintNetwork::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rt_constraint_network.yfilter);
}

std::string ClearBgpVersionAfiSafiRtConstraintNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rt-constraint-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiRtConstraintNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiRtConstraintNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.yfilter)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRtConstraintNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRtConstraintNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiRtConstraintNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiRtConstraintNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rt-constraint-network")
        return true;
    return false;
}

ClearBgpVersionAfiSafiSrPolicyPrefix::ClearBgpVersionAfiSafiSrPolicyPrefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiSrPolicyPrefix::~ClearBgpVersionAfiSafiSrPolicyPrefix()
{
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-sr-policy-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiSrPolicyPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiSrPolicyPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiSrPolicyPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiSrPolicyPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefix>();
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiSrPolicyPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiSrPolicyPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiSrPolicyPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-sr-policy-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiSrPolicyPrefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(sr_policy_prefix.yfilter);
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-sr-policy-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiSrPolicyPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.yfilter)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiSrPolicyPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiSrPolicyPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiSrPolicyPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiSrPolicyPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "sr-policy-prefix")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrf::ClearBgpVersionAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrf::~ClearBgpVersionAfiSafiVrf()
{
}

bool ClearBgpVersionAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrf>();
}

std::string ClearBgpVersionAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrf::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrf::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4Addr::ClearBgpVersionAfiSafiVrfIpv4Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4Addr::~ClearBgpVersionAfiSafiVrfIpv4Addr()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Addr>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::~ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4Prefix::ClearBgpVersionAfiSafiVrfIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4Prefix::~ClearBgpVersionAfiSafiVrfIpv4Prefix()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4Prefix>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6Addr::ClearBgpVersionAfiSafiVrfIpv6Addr()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6Addr::~ClearBgpVersionAfiSafiVrfIpv6Addr()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Addr>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6Addr::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::~ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6Prefix::ClearBgpVersionAfiSafiVrfIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6Prefix::~ClearBgpVersionAfiSafiVrfIpv6Prefix()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6Prefix>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfNetwork::ClearBgpVersionAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfNetwork::~ClearBgpVersionAfiSafiVrfNetwork()
{
}

bool ClearBgpVersionAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfNetwork>();
}

std::string ClearBgpVersionAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionAfiSafiVrfNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionIpAddr::ClearBgpVersionIpAddr()
    :
    input(std::make_shared<ClearBgpVersionIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionIpAddr::~ClearBgpVersionIpAddr()
{
}

bool ClearBgpVersionIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpAddr>();
}

std::string ClearBgpVersionIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionIpAddr::Input::~Input()
{
}

bool ClearBgpVersionIpAddr::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpVersionIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpVersionIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpVersionIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr")
        return true;
    return false;
}

ClearBgpVersionIpAddrIpNetmask::ClearBgpVersionIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpVersionIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionIpAddrIpNetmask::~ClearBgpVersionIpAddrIpNetmask()
{
}

bool ClearBgpVersionIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpAddrIpNetmask>();
}

std::string ClearBgpVersionIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionIpAddrIpNetmask::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpVersionIpAddrIpNetmask::Input::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpVersionIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpVersionIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
}

bool ClearBgpVersionIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpVersionIpPrefix::ClearBgpVersionIpPrefix()
    :
    input(std::make_shared<ClearBgpVersionIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionIpPrefix::~ClearBgpVersionIpPrefix()
{
}

bool ClearBgpVersionIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpPrefix>();
}

std::string ClearBgpVersionIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionIpPrefix::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionIpPrefix::Input::~Input()
{
}

bool ClearBgpVersionIpPrefix::Input::has_data() const
{
    return ip_prefix.is_set;
}

bool ClearBgpVersionIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpVersionIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpVersionIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafi::ClearBgpVersionVrfAfiSafi()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafi::~ClearBgpVersionVrfAfiSafi()
{
}

bool ClearBgpVersionVrfAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafi>();
}

std::string ClearBgpVersionVrfAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafi::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafi::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafi::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4Addr::ClearBgpVersionVrfAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4Addr::~ClearBgpVersionVrfAfiSafiIpv4Addr()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Addr>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::~ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4Prefix::ClearBgpVersionVrfAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4Prefix::~ClearBgpVersionVrfAfiSafiIpv4Prefix()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4Prefix>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv4-prefix" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6Addr::ClearBgpVersionVrfAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6Addr::~ClearBgpVersionVrfAfiSafiIpv6Addr()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Addr>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::~ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6Prefix::ClearBgpVersionVrfAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6Prefix::~ClearBgpVersionVrfAfiSafiIpv6Prefix()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6Prefix>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "ipv6-prefix" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiNetwork::ClearBgpVersionVrfAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiNetwork::~ClearBgpVersionVrfAfiSafiNetwork()
{
}

bool ClearBgpVersionVrfAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiNetwork>();
}

std::string ClearBgpVersionVrfAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiRd::ClearBgpVersionVrfAfiSafiRd()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiRd::~ClearBgpVersionVrfAfiSafiRd()
{
}

bool ClearBgpVersionVrfAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiRd>();
}

std::string ClearBgpVersionVrfAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiRd::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiRd::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiRd::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiRdNetwork::ClearBgpVersionVrfAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiRdNetwork::~ClearBgpVersionVrfAfiSafiRdNetwork()
{
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiRdNetwork>();
}

std::string ClearBgpVersionVrfAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiRdNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network" || name == "rd" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiVrf::ClearBgpVersionVrfAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiVrf::~ClearBgpVersionVrfAfiSafiVrf()
{
}

bool ClearBgpVersionVrfAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiVrf>();
}

std::string ClearBgpVersionVrfAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiVrf::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiVrf::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiVrfNetwork::ClearBgpVersionVrfAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiVrfNetwork::~ClearBgpVersionVrfAfiSafiVrfNetwork()
{
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetwork>();
}

std::string ClearBgpVersionVrfAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfAfiSafiVrfNetwork::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpVersionVrfAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "network" || name == "vrf-all" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpVersionVrfIpAddr::ClearBgpVersionVrfIpAddr()
    :
    input(std::make_shared<ClearBgpVersionVrfIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfIpAddr::~ClearBgpVersionVrfIpAddr()
{
}

bool ClearBgpVersionVrfIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpAddr>();
}

std::string ClearBgpVersionVrfIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfIpAddr::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfIpAddr::Input::~Input()
{
}

bool ClearBgpVersionVrfIpAddr::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfIpAddrIpNetmask::ClearBgpVersionVrfIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpVersionVrfIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfIpAddrIpNetmask::~ClearBgpVersionVrfIpAddrIpNetmask()
{
}

bool ClearBgpVersionVrfIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpAddrIpNetmask>();
}

std::string ClearBgpVersionVrfIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfIpAddrIpNetmask::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpVersionVrfIpAddrIpNetmask::Input::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "ip-netmask" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVersionVrfIpPrefix::ClearBgpVersionVrfIpPrefix()
    :
    input(std::make_shared<ClearBgpVersionVrfIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVersionVrfIpPrefix::~ClearBgpVersionVrfIpPrefix()
{
}

bool ClearBgpVersionVrfIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVersionVrfIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpPrefix>();
}

std::string ClearBgpVersionVrfIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVersionVrfIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVersionVrfIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVersionVrfIpPrefix::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVersionVrfIpPrefix::Input::~Input()
{
}

bool ClearBgpVersionVrfIpPrefix::Input::has_data() const
{
    return ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_prefix.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVersionVrfIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVersionVrfIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVersionVrfIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
        ip_prefix.value_namespace = name_space;
        ip_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVersionVrfIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVersionVrfIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-prefix" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoft::ClearBgpVrfAfiSafiAllSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoft::~ClearBgpVrfAfiSafiAllSoft()
{
}

bool ClearBgpVrfAfiSafiAllSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoft>();
}

std::string ClearBgpVrfAfiSafiAllSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAllSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftIn::ClearBgpVrfAfiSafiAllSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftIn::~ClearBgpVrfAfiSafiAllSoftIn()
{
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftIn>();
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAllSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::ClearBgpVrfAfiSafiAllSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::~ClearBgpVrfAfiSafiAllSoftInPrefixFilter()
{
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilter>();
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftOut::ClearBgpVrfAfiSafiAllSoftOut()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAllSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftOut::~ClearBgpVrfAfiSafiAllSoftOut()
{
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAllSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAllSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAllSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftOut>();
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAllSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAllSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAllSoftOut::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-all-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAllSoftOut::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAllSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAllSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAllSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAllSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAllSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAllSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAllSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoft::ClearBgpVrfAfiSafiAsSoft()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoft::~ClearBgpVrfAfiSafiAsSoft()
{
}

bool ClearBgpVrfAfiSafiAsSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoft>();
}

std::string ClearBgpVrfAfiSafiAsSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoft::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoft::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoft::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAsSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAsSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number" || name == "vrf-all")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftIn::ClearBgpVrfAfiSafiAsSoftIn()
    :
    input(std::make_shared<ClearBgpVrfAfiSafiAsSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftIn::~ClearBgpVrfAfiSafiAsSoftIn()
{
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAfiSafiAsSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAfiSafiAsSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpVrfAfiSafiAsSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftIn>();
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpVrfAfiSafiAsSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpVrfAfiSafiAsSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpVrfAfiSafiAsSoftIn::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-afi-safi-as-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpVrfAfiSafiAsSoftIn::Input::~Input()
{
}

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(vrf_all.yfilter);
}

std::string ClearBgpVrfAfiSafiAsSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpVrfAfiSafiAsSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpVrfAfiSafiAsSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAfiSafiAsSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAfiSafiAsSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
        afi_safi_name.value_namespace = name_space;
        afi_safi_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
        vrf_all.value_namespace = name_space;
        vrf_all.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpVrfAfiSafiAsSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
}

bool ClearBgpVrfAfiSafiAsSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "as-number" || name == "vrf-all")
        return true;
    return false;
}


}
}

