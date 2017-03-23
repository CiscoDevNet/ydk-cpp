
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_0.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpAllGracefulRpc::ClearBgpAllGracefulRpc()
{
    yang_name = "clear-bgp-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAllGracefulRpc::~ClearBgpAllGracefulRpc()
{
}

bool ClearBgpAllGracefulRpc::has_data() const
{
    return false;
}

bool ClearBgpAllGracefulRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-all-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpAllGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAllGracefulRpc::get_children()
{
    return children;
}

void ClearBgpAllGracefulRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAllGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAllGracefulRpc>();
}

std::string ClearBgpAllGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAllGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAllGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAllRpc::ClearBgpAllRpc()
{
    yang_name = "clear-bgp-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAllRpc::~ClearBgpAllRpc()
{
}

bool ClearBgpAllRpc::has_data() const
{
    return false;
}

bool ClearBgpAllRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-all";

    return path_buffer.str();

}

EntityPath ClearBgpAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAllRpc::get_children()
{
    return children;
}

void ClearBgpAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAllRpc>();
}

std::string ClearBgpAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpIpAddrGracefulRpc::ClearBgpIpAddrGracefulRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpIpAddrGracefulRpc::~ClearBgpIpAddrGracefulRpc()
{
}

bool ClearBgpIpAddrGracefulRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpIpAddrGracefulRpc::get_children()
{
    return children;
}

void ClearBgpIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpIpAddrGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddrGracefulRpc>();
}

std::string ClearBgpIpAddrGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddrGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddrGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpIpAddrLongLivedStaleRpc::ClearBgpIpAddrLongLivedStaleRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpIpAddrLongLivedStaleRpc::~ClearBgpIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpIpAddrLongLivedStaleRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpIpAddrRpc::ClearBgpIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpIpAddrRpc::~ClearBgpIpAddrRpc()
{
}

bool ClearBgpIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpIpAddrRpc>();
}

std::string ClearBgpIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAllSoftInPrefixFilterRpc::ClearBgpAfiSafiAllSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftInPrefixFilterRpc>();
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAllSoftInRpc::ClearBgpAfiSafiAllSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAllSoftInRpc::~ClearBgpAfiSafiAllSoftInRpc()
{
}

bool ClearBgpAfiSafiAllSoftInRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAllSoftInRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftInRpc>();
}

std::string ClearBgpAfiSafiAllSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAllSoftOutRpc::ClearBgpAfiSafiAllSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAllSoftOutRpc::~ClearBgpAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpAfiSafiAllSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAllSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftOutRpc>();
}

std::string ClearBgpAfiSafiAllSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAllSoftRpc::ClearBgpAfiSafiAllSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAllSoftRpc::~ClearBgpAfiSafiAllSoftRpc()
{
}

bool ClearBgpAfiSafiAllSoftRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-all-soft";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAllSoftRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAllSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAllSoftRpc>();
}

std::string ClearBgpAfiSafiAllSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAllSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAllSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiIpAddrLongLivedStaleRpc::ClearBgpAfiSafiIpAddrLongLivedStaleRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc>();
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiIpAddrSoftInRpc::ClearBgpAfiSafiIpAddrSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiIpAddrSoftInRpc::~ClearBgpAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpAfiSafiIpAddrSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiIpAddrSoftInRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftInRpc>();
}

std::string ClearBgpAfiSafiIpAddrSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiIpAddrSoftOutRpc::ClearBgpAfiSafiIpAddrSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiIpAddrSoftOutRpc::~ClearBgpAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiIpAddrSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftOutRpc>();
}

std::string ClearBgpAfiSafiIpAddrSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiIpAddrSoftRpc::ClearBgpAfiSafiIpAddrSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiIpAddrSoftRpc::~ClearBgpAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpAfiSafiIpAddrSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiIpAddrSoftRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiIpAddrSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiIpAddrSoftRpc>();
}

std::string ClearBgpAfiSafiIpAddrSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiIpAddrSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiIpAddrSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAsSoftInPrefixFilterRpc::ClearBgpAfiSafiAsSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftInPrefixFilterRpc>();
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAsSoftInRpc::ClearBgpAfiSafiAsSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAsSoftInRpc::~ClearBgpAfiSafiAsSoftInRpc()
{
}

bool ClearBgpAfiSafiAsSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAsSoftInRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftInRpc>();
}

std::string ClearBgpAfiSafiAsSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAsSoftOutRpc::ClearBgpAfiSafiAsSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAsSoftOutRpc::~ClearBgpAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpAfiSafiAsSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAsSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftOutRpc>();
}

std::string ClearBgpAfiSafiAsSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiAsSoftRpc::ClearBgpAfiSafiAsSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiAsSoftRpc::~ClearBgpAfiSafiAsSoftRpc()
{
}

bool ClearBgpAfiSafiAsSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set;
}

bool ClearBgpAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-as-soft";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiAsSoftRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiAsSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiAsSoftRpc>();
}

std::string ClearBgpAfiSafiAsSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiAsSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiAsSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningIpPrefixRpc::ClearBgpAfiSafiDampeningIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-afi-safi-dampening-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningIpPrefixRpc::~ClearBgpAfiSafiDampeningIpPrefixRpc()
{
}

bool ClearBgpAfiSafiDampeningIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpAfiSafiDampeningIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiDampeningIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiDampeningIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiDampeningIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpPrefixRpc>();
}

std::string ClearBgpAfiSafiDampeningIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningRpc::ClearBgpAfiSafiDampeningRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningRpc::~ClearBgpAfiSafiDampeningRpc()
{
}

bool ClearBgpAfiSafiDampeningRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiDampeningRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningRpc>();
}

std::string ClearBgpAfiSafiDampeningRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpAfiSafiExternalSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftInPrefixFilterRpc>();
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiExternalSoftInRpc::ClearBgpAfiSafiExternalSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiExternalSoftInRpc::~ClearBgpAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpAfiSafiExternalSoftInRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiExternalSoftInRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftInRpc>();
}

std::string ClearBgpAfiSafiExternalSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiExternalSoftOutRpc::ClearBgpAfiSafiExternalSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiExternalSoftOutRpc::~ClearBgpAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpAfiSafiExternalSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiExternalSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftOutRpc>();
}

std::string ClearBgpAfiSafiExternalSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiExternalSoftRpc::ClearBgpAfiSafiExternalSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiExternalSoftRpc::~ClearBgpAfiSafiExternalSoftRpc()
{
}

bool ClearBgpAfiSafiExternalSoftRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-external-soft";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiExternalSoftRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiExternalSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiExternalSoftRpc>();
}

std::string ClearBgpAfiSafiExternalSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiExternalSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiExternalSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpAddrRpc::ClearBgpAfiSafiFlapStatisticsIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpAddrRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::ClearBgpAfiSafiFlapStatisticsIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::~ClearBgpAfiSafiFlapStatisticsIpPrefixRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpPrefixRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsRegexpRpc::ClearBgpAfiSafiFlapStatisticsRegexpRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsRegexpRpc::~ClearBgpAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return afi_safi_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(regexp_pattern.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.operation)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRegexpRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsRegexpRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsRegexpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsRoutePolicyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsRpc::ClearBgpAfiSafiFlapStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsRpc::~ClearBgpAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpAfiSafiNexthopPerformanceStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpAfiSafiNexthopRegistrationIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiSelfOriginatedRpc::ClearBgpAfiSafiSelfOriginatedRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiSelfOriginatedRpc::~ClearBgpAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpAfiSafiSelfOriginatedRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-self-originated";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiSelfOriginatedRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiSelfOriginatedRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiSelfOriginatedRpc>();
}

std::string ClearBgpAfiSafiSelfOriginatedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiSelfOriginatedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiSelfOriginatedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiShutdownRpc::ClearBgpAfiSafiShutdownRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiShutdownRpc::~ClearBgpAfiSafiShutdownRpc()
{
}

bool ClearBgpAfiSafiShutdownRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiShutdownRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiShutdownRpc>();
}

std::string ClearBgpAfiSafiShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpAfiSafiUpdateOutqAddressFamilyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
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

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpAfiSafiUpdateOutqUpdateGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| update_group.is_set;
}

bool ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

std::shared_ptr<Entity> ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAsGracefulRpc::ClearBgpAsGracefulRpc()
    :
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAsGracefulRpc::~ClearBgpAsGracefulRpc()
{
}

bool ClearBgpAsGracefulRpc::has_data() const
{
    return as_number.is_set;
}

bool ClearBgpAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpAsGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAsGracefulRpc::get_children()
{
    return children;
}

void ClearBgpAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAsGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAsGracefulRpc>();
}

std::string ClearBgpAsGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAsGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAsGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAsRpc::ClearBgpAsRpc()
    :
    as_number{YType::str, "as-number"}
{
    yang_name = "clear-bgp-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAsRpc::~ClearBgpAsRpc()
{
}

bool ClearBgpAsRpc::has_data() const
{
    return as_number.is_set;
}

bool ClearBgpAsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation);
}

std::string ClearBgpAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-as";

    return path_buffer.str();

}

EntityPath ClearBgpAsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAsRpc::get_children()
{
    return children;
}

void ClearBgpAsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
}

std::shared_ptr<Entity> ClearBgpAsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAsRpc>();
}

std::string ClearBgpAsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathIpAddrIpNetmaskRpc::ClearBgpBestpathIpAddrIpNetmaskRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-bestpath-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathIpAddrIpNetmaskRpc::~ClearBgpBestpathIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathIpAddrIpNetmaskRpc::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpBestpathIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpAddrIpNetmaskRpc>();
}

std::string ClearBgpBestpathIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathIpAddrRpc::ClearBgpBestpathIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-bestpath-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathIpAddrRpc::~ClearBgpBestpathIpAddrRpc()
{
}

bool ClearBgpBestpathIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpBestpathIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpBestpathIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpBestpathIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpAddrRpc>();
}

std::string ClearBgpBestpathIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathIpPrefixRpc::ClearBgpBestpathIpPrefixRpc()
    :
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-bestpath-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathIpPrefixRpc::~ClearBgpBestpathIpPrefixRpc()
{
}

bool ClearBgpBestpathIpPrefixRpc::has_data() const
{
    return ip_prefix.is_set;
}

bool ClearBgpBestpathIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpBestpathIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpBestpathIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathIpPrefixRpc>();
}

std::string ClearBgpBestpathIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::~ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpAddrRpc::ClearBgpBestpathAfiSafiIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpAddrRpc::~ClearBgpBestpathAfiSafiIpAddrRpc()
{
}

bool ClearBgpBestpathAfiSafiIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpBestpathAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpAddrRpc>();
}

std::string ClearBgpBestpathAfiSafiIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpPrefixRpc::ClearBgpBestpathAfiSafiIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpPrefixRpc::~ClearBgpBestpathAfiSafiIpPrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpPrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::~ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiBridgeDomainIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpAddrRpc::ClearBgpBestpathAfiSafiRdIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpAddrRpc::~ClearBgpBestpathAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpAddrRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpPrefixRpc::ClearBgpBestpathAfiSafiRdIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpPrefixRpc::~ClearBgpBestpathAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpPrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv4AddrRpc::ClearBgpBestpathAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv4AddrRpc::~ClearBgpBestpathAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpBestpathAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv4PrefixRpc::ClearBgpBestpathAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv4PrefixRpc::~ClearBgpBestpathAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdIpv4AddrRpc::ClearBgpBestpathAfiSafiRdIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv4AddrRpc::~ClearBgpBestpathAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdIpv4AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::ClearBgpBestpathAfiSafiVrfIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::~ClearBgpBestpathAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfIpv4AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiNetworkRpc::ClearBgpBestpathAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiNetworkRpc::~ClearBgpBestpathAfiSafiNetworkRpc()
{
}

bool ClearBgpBestpathAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpBestpathAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpBestpathAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiNetworkRpc>();
}

std::string ClearBgpBestpathAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdNetworkRpc::ClearBgpBestpathAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdNetworkRpc::~ClearBgpBestpathAfiSafiRdNetworkRpc()
{
}

bool ClearBgpBestpathAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdNetworkRpc>();
}

std::string ClearBgpBestpathAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfNetworkRpc::ClearBgpBestpathAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfNetworkRpc::~ClearBgpBestpathAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::ClearBgpBestpathAfiSafiRtConstraintNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::~ClearBgpBestpathAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.operation)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRtConstraintNetworkRpc>();
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRtConstraintNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::~ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.operation)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv4TunnelNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv6AddrRpc::ClearBgpBestpathAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv6AddrRpc::~ClearBgpBestpathAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpBestpathAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiIpv6PrefixRpc::ClearBgpBestpathAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiIpv6PrefixRpc::~ClearBgpBestpathAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRdRpc::ClearBgpBestpathAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdRpc::~ClearBgpBestpathAfiSafiRdRpc()
{
}

bool ClearBgpBestpathAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRdRpc>();
}

std::string ClearBgpBestpathAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiVrfRpc::ClearBgpBestpathAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfRpc::~ClearBgpBestpathAfiSafiVrfRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiVrfRpc>();
}

std::string ClearBgpBestpathAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiRpc::ClearBgpBestpathAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRpc::~ClearBgpBestpathAfiSafiRpc()
{
}

bool ClearBgpBestpathAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpBestpathAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpBestpathAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpBestpathAfiSafiRpc>();
}

std::string ClearBgpBestpathAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpBestpathAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpBestpathAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::ClearBgpBestpathAfiSafiSrPolicyPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::~ClearBgpBestpathAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.operation)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::ClearBgpBestpathAfiSafiRdIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::~ClearBgpBestpathAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.operation)) leaf_name_data.push_back(mp2mp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::~ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::ClearBgpBestpathAfiSafiRdIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6AddrRpc::~ClearBgpBestpathAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::ClearBgpBestpathAfiSafiRdIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::~ClearBgpBestpathAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::ClearBgpBestpathAfiSafiVrfIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::~ClearBgpBestpathAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::~ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::ClearBgpBestpathVrfIpAddrIpNetmaskRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpAddrIpNetmaskRpc::~ClearBgpBestpathVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfIpAddrRpc::ClearBgpBestpathVrfIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpAddrRpc::~ClearBgpBestpathVrfIpAddrRpc()
{
}

bool ClearBgpBestpathVrfIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfIpPrefixRpc::ClearBgpBestpathVrfIpPrefixRpc()
    :
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfIpPrefixRpc::~ClearBgpBestpathVrfIpPrefixRpc()
{
}

bool ClearBgpBestpathVrfIpPrefixRpc::has_data() const
{
    return ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::~ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::ClearBgpBestpathVrfAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::~ClearBgpBestpathVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiNetworkRpc::ClearBgpBestpathVrfAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiNetworkRpc::~ClearBgpBestpathVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::ClearBgpBestpathVrfAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRdNetworkRpc::~ClearBgpBestpathVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::ClearBgpBestpathVrfAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::~ClearBgpBestpathVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::ClearBgpBestpathVrfAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::~ClearBgpBestpathVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::~ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiRdRpc::ClearBgpBestpathVrfAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRdRpc::~ClearBgpBestpathVrfAfiSafiRdRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiVrfRpc::ClearBgpBestpathVrfAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiVrfRpc::~ClearBgpBestpathVrfAfiSafiVrfRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpBestpathVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpBestpathVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpBestpathVrfAfiSafiRpc::ClearBgpBestpathVrfAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpBestpathVrfAfiSafiRpc::~ClearBgpBestpathVrfAfiSafiRpc()
{
}

bool ClearBgpBestpathVrfAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpBestpathVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpBestpathVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-bestpath-vrf-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpBestpathVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpBestpathVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpBestpathVrfAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpBestpathVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

EntityPath ClearBgpExternalGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpExternalGracefulRpc::get_children()
{
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

EntityPath ClearBgpExternalRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpExternalRpc::get_children()
{
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
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAllGracefulRpc::~ClearBgpInstanceAllGracefulRpc()
{
}

bool ClearBgpInstanceAllGracefulRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAllGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAllGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAllGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAllGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
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

ClearBgpInstanceAllRpc::ClearBgpInstanceAllRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAllRpc::~ClearBgpInstanceAllRpc()
{
}

bool ClearBgpInstanceAllRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-all";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAllRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
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

ClearBgpInstanceIpAddrGracefulRpc::ClearBgpInstanceIpAddrGracefulRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrGracefulRpc::~ClearBgpInstanceIpAddrGracefulRpc()
{
}

bool ClearBgpInstanceIpAddrGracefulRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceIpAddrGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceIpAddrLongLivedStaleRpc::ClearBgpInstanceIpAddrLongLivedStaleRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrLongLivedStaleRpc::~ClearBgpInstanceIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpInstanceIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceIpAddrRpc::ClearBgpInstanceIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceIpAddrRpc::~ClearBgpInstanceIpAddrRpc()
{
}

bool ClearBgpInstanceIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAllSoftInRpc::ClearBgpInstanceAfiSafiAllSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftInRpc::~ClearBgpInstanceAfiSafiAllSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAllSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAllSoftOutRpc::ClearBgpInstanceAfiSafiAllSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftOutRpc::~ClearBgpInstanceAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAllSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAllSoftRpc::ClearBgpInstanceAfiSafiAllSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAllSoftRpc::~ClearBgpInstanceAfiSafiAllSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-all-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAllSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::ClearBgpInstanceAfiSafiIpAddrSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftInRpc::~ClearBgpInstanceAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiIpAddrSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::ClearBgpInstanceAfiSafiIpAddrSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::~ClearBgpInstanceAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiIpAddrSoftRpc::ClearBgpInstanceAfiSafiIpAddrSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiIpAddrSoftRpc::~ClearBgpInstanceAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiIpAddrSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAsSoftInRpc::ClearBgpInstanceAfiSafiAsSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftInRpc::~ClearBgpInstanceAfiSafiAsSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAsSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAsSoftOutRpc::ClearBgpInstanceAfiSafiAsSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftOutRpc::~ClearBgpInstanceAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAsSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiAsSoftRpc::ClearBgpInstanceAfiSafiAsSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiAsSoftRpc::~ClearBgpInstanceAfiSafiAsSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-as-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiAsSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::ClearBgpInstanceAfiSafiDampeningIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-dampening-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpPrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiDampeningRpc::ClearBgpInstanceAfiSafiDampeningRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningRpc::~ClearBgpInstanceAfiSafiDampeningRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiDampeningRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiExternalSoftInRpc::ClearBgpInstanceAfiSafiExternalSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftInRpc::~ClearBgpInstanceAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiExternalSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiExternalSoftOutRpc::ClearBgpInstanceAfiSafiExternalSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftOutRpc::~ClearBgpInstanceAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiExternalSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiExternalSoftRpc::ClearBgpInstanceAfiSafiExternalSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiExternalSoftRpc::~ClearBgpInstanceAfiSafiExternalSoftRpc()
{
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-external-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiExternalSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    regexp_pattern{YType::str, "regexp-pattern"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| regexp_pattern.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(regexp_pattern.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (regexp_pattern.is_set || is_set(regexp_pattern.operation)) leaf_name_data.push_back(regexp_pattern.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| route_policy_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(route_policy_name.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsRpc::ClearBgpInstanceAfiSafiFlapStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsRpc::~ClearBgpInstanceAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiSelfOriginatedRpc::ClearBgpInstanceAfiSafiSelfOriginatedRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiSelfOriginatedRpc::~ClearBgpInstanceAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-self-originated";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiSelfOriginatedRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiShutdownRpc::ClearBgpInstanceAfiSafiShutdownRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiShutdownRpc::~ClearBgpInstanceAfiSafiShutdownRpc()
{
}

bool ClearBgpInstanceAfiSafiShutdownRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiShutdownRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
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

const Enum::YLeaf InstanceNameEnum::all {0, "all"};

const Enum::YLeaf Vpnv6SafiEnum::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv6SafiEnum::multicast {1, "multicast"};
const Enum::YLeaf Vpnv6SafiEnum::unicast {2, "unicast"};

const Enum::YLeaf AfiEnum::all {0, "all"};
const Enum::YLeaf AfiEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf AfiEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf AfiEnum::l2vpn {3, "l2vpn"};
const Enum::YLeaf AfiEnum::link_state {4, "link-state"};
const Enum::YLeaf AfiEnum::vpnv4 {5, "vpnv4"};
const Enum::YLeaf AfiEnum::vpnv6 {6, "vpnv6"};

const Enum::YLeaf VrfNameEnum::all {0, "all"};

const Enum::YLeaf Ipv4SafiEnum::all {0, "all"};
const Enum::YLeaf Ipv4SafiEnum::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv4SafiEnum::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv4SafiEnum::mdt {3, "mdt"};
const Enum::YLeaf Ipv4SafiEnum::multicast {4, "multicast"};
const Enum::YLeaf Ipv4SafiEnum::mvpn {5, "mvpn"};
const Enum::YLeaf Ipv4SafiEnum::rt_filter {6, "rt-filter"};
const Enum::YLeaf Ipv4SafiEnum::sr_policy {7, "sr-policy"};
const Enum::YLeaf Ipv4SafiEnum::tunnel {8, "tunnel"};
const Enum::YLeaf Ipv4SafiEnum::unicast {9, "unicast"};

const Enum::YLeaf AfiSafiTypeEnum::all_alll {0, "all-alll"};
const Enum::YLeaf AfiSafiTypeEnum::all_evpn {1, "all-evpn"};
const Enum::YLeaf AfiSafiTypeEnum::all_flowspec {2, "all-flowspec"};
const Enum::YLeaf AfiSafiTypeEnum::all_labeled_unicast {3, "all-labeled-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::all_mdt {4, "all-mdt"};
const Enum::YLeaf AfiSafiTypeEnum::all_mspw {5, "all-mspw"};
const Enum::YLeaf AfiSafiTypeEnum::all_multicast {6, "all-multicast"};
const Enum::YLeaf AfiSafiTypeEnum::all_mvpn {7, "all-mvpn"};
const Enum::YLeaf AfiSafiTypeEnum::all_rt_filter {8, "all-rt-filter"};
const Enum::YLeaf AfiSafiTypeEnum::all_sr_policy {9, "all-sr-policy"};
const Enum::YLeaf AfiSafiTypeEnum::all_tunnel {10, "all-tunnel"};
const Enum::YLeaf AfiSafiTypeEnum::all_unicast {11, "all-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::all_vpls {12, "all-vpls"};
const Enum::YLeaf AfiSafiTypeEnum::all_vpws {13, "all-vpws"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_all {14, "ipv4-all"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_flowspec {15, "ipv4-flowspec"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_labeled_unicast {16, "ipv4-labeled-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_mdt {17, "ipv4-mdt"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_multicast {18, "ipv4-multicast"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_mvpn {19, "ipv4-mvpn"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_rt_filter {20, "ipv4-rt-filter"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_sr_policy {21, "ipv4-sr-policy"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_tunnel {22, "ipv4-tunnel"};
const Enum::YLeaf AfiSafiTypeEnum::ipv4_unicast {23, "ipv4-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_all {24, "ipv6-all"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_flowspec {25, "ipv6-flowspec"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_labeled_unicast {26, "ipv6-labeled-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_multicast {27, "ipv6-multicast"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_mvpn {28, "ipv6-mvpn"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_sr_policy {29, "ipv6-sr-policy"};
const Enum::YLeaf AfiSafiTypeEnum::ipv6_unicast {30, "ipv6-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::l2vpn_evpn {31, "l2vpn-evpn"};
const Enum::YLeaf AfiSafiTypeEnum::l2vpn_mspw {32, "l2vpn-mspw"};
const Enum::YLeaf AfiSafiTypeEnum::l2vpn_vpls {33, "l2vpn-vpls"};
const Enum::YLeaf AfiSafiTypeEnum::l2vpn_vpws {34, "l2vpn-vpws"};
const Enum::YLeaf AfiSafiTypeEnum::link_state {35, "link-state"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv4_flowspec {36, "vpnv4-flowspec"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv4_multicast {37, "vpnv4-multicast"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv4_unicast {38, "vpnv4-unicast"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv6_flowspec {39, "vpnv6-flowspec"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv6_multicast {40, "vpnv6-multicast"};
const Enum::YLeaf AfiSafiTypeEnum::vpnv6_unicast {41, "vpnv6-unicast"};

const Enum::YLeaf Vpnv4SafiEnum::flowspec {0, "flowspec"};
const Enum::YLeaf Vpnv4SafiEnum::multicast {1, "multicast"};
const Enum::YLeaf Vpnv4SafiEnum::unicast {2, "unicast"};

const Enum::YLeaf Ipv6SafiEnum::all {0, "all"};
const Enum::YLeaf Ipv6SafiEnum::flowspec {1, "flowspec"};
const Enum::YLeaf Ipv6SafiEnum::labeled_unicast {2, "labeled-unicast"};
const Enum::YLeaf Ipv6SafiEnum::multicast {3, "multicast"};
const Enum::YLeaf Ipv6SafiEnum::mvpn {4, "mvpn"};
const Enum::YLeaf Ipv6SafiEnum::sr_policy {5, "sr-policy"};
const Enum::YLeaf Ipv6SafiEnum::unicast {6, "unicast"};

const Enum::YLeaf L2VpnSafiEnum::evpn {0, "evpn"};
const Enum::YLeaf L2VpnSafiEnum::mspw {1, "mspw"};
const Enum::YLeaf L2VpnSafiEnum::vpls {2, "vpls"};
const Enum::YLeaf L2VpnSafiEnum::vpws {3, "vpws"};

const Enum::YLeaf LinkStateSafiEnum::link_state {0, "link-state"};


}
}

