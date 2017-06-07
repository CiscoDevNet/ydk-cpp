
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_5.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpRpkiValidationIpv6Rpc::ClearBgpRpkiValidationIpv6Rpc()
{
    yang_name = "clear-bgp-rpki-validation-ipv6"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiValidationIpv6Rpc::~ClearBgpRpkiValidationIpv6Rpc()
{
}

bool ClearBgpRpkiValidationIpv6Rpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv6Rpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiValidationIpv6Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv6";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiValidationIpv6Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv6Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationIpv6Rpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationIpv6Rpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv6Rpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv6Rpc>();
}

std::string ClearBgpRpkiValidationIpv6Rpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv6Rpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv6Rpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiValidationRpc::ClearBgpRpkiValidationRpc()
{
    yang_name = "clear-bgp-rpki-validation"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiValidationRpc::~ClearBgpRpkiValidationRpc()
{
}

bool ClearBgpRpkiValidationRpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiValidationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation";

    return path_buffer.str();

}

const EntityPath ClearBgpRpkiValidationRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpRpkiValidationRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpRpkiValidationRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationRpc>();
}

std::string ClearBgpRpkiValidationRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpShutdownRpc::ClearBgpShutdownRpc()
{
    yang_name = "clear-bgp-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpShutdownRpc::~ClearBgpShutdownRpc()
{
}

bool ClearBgpShutdownRpc::has_data() const
{
    return false;
}

bool ClearBgpShutdownRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-shutdown";

    return path_buffer.str();

}

const EntityPath ClearBgpShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpShutdownRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpShutdownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpShutdownRpc>();
}

std::string ClearBgpShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpUpdateOutqAddressFamilyUpdateParentRpc()
{
    yang_name = "clear-bgp-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-address-family-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqAddressFamilyRpc::ClearBgpUpdateOutqAddressFamilyRpc()
{
    yang_name = "clear-bgp-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqAddressFamilyRpc::~ClearBgpUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpUpdateOutqAddressFamilyRpc::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-address-family";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqAddressFamilyRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpUpdateOutqNeighborIpAddrRefreshRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr-update-parent";
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpUpdateOutqNeighborIpAddrRpc::ClearBgpUpdateOutqNeighborIpAddrRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRpc::~ClearBgpUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqNeighborIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-neighbor-ip-addr";
}

ClearBgpUpdateOutqNeighborIpAddrRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqNeighborIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqNeighborIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpUpdateOutqProcessRpc::ClearBgpUpdateOutqProcessRpc()
{
    yang_name = "clear-bgp-update-outq-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqProcessRpc::~ClearBgpUpdateOutqProcessRpc()
{
}

bool ClearBgpUpdateOutqProcessRpc::has_data() const
{
    return false;
}

bool ClearBgpUpdateOutqProcessRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpUpdateOutqProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-process";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqProcessRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqProcessRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqProcessRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqProcessRpc>();
}

std::string ClearBgpUpdateOutqProcessRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqProcessRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqProcessRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::Input()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-update-parent";
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::Input()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::Input()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::Input()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpUpdateOutqUpdateGroupUpdateParentRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-update-parent";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::Input()
    :
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group-update-parent";
}

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-update-parent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpUpdateOutqUpdateGroupRpc::ClearBgpUpdateOutqUpdateGroupRpc()
    :
    input(std::make_shared<ClearBgpUpdateOutqUpdateGroupRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupRpc::~ClearBgpUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpUpdateOutqUpdateGroupRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpUpdateOutqUpdateGroupRpc::Input::Input()
    :
    update_group{YType::str, "update-group"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-update-outq-update-group";
}

ClearBgpUpdateOutqUpdateGroupRpc::Input::~Input()
{
}

bool ClearBgpUpdateOutqUpdateGroupRpc::Input::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpUpdateOutqUpdateGroupRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpUpdateOutqUpdateGroupRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpUpdateOutqUpdateGroupRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

ClearBgpVersionIpAddrIpNetmaskRpc::ClearBgpVersionIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpAddrIpNetmaskRpc::~ClearBgpVersionIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpAddrIpNetmaskRpc>();
}

std::string ClearBgpVersionIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionIpAddrIpNetmaskRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-addr-ip-netmask";
}

ClearBgpVersionIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
}

ClearBgpVersionIpAddrRpc::ClearBgpVersionIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVersionIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpAddrRpc::~ClearBgpVersionIpAddrRpc()
{
}

bool ClearBgpVersionIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpAddrRpc>();
}

std::string ClearBgpVersionIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-addr";
}

ClearBgpVersionIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVersionIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpVersionIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpVersionIpPrefixRpc::ClearBgpVersionIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpPrefixRpc::~ClearBgpVersionIpPrefixRpc()
{
}

bool ClearBgpVersionIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionIpPrefixRpc>();
}

std::string ClearBgpVersionIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionIpPrefixRpc::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-ip-prefix";
}

ClearBgpVersionIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionIpPrefixRpc::Input::has_data() const
{
    return ip_prefix.is_set;
}

bool ClearBgpVersionIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-addr-ip-netmask";
}

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
}

ClearBgpVersionAfiSafiIpAddrRpc::ClearBgpVersionAfiSafiIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpAddrRpc::~ClearBgpVersionAfiSafiIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpAddrRpc>();
}

std::string ClearBgpVersionAfiSafiIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-addr";
}

ClearBgpVersionAfiSafiIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpVersionAfiSafiIpPrefixRpc::ClearBgpVersionAfiSafiIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpPrefixRpc::~ClearBgpVersionAfiSafiIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpPrefixRpc>();
}

std::string ClearBgpVersionAfiSafiIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ip-prefix";
}

ClearBgpVersionAfiSafiIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::~ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ip-prefix";
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask";
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpVersionAfiSafiRdIpAddrRpc::ClearBgpVersionAfiSafiRdIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpAddrRpc::~ClearBgpVersionAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpAddrRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-addr";
}

ClearBgpVersionAfiSafiRdIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpVersionAfiSafiRdIpPrefixRpc::ClearBgpVersionAfiSafiRdIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpPrefixRpc::~ClearBgpVersionAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpPrefixRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ip-prefix";
}

ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask";
}

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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
}

ClearBgpVersionAfiSafiIpv4AddrRpc::ClearBgpVersionAfiSafiIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4AddrRpc::~ClearBgpVersionAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpVersionAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-addr";
}

ClearBgpVersionAfiSafiIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
}

ClearBgpVersionAfiSafiIpv4PrefixRpc::ClearBgpVersionAfiSafiIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4PrefixRpc::~ClearBgpVersionAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-prefix";
}

ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

ClearBgpVersionAfiSafiRdIpv4AddrRpc::ClearBgpVersionAfiSafiRdIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4AddrRpc::~ClearBgpVersionAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-addr";
}

ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::ClearBgpVersionAfiSafiVrfIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::~ClearBgpVersionAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr";
}

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpVersionAfiSafiNetworkRpc::ClearBgpVersionAfiSafiNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiNetworkRpc::~ClearBgpVersionAfiSafiNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiNetworkRpc>();
}

std::string ClearBgpVersionAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-network";
}

ClearBgpVersionAfiSafiNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpVersionAfiSafiNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpVersionAfiSafiNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

ClearBgpVersionAfiSafiRdNetworkRpc::ClearBgpVersionAfiSafiRdNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdNetworkRpc::~ClearBgpVersionAfiSafiRdNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdNetworkRpc>();
}

std::string ClearBgpVersionAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-network";
}

ClearBgpVersionAfiSafiRdNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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
}

ClearBgpVersionAfiSafiVrfNetworkRpc::ClearBgpVersionAfiSafiVrfNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfNetworkRpc::~ClearBgpVersionAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpVersionAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-network";
}

ClearBgpVersionAfiSafiVrfNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::ClearBgpVersionAfiSafiRtConstraintNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::~ClearBgpVersionAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRtConstraintNetworkRpc>();
}

std::string ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rt-constraint-network";
}

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rt-constraint-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.operation)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRtConstraintNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network = value;
    }
}

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::~ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc>();
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv4-tunnel-network";
}

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.operation)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network = value;
    }
}

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask";
}

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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
}

ClearBgpVersionAfiSafiIpv6AddrRpc::ClearBgpVersionAfiSafiIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6AddrRpc::~ClearBgpVersionAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpVersionAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-addr";
}

ClearBgpVersionAfiSafiIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

ClearBgpVersionAfiSafiIpv6PrefixRpc::ClearBgpVersionAfiSafiIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6PrefixRpc::~ClearBgpVersionAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-ipv6-prefix";
}

ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

ClearBgpVersionAfiSafiRdRpc::ClearBgpVersionAfiSafiRdRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdRpc::~ClearBgpVersionAfiSafiRdRpc()
{
}

bool ClearBgpVersionAfiSafiRdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdRpc>();
}

std::string ClearBgpVersionAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd";
}

ClearBgpVersionAfiSafiRdRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

ClearBgpVersionAfiSafiVrfRpc::ClearBgpVersionAfiSafiVrfRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfRpc::~ClearBgpVersionAfiSafiVrfRpc()
{
}

bool ClearBgpVersionAfiSafiVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfRpc>();
}

std::string ClearBgpVersionAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf";
}

ClearBgpVersionAfiSafiVrfRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ClearBgpVersionAfiSafiRpc::ClearBgpVersionAfiSafiRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRpc::~ClearBgpVersionAfiSafiRpc()
{
}

bool ClearBgpVersionAfiSafiRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRpc>();
}

std::string ClearBgpVersionAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi";
}

ClearBgpVersionAfiSafiRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRpc::Input::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpVersionAfiSafiRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpVersionAfiSafiRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::ClearBgpVersionAfiSafiSrPolicyPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::~ClearBgpVersionAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiSrPolicyPrefixRpc>();
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-sr-policy-prefix";
}

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-sr-policy-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiSrPolicyPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix";
}

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::ClearBgpVersionAfiSafiRdIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::~ClearBgpVersionAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-prefix";
}

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-mp2mp-ipv4-prefix";
}

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::ClearBgpVersionAfiSafiVrfIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::~ClearBgpVersionAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-prefix";
}

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask";
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask";
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask";
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6AddrRpc::ClearBgpVersionAfiSafiRdIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6AddrRpc::~ClearBgpVersionAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6AddrRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-addr";
}

ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::ClearBgpVersionAfiSafiRdIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::~ClearBgpVersionAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiRdIpv6PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-rd-ipv6-prefix";
}

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::ClearBgpVersionAfiSafiVrfIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::~ClearBgpVersionAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6AddrRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr";
}

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::ClearBgpVersionAfiSafiVrfIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::~ClearBgpVersionAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionAfiSafiVrfIpv6PrefixRpc>();
}

std::string ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-afi-safi-vrf-ipv6-prefix";
}

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpAddrIpNetmaskRpc::ClearBgpVersionVrfIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpAddrIpNetmaskRpc::~ClearBgpVersionVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpAddrIpNetmaskRpc>();
}

std::string ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-addr-ip-netmask";
}

ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr-ip-netmask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpAddrRpc::ClearBgpVersionVrfIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpAddrRpc::~ClearBgpVersionVrfIpAddrRpc()
{
}

bool ClearBgpVersionVrfIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpAddrRpc>();
}

std::string ClearBgpVersionVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-addr";
}

ClearBgpVersionVrfIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpPrefixRpc::ClearBgpVersionVrfIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpPrefixRpc::~ClearBgpVersionVrfIpPrefixRpc()
{
}

bool ClearBgpVersionVrfIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfIpPrefixRpc>();
}

std::string ClearBgpVersionVrfIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfIpPrefixRpc::Input::Input()
    :
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-ip-prefix";
}

ClearBgpVersionVrfIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfIpPrefixRpc::Input::has_data() const
{
    return ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::ClearBgpVersionVrfAfiSafiIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::~ClearBgpVersionVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-prefix";
}

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask";
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::ClearBgpVersionVrfAfiSafiIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::~ClearBgpVersionVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr";
}

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiNetworkRpc::ClearBgpVersionVrfAfiSafiNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiNetworkRpc::~ClearBgpVersionVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiNetworkRpc>();
}

std::string ClearBgpVersionVrfAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-network";
}

ClearBgpVersionVrfAfiSafiNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-network/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRdNetworkRpc::ClearBgpVersionVrfAfiSafiRdNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRdNetworkRpc::~ClearBgpVersionVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiRdNetworkRpc>();
}

std::string ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-rd-network";
}

ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd-network/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiRdNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::ClearBgpVersionVrfAfiSafiVrfNetworkRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::~ClearBgpVersionVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-vrf-network";
}

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf-network/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiVrfNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::ClearBgpVersionVrfAfiSafiIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::~ClearBgpVersionVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr";
}

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::ClearBgpVersionVrfAfiSafiIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::~ClearBgpVersionVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-ipv6-prefix";
}

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRdRpc::ClearBgpVersionVrfAfiSafiRdRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiRdRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRdRpc::~ClearBgpVersionVrfAfiSafiRdRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiRdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiRdRpc>();
}

std::string ClearBgpVersionVrfAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiRdRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-rd";
}

ClearBgpVersionVrfAfiSafiRdRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiRdRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiRdRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiVrfRpc::ClearBgpVersionVrfAfiSafiVrfRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiVrfRpc::~ClearBgpVersionVrfAfiSafiVrfRpc()
{
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiVrfRpc>();
}

std::string ClearBgpVersionVrfAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiVrfRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi-vrf";
}

ClearBgpVersionVrfAfiSafiVrfRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionVrfAfiSafiVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiVrfRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiVrfRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRpc::ClearBgpVersionVrfAfiSafiRpc()
    :
    input(std::make_shared<ClearBgpVersionVrfAfiSafiRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-version-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRpc::~ClearBgpVersionVrfAfiSafiRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVersionVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVersionVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVersionVrfAfiSafiRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVersionVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVersionVrfAfiSafiRpc>();
}

std::string ClearBgpVersionVrfAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVersionVrfAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVersionVrfAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVersionVrfAfiSafiRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-version-vrf-afi-safi";
}

ClearBgpVersionVrfAfiSafiRpc::Input::~Input()
{
}

bool ClearBgpVersionVrfAfiSafiRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVersionVrfAfiSafiRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVersionVrfAfiSafiRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVersionVrfAfiSafiRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfAllGracefulRpc::ClearBgpVrfAllGracefulRpc()
    :
    input(std::make_shared<ClearBgpVrfAllGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAllGracefulRpc::~ClearBgpVrfAllGracefulRpc()
{
}

bool ClearBgpVrfAllGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAllGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAllGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAllGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAllGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAllGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfAllGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAllGracefulRpc>();
}

std::string ClearBgpVrfAllGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAllGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAllGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAllGracefulRpc::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-all-graceful";
}

ClearBgpVrfAllGracefulRpc::Input::~Input()
{
}

bool ClearBgpVrfAllGracefulRpc::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfAllGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAllGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAllGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAllGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAllGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAllGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpVrfAllRpc::ClearBgpVrfAllRpc()
    :
    input(std::make_shared<ClearBgpVrfAllRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAllRpc::~ClearBgpVrfAllRpc()
{
}

bool ClearBgpVrfAllRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAllRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAllRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAllRpc>();
}

std::string ClearBgpVrfAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAllRpc::Input::Input()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-all";
}

ClearBgpVrfAllRpc::Input::~Input()
{
}

bool ClearBgpVrfAllRpc::Input::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfAllRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAllRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAllRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAllRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAllRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAllRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

ClearBgpVrfIpAddrGracefulRpc::ClearBgpVrfIpAddrGracefulRpc()
    :
    input(std::make_shared<ClearBgpVrfIpAddrGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrGracefulRpc::~ClearBgpVrfIpAddrGracefulRpc()
{
}

bool ClearBgpVrfIpAddrGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfIpAddrGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfIpAddrGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfIpAddrGracefulRpc>();
}

std::string ClearBgpVrfIpAddrGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfIpAddrGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfIpAddrGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfIpAddrGracefulRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-ip-addr-graceful";
}

ClearBgpVrfIpAddrGracefulRpc::Input::~Input()
{
}

bool ClearBgpVrfIpAddrGracefulRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-graceful/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfIpAddrGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfIpAddrLongLivedStaleRpc::ClearBgpVrfIpAddrLongLivedStaleRpc()
    :
    input(std::make_shared<ClearBgpVrfIpAddrLongLivedStaleRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrLongLivedStaleRpc::~ClearBgpVrfIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-long-lived-stale";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfIpAddrLongLivedStaleRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrLongLivedStaleRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpVrfIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfIpAddrLongLivedStaleRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-ip-addr-long-lived-stale";
}

ClearBgpVrfIpAddrLongLivedStaleRpc::Input::~Input()
{
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrLongLivedStaleRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrLongLivedStaleRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-long-lived-stale/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrLongLivedStaleRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrLongLivedStaleRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfIpAddrLongLivedStaleRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfIpAddrRpc::ClearBgpVrfIpAddrRpc()
    :
    input(std::make_shared<ClearBgpVrfIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrRpc::~ClearBgpVrfIpAddrRpc()
{
}

bool ClearBgpVrfIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfIpAddrRpc>();
}

std::string ClearBgpVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfIpAddrRpc::Input::Input()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-ip-addr";
}

ClearBgpVrfIpAddrRpc::Input::~Input()
{
}

bool ClearBgpVrfIpAddrRpc::Input::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfAsGracefulRpc::ClearBgpVrfAsGracefulRpc()
    :
    input(std::make_shared<ClearBgpVrfAsGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-vrf-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAsGracefulRpc::~ClearBgpVrfAsGracefulRpc()
{
}

bool ClearBgpVrfAsGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpVrfAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpVrfAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAsGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpVrfAsGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAsGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpVrfAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpVrfAsGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAsGracefulRpc>();
}

std::string ClearBgpVrfAsGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAsGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAsGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAsGracefulRpc::Input::Input()
    :
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-vrf-as-graceful";
}

ClearBgpVrfAsGracefulRpc::Input::~Input()
{
}

bool ClearBgpVrfAsGracefulRpc::Input::has_data() const
{
    return as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAsGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAsGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpVrfAsGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAsGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpVrfAsGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpVrfAsGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}


}
}

