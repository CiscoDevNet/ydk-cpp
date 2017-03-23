
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpVersionVrfAfiSafiVrfRpc::ClearBgpVersionVrfAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiVrfRpc::~ClearBgpVersionVrfAfiSafiVrfRpc()
{
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRpc::ClearBgpVersionVrfAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRpc::~ClearBgpVersionVrfAfiSafiRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfAllGracefulRpc::ClearBgpVrfAllGracefulRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAllGracefulRpc::~ClearBgpVrfAllGracefulRpc()
{
}

bool ClearBgpVrfAllGracefulRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfAllGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAllGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAllGracefulRpc::get_children()
{
    return children;
}

void ClearBgpVrfAllGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
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

ClearBgpVrfAllRpc::ClearBgpVrfAllRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAllRpc::~ClearBgpVrfAllRpc()
{
}

bool ClearBgpVrfAllRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-all";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAllRpc::get_children()
{
    return children;
}

void ClearBgpVrfAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
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

ClearBgpVrfIpAddrGracefulRpc::ClearBgpVrfIpAddrGracefulRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrGracefulRpc::~ClearBgpVrfIpAddrGracefulRpc()
{
}

bool ClearBgpVrfIpAddrGracefulRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpVrfIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfIpAddrGracefulRpc::get_children()
{
    return children;
}

void ClearBgpVrfIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfIpAddrLongLivedStaleRpc::ClearBgpVrfIpAddrLongLivedStaleRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrLongLivedStaleRpc::~ClearBgpVrfIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpVrfIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpVrfIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfIpAddrRpc::ClearBgpVrfIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfIpAddrRpc::~ClearBgpVrfIpAddrRpc()
{
}

bool ClearBgpVrfIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfAsGracefulRpc::ClearBgpVrfAsGracefulRpc()
    :
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAsGracefulRpc::~ClearBgpVrfAsGracefulRpc()
{
}

bool ClearBgpVrfAsGracefulRpc::has_data() const
{
    return as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAsGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAsGracefulRpc::get_children()
{
    return children;
}

void ClearBgpVrfAsGracefulRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVrfAsRpc::ClearBgpVrfAsRpc()
    :
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAsRpc::~ClearBgpVrfAsRpc()
{
}

bool ClearBgpVrfAsRpc::has_data() const
{
    return as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-as";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAsRpc::get_children()
{
    return children;
}

void ClearBgpVrfAsRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAsRpc>();
}

std::string ClearBgpVrfAsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfExternalGracefulRpc::ClearBgpVrfExternalGracefulRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfExternalGracefulRpc::~ClearBgpVrfExternalGracefulRpc()
{
}

bool ClearBgpVrfExternalGracefulRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfExternalGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpVrfExternalGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfExternalGracefulRpc::get_children()
{
    return children;
}

void ClearBgpVrfExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfExternalGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfExternalGracefulRpc>();
}

std::string ClearBgpVrfExternalGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfExternalGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfExternalGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfExternalRpc::ClearBgpVrfExternalRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfExternalRpc::~ClearBgpVrfExternalRpc()
{
}

bool ClearBgpVrfExternalRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfExternalRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-external";

    return path_buffer.str();

}

EntityPath ClearBgpVrfExternalRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfExternalRpc::get_children()
{
    return children;
}

void ClearBgpVrfExternalRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfExternalRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfExternalRpc>();
}

std::string ClearBgpVrfExternalRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfExternalRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfExternalRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc>();
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAllSoftInRpc::ClearBgpVrfAfiSafiAllSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAllSoftInRpc::~ClearBgpVrfAfiSafiAllSoftInRpc()
{
}

bool ClearBgpVrfAfiSafiAllSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAllSoftInRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftInRpc>();
}

std::string ClearBgpVrfAfiSafiAllSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAllSoftOutRpc::ClearBgpVrfAfiSafiAllSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAllSoftOutRpc::~ClearBgpVrfAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpVrfAfiSafiAllSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAllSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftOutRpc>();
}

std::string ClearBgpVrfAfiSafiAllSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAllSoftRpc::ClearBgpVrfAfiSafiAllSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAllSoftRpc::~ClearBgpVrfAfiSafiAllSoftRpc()
{
}

bool ClearBgpVrfAfiSafiAllSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-all-soft";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAllSoftRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAllSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAllSoftRpc>();
}

std::string ClearBgpVrfAfiSafiAllSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAllSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAllSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiIpAddrSoftInRpc::ClearBgpVrfAfiSafiIpAddrSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiIpAddrSoftInRpc::~ClearBgpVrfAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftInRpc>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiIpAddrSoftOutRpc::ClearBgpVrfAfiSafiIpAddrSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiIpAddrSoftOutRpc::~ClearBgpVrfAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftOutRpc>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiIpAddrSoftRpc::ClearBgpVrfAfiSafiIpAddrSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiIpAddrSoftRpc::~ClearBgpVrfAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpVrfAfiSafiIpAddrSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiIpAddrSoftRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiIpAddrSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiIpAddrSoftRpc>();
}

std::string ClearBgpVrfAfiSafiIpAddrSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiIpAddrSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiIpAddrSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc>();
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAsSoftInRpc::ClearBgpVrfAfiSafiAsSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAsSoftInRpc::~ClearBgpVrfAfiSafiAsSoftInRpc()
{
}

bool ClearBgpVrfAfiSafiAsSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAsSoftInRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftInRpc>();
}

std::string ClearBgpVrfAfiSafiAsSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAsSoftOutRpc::ClearBgpVrfAfiSafiAsSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAsSoftOutRpc::~ClearBgpVrfAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpVrfAfiSafiAsSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAsSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftOutRpc>();
}

std::string ClearBgpVrfAfiSafiAsSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiAsSoftRpc::ClearBgpVrfAfiSafiAsSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiAsSoftRpc::~ClearBgpVrfAfiSafiAsSoftRpc()
{
}

bool ClearBgpVrfAfiSafiAsSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-as-soft";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiAsSoftRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiAsSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiAsSoftRpc>();
}

std::string ClearBgpVrfAfiSafiAsSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiAsSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiAsSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::~ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiDampeningRpc::ClearBgpVrfAfiSafiDampeningRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiDampeningRpc::~ClearBgpVrfAfiSafiDampeningRpc()
{
}

bool ClearBgpVrfAfiSafiDampeningRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiDampeningRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampeningRpc>();
}

std::string ClearBgpVrfAfiSafiDampeningRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampeningRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampeningRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc>();
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiExternalSoftInRpc::ClearBgpVrfAfiSafiExternalSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiExternalSoftInRpc::~ClearBgpVrfAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpVrfAfiSafiExternalSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiExternalSoftInRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftInRpc>();
}

std::string ClearBgpVrfAfiSafiExternalSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiExternalSoftOutRpc::ClearBgpVrfAfiSafiExternalSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiExternalSoftOutRpc::~ClearBgpVrfAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpVrfAfiSafiExternalSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiExternalSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftOutRpc>();
}

std::string ClearBgpVrfAfiSafiExternalSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiExternalSoftRpc::ClearBgpVrfAfiSafiExternalSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiExternalSoftRpc::~ClearBgpVrfAfiSafiExternalSoftRpc()
{
}

bool ClearBgpVrfAfiSafiExternalSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-external-soft";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiExternalSoftRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiExternalSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiExternalSoftRpc>();
}

std::string ClearBgpVrfAfiSafiExternalSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiExternalSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiExternalSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    regexp_pattern{YType::str, "regexp-pattern"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::~ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return afi_safi_name.is_set
	|| regexp_pattern.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(regexp_pattern.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "regexp-pattern")
    {
        regexp_pattern = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsRegexpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    route_policy_name{YType::str, "route-policy-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| route_policy_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsRpc::ClearBgpVrfAfiSafiFlapStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsRpc::~ClearBgpVrfAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiSelfOriginatedRpc::ClearBgpVrfAfiSafiSelfOriginatedRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiSelfOriginatedRpc::~ClearBgpVrfAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpVrfAfiSafiSelfOriginatedRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-self-originated";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiSelfOriginatedRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiSelfOriginatedRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiSelfOriginatedRpc>();
}

std::string ClearBgpVrfAfiSafiSelfOriginatedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiSelfOriginatedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiSelfOriginatedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiShutdownRpc::ClearBgpVrfAfiSafiShutdownRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiShutdownRpc::~ClearBgpVrfAfiSafiShutdownRpc()
{
}

bool ClearBgpVrfAfiSafiShutdownRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiShutdownRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiShutdownRpc>();
}

std::string ClearBgpVrfAfiSafiShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::~ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfNexthopPerformanceStatisticsRpc::ClearBgpVrfNexthopPerformanceStatisticsRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfNexthopPerformanceStatisticsRpc::~ClearBgpVrfNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpVrfNexthopPerformanceStatisticsRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpVrfNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpVrfNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpVrfNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfNexthopRegistrationIpAddrRpc::ClearBgpVrfNexthopRegistrationIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfNexthopRegistrationIpAddrRpc::~ClearBgpVrfNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpVrfNexthopRegistrationIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpVrfNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfPeerDropsAllRpc::ClearBgpVrfPeerDropsAllRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfPeerDropsAllRpc::~ClearBgpVrfPeerDropsAllRpc()
{
}

bool ClearBgpVrfPeerDropsAllRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfPeerDropsAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfPeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-all";

    return path_buffer.str();

}

EntityPath ClearBgpVrfPeerDropsAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfPeerDropsAllRpc::get_children()
{
    return children;
}

void ClearBgpVrfPeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfPeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPeerDropsAllRpc>();
}

std::string ClearBgpVrfPeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfPeerDropsIpAddrRpc::ClearBgpVrfPeerDropsIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfPeerDropsIpAddrRpc::~ClearBgpVrfPeerDropsIpAddrRpc()
{
}

bool ClearBgpVrfPeerDropsIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfPeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfPeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-peer-drops-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfPeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfPeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfPeerDropsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfPeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfPeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPeerDropsIpAddrRpc>();
}

std::string ClearBgpVrfPeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfPerformanceStatisticsRpc::ClearBgpVrfPerformanceStatisticsRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfPerformanceStatisticsRpc::~ClearBgpVrfPerformanceStatisticsRpc()
{
}

bool ClearBgpVrfPerformanceStatisticsRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpVrfPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpVrfPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfPerformanceStatisticsRpc>();
}

std::string ClearBgpVrfPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfShutdownRpc::ClearBgpVrfShutdownRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfShutdownRpc::~ClearBgpVrfShutdownRpc()
{
}

bool ClearBgpVrfShutdownRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpVrfShutdownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfShutdownRpc::get_children()
{
    return children;
}

void ClearBgpVrfShutdownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfShutdownRpc>();
}

std::string ClearBgpVrfShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqAddressFamilyRpc::ClearBgpVrfUpdateOutqAddressFamilyRpc()
    :
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqAddressFamilyRpc::~ClearBgpVrfUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpVrfUpdateOutqAddressFamilyRpc::has_data() const
{
    return vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpVrfUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqNeighborIpAddrRpc::ClearBgpVrfUpdateOutqNeighborIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqNeighborIpAddrRpc::~ClearBgpVrfUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sub-group")
    {
        sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "refresh-sub-group")
    {
        refresh_sub_group = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc()
    :
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpVrfUpdateOutqUpdateGroupRpc::ClearBgpVrfUpdateOutqUpdateGroupRpc()
    :
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-vrf-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVrfUpdateOutqUpdateGroupRpc::~ClearBgpVrfUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpVrfUpdateOutqUpdateGroupRpc::has_data() const
{
    return update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVrfUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVrfUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-vrf-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpVrfUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVrfUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpVrfUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpVrfUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpVrfUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpVrfUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpVrfUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpVrfUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

