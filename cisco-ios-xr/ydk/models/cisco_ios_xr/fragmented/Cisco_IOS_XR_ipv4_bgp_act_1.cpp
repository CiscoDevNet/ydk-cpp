
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::ClearBgpBestpathAfiSafiSrPolicyPrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::~ClearBgpBestpathAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiSrPolicyPrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-sr-policy-prefix";
}

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-sr-policy-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.operation)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix = value;
    }
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix";
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::ClearBgpBestpathAfiSafiRdIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::~ClearBgpBestpathAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-prefix";
}

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix";
}

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.operation)) leaf_name_data.push_back(mp2mp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "mp2mp")
    {
        mp2mp = value;
    }
}

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::~ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix";
}

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::ClearBgpBestpathAfiSafiRdIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::~ClearBgpBestpathAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr";
}

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::ClearBgpBestpathAfiSafiRdIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::~ClearBgpBestpathAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv6PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-prefix";
}

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::ClearBgpBestpathAfiSafiVrfIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::~ClearBgpBestpathAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::~ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix";
}

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::ClearBgpBestpathVrfIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::~ClearBgpBestpathVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpAddrIpNetmaskRpc>();
}

std::string ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-addr-ip-netmask";
}

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfIpAddrRpc::ClearBgpBestpathVrfIpAddrRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpAddrRpc::~ClearBgpBestpathVrfIpAddrRpc()
{
}

bool ClearBgpBestpathVrfIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpAddrRpc>();
}

std::string ClearBgpBestpathVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-addr";
}

ClearBgpBestpathVrfIpAddrRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfIpPrefixRpc::ClearBgpBestpathVrfIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpPrefixRpc::~ClearBgpBestpathVrfIpPrefixRpc()
{
}

bool ClearBgpBestpathVrfIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfIpPrefixRpc>();
}

std::string ClearBgpBestpathVrfIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfIpPrefixRpc::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-ip-prefix";
}

ClearBgpBestpathVrfIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfIpPrefixRpc::Input::has_data() const
{
    return ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::~ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix";
}

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::ClearBgpBestpathVrfAfiSafiIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::~ClearBgpBestpathVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiNetworkRpc::ClearBgpBestpathVrfAfiSafiNetworkRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiNetworkRpc::~ClearBgpBestpathVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-network";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiNetworkRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-network";
}

ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::ClearBgpBestpathVrfAfiSafiRdNetworkRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::~ClearBgpBestpathVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiRdNetworkRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-rd-network";
}

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiRdNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::ClearBgpBestpathVrfAfiSafiVrfNetworkRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::~ClearBgpBestpathVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-vrf-network";
}

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "ipv6-netmask")
    {
        ipv6_netmask = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::ClearBgpBestpathVrfAfiSafiIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::~ClearBgpBestpathVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::~ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix";
}

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiRdRpc::ClearBgpBestpathVrfAfiSafiRdRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiRdRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRdRpc::~ClearBgpBestpathVrfAfiSafiRdRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiRdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiRdRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiRdRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-rd";
}

ClearBgpBestpathVrfAfiSafiRdRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiRdRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpBestpathVrfAfiSafiVrfRpc::ClearBgpBestpathVrfAfiSafiVrfRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiVrfRpc::~ClearBgpBestpathVrfAfiSafiVrfRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiVrfRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiVrfRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi-vrf";
}

ClearBgpBestpathVrfAfiSafiVrfRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathVrfAfiSafiVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiVrfRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpBestpathVrfAfiSafiRpc::ClearBgpBestpathVrfAfiSafiRpc()
    :
    input(std::make_shared<ClearBgpBestpathVrfAfiSafiRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRpc::~ClearBgpBestpathVrfAfiSafiRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpBestpathVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpBestpathVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpBestpathVrfAfiSafiRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpBestpathVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathVrfAfiSafiRpc>();
}

std::string ClearBgpBestpathVrfAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathVrfAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathVrfAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathVrfAfiSafiRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-bestpath-vrf-afi-safi";
}

ClearBgpBestpathVrfAfiSafiRpc::Input::~Input()
{
}

bool ClearBgpBestpathVrfAfiSafiRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpBestpathVrfAfiSafiRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpBestpathVrfAfiSafiRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpBestpathVrfAfiSafiRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpExternalGracefulRpc::ClearBgpExternalGracefulRpc()
{
    yang_name = "clear-bgp-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpExternalGracefulRpc::~ClearBgpExternalGracefulRpc()
{
}

bool ClearBgpExternalGracefulRpc::has_data() const
{
    return false;
}

bool ClearBgpExternalGracefulRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-external-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpExternalGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpExternalGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpExternalGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpExternalGracefulRpc>();
}

std::string ClearBgpExternalGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpExternalGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpExternalGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpExternalRpc::ClearBgpExternalRpc()
{
    yang_name = "clear-bgp-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpExternalRpc::~ClearBgpExternalRpc()
{
}

bool ClearBgpExternalRpc::has_data() const
{
    return false;
}

bool ClearBgpExternalRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-external";

    return path_buffer.str();

}

const EntityPath ClearBgpExternalRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpExternalRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpExternalRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpExternalRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpExternalRpc>();
}

std::string ClearBgpExternalRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpExternalRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpExternalRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAllGracefulRpc::ClearBgpInstanceAllGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceAllGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAllGracefulRpc::~ClearBgpInstanceAllGracefulRpc()
{
}

bool ClearBgpInstanceAllGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAllGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAllGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAllGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAllGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAllGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAllGracefulRpc>();
}

std::string ClearBgpInstanceAllGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAllGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAllGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAllGracefulRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-all-graceful";
}

ClearBgpInstanceAllGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceAllGracefulRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAllGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAllGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAllGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAllGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAllRpc::ClearBgpInstanceAllRpc()
    :
    input(std::make_shared<ClearBgpInstanceAllRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAllRpc::~ClearBgpInstanceAllRpc()
{
}

bool ClearBgpInstanceAllRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAllRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAllRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAllRpc>();
}

std::string ClearBgpInstanceAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAllRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-all";
}

ClearBgpInstanceAllRpc::Input::~Input()
{
}

bool ClearBgpInstanceAllRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAllRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAllRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAllRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAllRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAllRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceIpAddrGracefulRpc::ClearBgpInstanceIpAddrGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceIpAddrGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrGracefulRpc::~ClearBgpInstanceIpAddrGracefulRpc()
{
}

bool ClearBgpInstanceIpAddrGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddrGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddrGracefulRpc>();
}

std::string ClearBgpInstanceIpAddrGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddrGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddrGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceIpAddrGracefulRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr-graceful";
}

ClearBgpInstanceIpAddrGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceIpAddrGracefulRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddrGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceIpAddrLongLivedStaleRpc::ClearBgpInstanceIpAddrLongLivedStaleRpc()
    :
    input(std::make_shared<ClearBgpInstanceIpAddrLongLivedStaleRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrLongLivedStaleRpc::~ClearBgpInstanceIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-long-lived-stale";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddrLongLivedStaleRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrLongLivedStaleRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpInstanceIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr-long-lived-stale";
}

ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::~Input()
{
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-long-lived-stale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddrLongLivedStaleRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceIpAddrRpc::ClearBgpInstanceIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrRpc::~ClearBgpInstanceIpAddrRpc()
{
}

bool ClearBgpInstanceIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceIpAddrRpc>();
}

std::string ClearBgpInstanceIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-ip-addr";
}

ClearBgpInstanceIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-in-prefix-filter";
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAllSoftInRpc::ClearBgpInstanceAfiSafiAllSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftInRpc::~ClearBgpInstanceAfiSafiAllSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftInRpc>();
}

std::string ClearBgpInstanceAfiSafiAllSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAllSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-in";
}

ClearBgpInstanceAfiSafiAllSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAllSoftOutRpc::ClearBgpInstanceAfiSafiAllSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftOutRpc::~ClearBgpInstanceAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftOutRpc>();
}

std::string ClearBgpInstanceAfiSafiAllSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft-out";
}

ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAllSoftRpc::ClearBgpInstanceAfiSafiAllSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAllSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftRpc::~ClearBgpInstanceAfiSafiAllSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAllSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAllSoftRpc>();
}

std::string ClearBgpInstanceAfiSafiAllSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAllSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAllSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAllSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-all-soft";
}

ClearBgpInstanceAfiSafiAllSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAllSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAllSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-long-lived-stale";
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-long-lived-stale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter";
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::ClearBgpInstanceAfiSafiIpAddrSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::~ClearBgpInstanceAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftInRpc>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in";
}

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::ClearBgpInstanceAfiSafiIpAddrSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::~ClearBgpInstanceAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftOutRpc>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft-out";
}

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiIpAddrSoftRpc::ClearBgpInstanceAfiSafiIpAddrSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftRpc::~ClearBgpInstanceAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiIpAddrSoftRpc>();
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-ip-addr-soft";
}

ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-in-prefix-filter";
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAsSoftInRpc::ClearBgpInstanceAfiSafiAsSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftInRpc::~ClearBgpInstanceAfiSafiAsSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftInRpc>();
}

std::string ClearBgpInstanceAfiSafiAsSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAsSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-in";
}

ClearBgpInstanceAfiSafiAsSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAsSoftOutRpc::ClearBgpInstanceAfiSafiAsSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftOutRpc::~ClearBgpInstanceAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftOutRpc>();
}

std::string ClearBgpInstanceAfiSafiAsSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft-out";
}

ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiAsSoftRpc::ClearBgpInstanceAfiSafiAsSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiAsSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftRpc::~ClearBgpInstanceAfiSafiAsSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiAsSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiAsSoftRpc>();
}

std::string ClearBgpInstanceAfiSafiAsSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiAsSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiAsSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiAsSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-as-soft";
}

ClearBgpInstanceAfiSafiAsSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiAsSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiAsSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::ClearBgpInstanceAfiSafiDampeningIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpPrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpPrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ip-prefix";
}

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

ClearBgpInstanceAfiSafiDampeningRpc::ClearBgpInstanceAfiSafiDampeningRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningRpc::~ClearBgpInstanceAfiSafiDampeningRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningRpc>();
}

std::string ClearBgpInstanceAfiSafiDampeningRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiDampeningRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening";
}

ClearBgpInstanceAfiSafiDampeningRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-in-prefix-filter";
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in-prefix-filter/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiExternalSoftInRpc::ClearBgpInstanceAfiSafiExternalSoftInRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftInRpc::~ClearBgpInstanceAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftInRpc>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-in";
}

ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiExternalSoftOutRpc::ClearBgpInstanceAfiSafiExternalSoftOutRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftOutRpc::~ClearBgpInstanceAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-out";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftOutRpc>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft-out";
}

ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-out/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftOutRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiExternalSoftRpc::ClearBgpInstanceAfiSafiExternalSoftRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiExternalSoftRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftRpc::~ClearBgpInstanceAfiSafiExternalSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiExternalSoftRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiExternalSoftRpc>();
}

std::string ClearBgpInstanceAfiSafiExternalSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiExternalSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiExternalSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiExternalSoftRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-external-soft";
}

ClearBgpInstanceAfiSafiExternalSoftRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiExternalSoftRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiExternalSoftRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-prefix";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-regexp";
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(regexp_pattern.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-regexp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.operation)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-route-policy";
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-route-policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

ClearBgpInstanceAfiSafiFlapStatisticsRpc::ClearBgpInstanceAfiSafiFlapStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics";
}

ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-nexthop-performance-statistics";
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-performance-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-nexthop-registration-ip-addr";
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-registration-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiSelfOriginatedRpc::ClearBgpInstanceAfiSafiSelfOriginatedRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiSelfOriginatedRpc::~ClearBgpInstanceAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-self-originated";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginatedRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiSelfOriginatedRpc>();
}

std::string ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-self-originated";
}

ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-self-originated/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiSelfOriginatedRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiShutdownRpc::ClearBgpInstanceAfiSafiShutdownRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiShutdownRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiShutdownRpc::~ClearBgpInstanceAfiSafiShutdownRpc()
{
}

bool ClearBgpInstanceAfiSafiShutdownRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-shutdown";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiShutdownRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiShutdownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiShutdownRpc>();
}

std::string ClearBgpInstanceAfiSafiShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiShutdownRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-shutdown";
}

ClearBgpInstanceAfiSafiShutdownRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiShutdownRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiShutdownRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiShutdownRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiShutdownRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-shutdown/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdownRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiShutdownRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiShutdownRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-address-family-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-address-family";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group-update-parent";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-update-outq-update-group";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}


}
}

