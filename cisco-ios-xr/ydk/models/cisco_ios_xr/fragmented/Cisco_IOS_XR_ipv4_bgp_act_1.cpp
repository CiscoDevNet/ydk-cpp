
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpBestpathAfiSafiSrPolicyPrefix::ClearBgpBestpathAfiSafiSrPolicyPrefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiSrPolicyPrefix::~ClearBgpBestpathAfiSafiSrPolicyPrefix()
{
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-sr-policy-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiSrPolicyPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiSrPolicyPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiSrPolicyPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiSrPolicyPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefix>();
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiSrPolicyPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiSrPolicyPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-sr-policy-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(sr_policy_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-sr-policy-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.yfilter)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpBestpathAfiSafiSrPolicyPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "sr-policy-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::~ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "bridge-domain-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4Prefix::ClearBgpBestpathAfiSafiRdIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv4Prefix::~ClearBgpBestpathAfiSafiRdIpv4Prefix()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4Prefix>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiRdIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::ClearBgpBestpathAfiSafiMp2MpIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::~ClearBgpBestpathAfiSafiMp2MpIpv4Prefix()
{
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4Prefix>();
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    mp2mp{YType::str, "mp2mp"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| mp2mp.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(mp2mp.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.yfilter)) leaf_name_data.push_back(mp2mp.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiMp2MpIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "mp2mp" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4Prefix::ClearBgpBestpathAfiSafiVrfIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv4Prefix::~ClearBgpBestpathAfiSafiVrfIpv4Prefix()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4Prefix>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiVrfIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6Addr::ClearBgpBestpathAfiSafiRdIpv6Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6Addr::~ClearBgpBestpathAfiSafiRdIpv6Addr()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Addr>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiRdIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6Prefix::ClearBgpBestpathAfiSafiRdIpv6Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6Prefix::~ClearBgpBestpathAfiSafiRdIpv6Prefix()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiRdIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6Prefix>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiRdIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiRdIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "rd" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6Addr::ClearBgpBestpathAfiSafiVrfIpv6Addr()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6Addr::~ClearBgpBestpathAfiSafiVrfIpv6Addr()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Addr>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiVrfIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6Prefix::ClearBgpBestpathAfiSafiVrfIpv6Prefix()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6Prefix::~ClearBgpBestpathAfiSafiVrfIpv6Prefix()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathAfiSafiVrfIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6Prefix>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathAfiSafiVrfIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathAfiSafiVrfIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi-safi-name" || name == "vrf-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpBestpathVrfIpAddrIpNetmask::ClearBgpBestpathVrfIpAddrIpNetmask()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpAddrIpNetmask::~ClearBgpBestpathVrfIpAddrIpNetmask()
{
}

bool ClearBgpBestpathVrfIpAddrIpNetmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpAddrIpNetmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpAddrIpNetmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr-ip-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpAddrIpNetmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrIpNetmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpAddrIpNetmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfIpAddrIpNetmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmask>();
}

std::string ClearBgpBestpathVrfIpAddrIpNetmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpAddrIpNetmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpAddrIpNetmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfIpAddrIpNetmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfIpAddrIpNetmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfIpAddrIpNetmask::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-addr-ip-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpAddrIpNetmask::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpAddrIpNetmask::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathVrfIpAddrIpNetmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ip_netmask.yfilter);
}

std::string ClearBgpBestpathVrfIpAddrIpNetmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr-ip-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfIpAddrIpNetmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpAddrIpNetmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrIpNetmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpAddrIpNetmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfIpAddrIpNetmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfIpAddrIpNetmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr" || name == "ip-netmask")
        return true;
    return false;
}

ClearBgpBestpathVrfIpAddr::ClearBgpBestpathVrfIpAddr()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpAddr::~ClearBgpBestpathVrfIpAddr()
{
}

bool ClearBgpBestpathVrfIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpAddr>();
}

std::string ClearBgpBestpathVrfIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfIpAddr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpAddr::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpAddr::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathVrfIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpBestpathVrfIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
}

bool ClearBgpBestpathVrfIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpBestpathVrfIpPrefix::ClearBgpBestpathVrfIpPrefix()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpPrefix::~ClearBgpBestpathVrfIpPrefix()
{
}

bool ClearBgpBestpathVrfIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpPrefix>();
}

std::string ClearBgpBestpathVrfIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfIpPrefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfIpPrefix::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpPrefix::Input::has_data() const
{
    return vrf_all.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathVrfIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpBestpathVrfIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix.yfilter = yfilter;
    }
}

bool ClearBgpBestpathVrfIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4Prefix::ClearBgpBestpathVrfAfiSafiIpv4Prefix()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4Prefix::~ClearBgpBestpathVrfAfiSafiIpv4Prefix()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv4Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Prefix>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv4Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv4Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-prefix")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4Addr::ClearBgpBestpathVrfAfiSafiIpv4Addr()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4Addr::~ClearBgpBestpathVrfAfiSafiIpv4Addr()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4Addr>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv4Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv4_addr.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv4Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv4-addr")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiNetwork::ClearBgpBestpathVrfAfiSafiNetwork()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiNetwork::~ClearBgpBestpathVrfAfiSafiNetwork()
{
}

bool ClearBgpBestpathVrfAfiSafiNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiNetwork>();
}

std::string ClearBgpBestpathVrfAfiSafiNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiNetwork::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiNetwork::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiNetwork::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpBestpathVrfAfiSafiNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiRdNetwork::ClearBgpBestpathVrfAfiSafiRdNetwork()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiRdNetwork::~ClearBgpBestpathVrfAfiSafiRdNetwork()
{
}

bool ClearBgpBestpathVrfAfiSafiRdNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiRdNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiRdNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiRdNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiRdNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiRdNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetwork>();
}

std::string ClearBgpBestpathVrfAfiSafiRdNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiRdNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiRdNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiRdNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiRdNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiRdNetwork::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-rd-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiRdNetwork::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiRdNetwork::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set
	|| network.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRdNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiRdNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiRdNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiRdNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiRdNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiRdNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiRdNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "rd" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiVrfNetwork::ClearBgpBestpathVrfAfiSafiVrfNetwork()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetwork::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiVrfNetwork::~ClearBgpBestpathVrfAfiSafiVrfNetwork()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetwork::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf-network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiVrfNetwork::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetwork::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetwork::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfNetwork::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfNetwork::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiVrfNetwork::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetwork::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetwork>();
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetwork::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetwork::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiVrfNetwork::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiVrfNetwork::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"},
    network{YType::str, "network"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-vrf-network"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set
	|| network.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(network.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf-network/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiVrfNetwork::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name" || name == "network")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter)
	|| ydk::is_set(ipv6_netmask.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.yfilter)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6Netmask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr" || name == "ipv6-netmask")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6Addr::ClearBgpBestpathVrfAfiSafiIpv6Addr()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Addr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6Addr::~ClearBgpBestpathVrfAfiSafiIpv6Addr()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Addr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv6Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Addr::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Addr>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Addr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Addr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6Addr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv6Addr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv6Addr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-addr")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6Prefix::ClearBgpBestpathVrfAfiSafiIpv6Prefix()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6Prefix::~ClearBgpBestpathVrfAfiSafiIpv6Prefix()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Prefix::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6Prefix>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiIpv6Prefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiIpv6Prefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "ipv6-prefix")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiRd::ClearBgpBestpathVrfAfiSafiRd()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiRd::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiRd::~ClearBgpBestpathVrfAfiSafiRd()
{
}

bool ClearBgpBestpathVrfAfiSafiRd::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiRd::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiRd::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiRd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRd::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiRd>();
}

std::string ClearBgpBestpathVrfAfiSafiRd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiRd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiRd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiRd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiRd::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-rd"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiRd::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiRd::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRd::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(rd.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiRd::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiRd::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiRd::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRd::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRd::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiRd::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiRd::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiRd::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "rd")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiVrf::ClearBgpBestpathVrfAfiSafiVrf()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiVrf::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiVrf::~ClearBgpBestpathVrfAfiSafiVrf()
{
}

bool ClearBgpBestpathVrfAfiSafiVrf::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiVrf::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiVrf::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafiVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrf::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiVrf>();
}

std::string ClearBgpBestpathVrfAfiSafiVrf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiVrf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiVrf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafiVrf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafiVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafiVrf::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafiVrf::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiVrf::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrf::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafiVrf::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafiVrf::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafiVrf::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrf::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrf::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrf::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafiVrf::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
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

bool ClearBgpBestpathVrfAfiSafiVrf::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name" || name == "vrf-name")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafi::ClearBgpBestpathVrfAfiSafi()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafi::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafi::~ClearBgpBestpathVrfAfiSafi()
{
}

bool ClearBgpBestpathVrfAfiSafi::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafi::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafi::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpBestpathVrfAfiSafi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafi::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafi>();
}

std::string ClearBgpBestpathVrfAfiSafi::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafi::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafi::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpBestpathVrfAfiSafi::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpBestpathVrfAfiSafi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpBestpathVrfAfiSafi::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpBestpathVrfAfiSafi::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafi::Input::has_data() const
{
    return vrf_all.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafi::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_all.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpBestpathVrfAfiSafi::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpBestpathVrfAfiSafi::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpBestpathVrfAfiSafi::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.yfilter)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafi::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafi::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafi::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void ClearBgpBestpathVrfAfiSafi::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-all")
    {
        vrf_all.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
}

bool ClearBgpBestpathVrfAfiSafi::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-all" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpExternalGraceful::ClearBgpExternalGraceful()
{

    yang_name = "clear-bgp-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpExternalGraceful::~ClearBgpExternalGraceful()
{
}

bool ClearBgpExternalGraceful::has_data() const
{
    return false;
}

bool ClearBgpExternalGraceful::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpExternalGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-external-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpExternalGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpExternalGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpExternalGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpExternalGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpExternalGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpExternalGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpExternalGraceful>();
}

std::string ClearBgpExternalGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpExternalGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpExternalGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpExternalGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpExternalGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpExternal::ClearBgpExternal()
{

    yang_name = "clear-bgp-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpExternal::~ClearBgpExternal()
{
}

bool ClearBgpExternal::has_data() const
{
    return false;
}

bool ClearBgpExternal::has_operation() const
{
    return is_set(yfilter);
}

std::string ClearBgpExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpExternal::clone_ptr() const
{
    return std::make_shared<ClearBgpExternal>();
}

std::string ClearBgpExternal::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpExternal::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpExternal::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpExternal::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

ClearBgpInstanceAllGraceful::ClearBgpInstanceAllGraceful()
    :
    input(std::make_shared<ClearBgpInstanceAllGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAllGraceful::~ClearBgpInstanceAllGraceful()
{
}

bool ClearBgpInstanceAllGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAllGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAllGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAllGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAllGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAllGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAllGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAllGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAllGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAllGraceful>();
}

std::string ClearBgpInstanceAllGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAllGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAllGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAllGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAllGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAllGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-all-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAllGraceful::Input::~Input()
{
}

bool ClearBgpInstanceAllGraceful::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAllGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceAllGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAllGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAllGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAllGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAllGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAllGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAllGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceAll::ClearBgpInstanceAll()
    :
    input(std::make_shared<ClearBgpInstanceAll::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAll::~ClearBgpInstanceAll()
{
}

bool ClearBgpInstanceAll::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAll::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAll::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAll::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAll>();
}

std::string ClearBgpInstanceAll::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAll::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAll::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAll::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAll::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-all"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAll::Input::~Input()
{
}

bool ClearBgpInstanceAll::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAll::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter);
}

std::string ClearBgpInstanceAll::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAll::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAll::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAll::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAll::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAll::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAll::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAll::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name")
        return true;
    return false;
}

ClearBgpInstanceIpAddrGraceful::ClearBgpInstanceIpAddrGraceful()
    :
    input(std::make_shared<ClearBgpInstanceIpAddrGraceful::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceIpAddrGraceful::~ClearBgpInstanceIpAddrGraceful()
{
}

bool ClearBgpInstanceIpAddrGraceful::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddrGraceful::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddrGraceful::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-graceful";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddrGraceful::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGraceful::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddrGraceful::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrGraceful::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddrGraceful::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceIpAddrGraceful::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGraceful::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddrGraceful>();
}

std::string ClearBgpInstanceIpAddrGraceful::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddrGraceful::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddrGraceful::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceIpAddrGraceful::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceIpAddrGraceful::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceIpAddrGraceful::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr-graceful"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceIpAddrGraceful::Input::~Input()
{
}

bool ClearBgpInstanceIpAddrGraceful::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrGraceful::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceIpAddrGraceful::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-graceful/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceIpAddrGraceful::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddrGraceful::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGraceful::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrGraceful::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddrGraceful::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceIpAddrGraceful::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceIpAddrGraceful::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceIpAddrLongLivedStale::ClearBgpInstanceIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpInstanceIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceIpAddrLongLivedStale::~ClearBgpInstanceIpAddrLongLivedStale()
{
}

bool ClearBgpInstanceIpAddrLongLivedStale::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddrLongLivedStale>();
}

std::string ClearBgpInstanceIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceIpAddrLongLivedStale::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpInstanceIpAddrLongLivedStale::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceIpAddr::ClearBgpInstanceIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceIpAddr::~ClearBgpInstanceIpAddr()
{
}

bool ClearBgpInstanceIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddr>();
}

std::string ClearBgpInstanceIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::ClearBgpInstanceAfiSafiAllSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::~ClearBgpInstanceAfiSafiAllSoftInPrefixFilter()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilter>();
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftIn::ClearBgpInstanceAfiSafiAllSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftIn::~ClearBgpInstanceAfiSafiAllSoftIn()
{
}

bool ClearBgpInstanceAfiSafiAllSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAllSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftIn>();
}

std::string ClearBgpInstanceAfiSafiAllSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAllSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAllSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiAllSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAllSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiAllSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiAllSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftOut::ClearBgpInstanceAfiSafiAllSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftOut::~ClearBgpInstanceAfiSafiAllSoftOut()
{
}

bool ClearBgpInstanceAfiSafiAllSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAllSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftOut>();
}

std::string ClearBgpInstanceAfiSafiAllSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAllSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAllSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiAllSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAllSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiAllSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiAllSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoft::ClearBgpInstanceAfiSafiAllSoft()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoft::~ClearBgpInstanceAfiSafiAllSoft()
{
}

bool ClearBgpInstanceAfiSafiAllSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAllSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoft>();
}

std::string ClearBgpInstanceAfiSafiAllSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAllSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAllSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAllSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAllSoft::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoft::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiAllSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAllSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAllSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiAllSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiAllSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStale::ClearBgpInstanceAfiSafiIpAddrLongLivedStale()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStale::~ClearBgpInstanceAfiSafiIpAddrLongLivedStale()
{
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-long-lived-stale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStale>();
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-long-lived-stale"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStale::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftIn::ClearBgpInstanceAfiSafiIpAddrSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftIn::~ClearBgpInstanceAfiSafiIpAddrSoftIn()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiIpAddrSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftIn>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiIpAddrSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiIpAddrSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftOut::ClearBgpInstanceAfiSafiIpAddrSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftOut::~ClearBgpInstanceAfiSafiIpAddrSoftOut()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiIpAddrSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOut>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiIpAddrSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiIpAddrSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoft::ClearBgpInstanceAfiSafiIpAddrSoft()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoft::~ClearBgpInstanceAfiSafiIpAddrSoft()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiIpAddrSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoft>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiIpAddrSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiIpAddrSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiIpAddrSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiIpAddrSoft::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoft::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiIpAddrSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiIpAddrSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiIpAddrSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::ClearBgpInstanceAfiSafiAsSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::~ClearBgpInstanceAfiSafiAsSoftInPrefixFilter()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilter>();
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftIn::ClearBgpInstanceAfiSafiAsSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftIn::~ClearBgpInstanceAfiSafiAsSoftIn()
{
}

bool ClearBgpInstanceAfiSafiAsSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAsSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftIn>();
}

std::string ClearBgpInstanceAfiSafiAsSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAsSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAsSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAfiSafiAsSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAsSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiAsSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiAsSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftOut::ClearBgpInstanceAfiSafiAsSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftOut::~ClearBgpInstanceAfiSafiAsSoftOut()
{
}

bool ClearBgpInstanceAfiSafiAsSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAsSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftOut>();
}

std::string ClearBgpInstanceAfiSafiAsSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAsSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAsSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAfiSafiAsSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAsSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiAsSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiAsSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoft::ClearBgpInstanceAfiSafiAsSoft()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoft::~ClearBgpInstanceAfiSafiAsSoft()
{
}

bool ClearBgpInstanceAfiSafiAsSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiAsSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoft>();
}

std::string ClearBgpInstanceAfiSafiAsSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiAsSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiAsSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiAsSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiAsSoft::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoft::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string ClearBgpInstanceAfiSafiAsSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiAsSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiAsSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiAsSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiAsSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "as-number")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpPrefix::ClearBgpInstanceAfiSafiDampeningIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpPrefix::~ClearBgpInstanceAfiSafiDampeningIpPrefix()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiDampeningIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefix>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiDampeningIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiDampeningIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampening::ClearBgpInstanceAfiSafiDampening()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampening::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampening::~ClearBgpInstanceAfiSafiDampening()
{
}

bool ClearBgpInstanceAfiSafiDampening::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampening::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampening::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampening::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampening>();
}

std::string ClearBgpInstanceAfiSafiDampening::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampening::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampening::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiDampening::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiDampening::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiDampening::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampening::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiDampening::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiDampening::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiDampening::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiDampening::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampening::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampening::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampening::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiDampening::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiDampening::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in-prefix-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-in-prefix-filter"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilter::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftIn::ClearBgpInstanceAfiSafiExternalSoftIn()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftIn::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftIn::~ClearBgpInstanceAfiSafiExternalSoftIn()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftIn::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftIn::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftIn::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiExternalSoftIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftIn::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftIn>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftIn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftIn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftIn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiExternalSoftIn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiExternalSoftIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftIn::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-in"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftIn::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftIn::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftIn::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiExternalSoftIn::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiExternalSoftIn::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftIn::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftIn::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftIn::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftIn::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiExternalSoftIn::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiExternalSoftIn::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftOut::ClearBgpInstanceAfiSafiExternalSoftOut()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOut::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftOut::~ClearBgpInstanceAfiSafiExternalSoftOut()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftOut::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftOut::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOut::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiExternalSoftOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOut::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOut>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftOut::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftOut::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftOut::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiExternalSoftOut::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiExternalSoftOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoftOut::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-out"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoftOut::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftOut::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftOut::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiExternalSoftOut::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-out/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiExternalSoftOut::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoftOut::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOut::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftOut::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftOut::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiExternalSoftOut::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiExternalSoftOut::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoft::ClearBgpInstanceAfiSafiExternalSoft()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoft::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoft::~ClearBgpInstanceAfiSafiExternalSoft()
{
}

bool ClearBgpInstanceAfiSafiExternalSoft::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoft::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoft::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoft::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoft::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoft::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoft::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoft::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiExternalSoft::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoft::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoft>();
}

std::string ClearBgpInstanceAfiSafiExternalSoft::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoft::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoft::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiExternalSoft::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiExternalSoft::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiExternalSoft::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiExternalSoft::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoft::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoft::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiExternalSoft::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiExternalSoft::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiExternalSoft::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoft::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoft::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoft::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiExternalSoft::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiExternalSoft::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(ipv4_mask.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.yfilter)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
        ipv4_mask.value_namespace = name_space;
        ipv4_mask.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "ipv4-mask")
    {
        ipv4_mask.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4Mask::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr" || name == "ipv4-mask")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::ClearBgpInstanceAfiSafiFlapStatisticsIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddr()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddr>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-prefix"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_prefix.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-prefix/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.yfilter)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefix::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-prefix")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexp::ClearBgpInstanceAfiSafiFlapStatisticsRegexp()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexp::~ClearBgpInstanceAfiSafiFlapStatisticsRegexp()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexp>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-regexp"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(regexp_pattern.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-regexp/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.yfilter)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
        regexp_pattern.value_namespace = name_space;
        regexp_pattern.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexp::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "regexp-pattern")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-route-policy"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(route_policy_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.yfilter)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
        route_policy_name.value_namespace = name_space;
        route_policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicy::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "route-policy-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatistics::ClearBgpInstanceAfiSafiFlapStatistics()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatistics::~ClearBgpInstanceAfiSafiFlapStatistics()
{
}

bool ClearBgpInstanceAfiSafiFlapStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiFlapStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatistics>();
}

std::string ClearBgpInstanceAfiSafiFlapStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiFlapStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiFlapStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiFlapStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiFlapStatistics::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiFlapStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiFlapStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiFlapStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiFlapStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiFlapStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::ClearBgpInstanceAfiSafiNexthopPerformanceStatistics()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::~ClearBgpInstanceAfiSafiNexthopPerformanceStatistics()
{
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatistics>();
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-nexthop-performance-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatistics::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr()
{
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-registration-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr>();
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-nexthop-registration-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiSelfOriginated::ClearBgpInstanceAfiSafiSelfOriginated()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiSelfOriginated::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiSelfOriginated::~ClearBgpInstanceAfiSafiSelfOriginated()
{
}

bool ClearBgpInstanceAfiSafiSelfOriginated::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiSelfOriginated::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiSelfOriginated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-self-originated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiSelfOriginated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiSelfOriginated::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiSelfOriginated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiSelfOriginated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiSelfOriginated::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginated::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiSelfOriginated>();
}

std::string ClearBgpInstanceAfiSafiSelfOriginated::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiSelfOriginated::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiSelfOriginated::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiSelfOriginated::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiSelfOriginated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiSelfOriginated::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-self-originated"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiSelfOriginated::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiSelfOriginated::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiSelfOriginated::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiSelfOriginated::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-self-originated/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiSelfOriginated::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiSelfOriginated::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginated::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiSelfOriginated::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiSelfOriginated::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiSelfOriginated::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiSelfOriginated::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiShutdown::ClearBgpInstanceAfiSafiShutdown()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiShutdown::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiShutdown::~ClearBgpInstanceAfiSafiShutdown()
{
}

bool ClearBgpInstanceAfiSafiShutdown::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiShutdown::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiShutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiShutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiShutdown::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiShutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiShutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiShutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdown::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiShutdown>();
}

std::string ClearBgpInstanceAfiSafiShutdown::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiShutdown::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiShutdown::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiShutdown::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiShutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiShutdown::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-shutdown"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiShutdown::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiShutdown::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiShutdown::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiShutdown::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-shutdown/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiShutdown::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiShutdown::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdown::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiShutdown::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiShutdown::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiShutdown::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiShutdown::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-address-family-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::ClearBgpInstanceAfiSafiUpdateOutqAddressFamily()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamily()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamily>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-address-family"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamily::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefresh::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(ip_addr.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::set_filter(const std::string & value_path, YFilter yfilter)
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

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddr::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "ip-addr")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
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

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    sub_group{YType::str, "sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| sub_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(sub_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.yfilter)) leaf_name_data.push_back(sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
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

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group" || name == "sub-group")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
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

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    refresh_sub_group{YType::str, "refresh-sub-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set
	|| refresh_sub_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter)
	|| ydk::is_set(refresh_sub_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.yfilter)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
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

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group" || name == "refresh-sub-group")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-update-parent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-update-parent"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParent::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input")
        return true;
    return false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{

    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::has_data() const
{
    return instance_name.is_set
	|| afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(afi_safi_name.yfilter)
	|| ydk::is_set(update_group.yfilter);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (afi_safi_name.is_set || is_set(afi_safi_name.yfilter)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.yfilter)) leaf_name_data.push_back(update_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "update-group")
    {
        update_group = value;
        update_group.value_namespace = name_space;
        update_group.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "afi-safi-name")
    {
        afi_safi_name.yfilter = yfilter;
    }
    if(value_path == "update-group")
    {
        update_group.yfilter = yfilter;
    }
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroup::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "afi-safi-name" || name == "update-group")
        return true;
    return false;
}


}
}

