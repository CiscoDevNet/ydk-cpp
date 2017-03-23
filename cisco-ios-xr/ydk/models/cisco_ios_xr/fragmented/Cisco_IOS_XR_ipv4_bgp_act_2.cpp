
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::ClearBgpInstanceVrfIpAddrLongLivedStaleRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::~ClearBgpInstanceVrfIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfIpAddrRpc::ClearBgpInstanceVrfIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfIpAddrRpc::~ClearBgpInstanceVrfIpAddrRpc()
{
}

bool ClearBgpInstanceVrfIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddrRpc>();
}

std::string ClearBgpInstanceVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAsGracefulRpc::ClearBgpInstanceVrfAsGracefulRpc()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAsGracefulRpc::~ClearBgpInstanceVrfAsGracefulRpc()
{
}

bool ClearBgpInstanceVrfAsGracefulRpc::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAsGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAsGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAsGracefulRpc>();
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAsGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAsGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAsRpc::ClearBgpInstanceVrfAsRpc()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAsRpc::~ClearBgpInstanceVrfAsRpc()
{
}

bool ClearBgpInstanceVrfAsRpc::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-as";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAsRpc>();
}

std::string ClearBgpInstanceVrfAsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfExternalGracefulRpc::ClearBgpInstanceVrfExternalGracefulRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfExternalGracefulRpc::~ClearBgpInstanceVrfExternalGracefulRpc()
{
}

bool ClearBgpInstanceVrfExternalGracefulRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternalGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfExternalGracefulRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfExternalGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternalGracefulRpc>();
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternalGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternalGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfExternalRpc::ClearBgpInstanceVrfExternalRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfExternalRpc::~ClearBgpInstanceVrfExternalRpc()
{
}

bool ClearBgpInstanceVrfExternalRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfExternalRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-external";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfExternalRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfExternalRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfExternalRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfExternalRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfExternalRpc>();
}

std::string ClearBgpInstanceVrfExternalRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfExternalRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfExternalRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::ClearBgpInstanceVrfAfiSafiAllSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftInRpc::~ClearBgpInstanceVrfAfiSafiAllSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::ClearBgpInstanceVrfAfiSafiAllSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::~ClearBgpInstanceVrfAfiSafiAllSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::ClearBgpInstanceVrfAfiSafiAllSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-all-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAllSoftRpc::~ClearBgpInstanceVrfAfiSafiAllSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAllSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-all-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAllSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAllSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAllSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAllSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::~ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-long-lived-stale";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrLongLivedStaleRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-ip-addr-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::~ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-ip-addr-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiIpAddrSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::ClearBgpInstanceVrfAfiSafiAsSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftInRpc::~ClearBgpInstanceVrfAfiSafiAsSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftInRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::ClearBgpInstanceVrfAfiSafiAsSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::~ClearBgpInstanceVrfAfiSafiAsSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::ClearBgpInstanceVrfAfiSafiAsSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-as-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiAsSoftRpc::~ClearBgpInstanceVrfAfiSafiAsSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| as_number.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiAsSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-as-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiAsSoftRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiAsSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiAsSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiAsSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::~ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::ClearBgpInstanceVrfAfiSafiDampeningRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningRpc::~ClearBgpInstanceVrfAfiSafiDampeningRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiDampeningRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiDampeningRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in-prefix-filter";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftInPrefixFilterRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::ClearBgpInstanceVrfAfiSafiExternalSoftInRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-in"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftInRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-in";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftInRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftInRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft-out"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft-out";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftOutRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::ClearBgpInstanceVrfAfiSafiExternalSoftRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-external-soft"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiExternalSoftRpc::~ClearBgpInstanceVrfAfiSafiExternalSoftRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiExternalSoftRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-external-soft";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiExternalSoftRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiExternalSoftRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiExternalSoftRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiExternalSoftRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    regexp_pattern{YType::str, "regexp-pattern"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| regexp_pattern.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(regexp_pattern.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-regexp";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRegexpRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    route_policy_name{YType::str, "route-policy-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| route_policy_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-route-policy";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRoutePolicyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::~ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::~ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-self-originated"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::~ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-self-originated";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiSelfOriginatedRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::ClearBgpInstanceVrfAfiSafiShutdownRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiShutdownRpc::~ClearBgpInstanceVrfAfiSafiShutdownRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiShutdownRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiShutdownRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiShutdownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiShutdownRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::~ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::~ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::~ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPeerDropsAllRpc::ClearBgpInstanceVrfPeerDropsAllRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPeerDropsAllRpc::~ClearBgpInstanceVrfPeerDropsAllRpc()
{
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPeerDropsAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-all";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfPeerDropsAllRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfPeerDropsAllRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfPeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsAllRpc>();
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::ClearBgpInstanceVrfPeerDropsIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPeerDropsIpAddrRpc::~ClearBgpInstanceVrfPeerDropsIpAddrRpc()
{
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-peer-drops-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfPeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfPeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPeerDropsIpAddrRpc>();
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::ClearBgpInstanceVrfPerformanceStatisticsRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfPerformanceStatisticsRpc::~ClearBgpInstanceVrfPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfShutdownRpc::ClearBgpInstanceVrfShutdownRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfShutdownRpc::~ClearBgpInstanceVrfShutdownRpc()
{
}

bool ClearBgpInstanceVrfShutdownRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfShutdownRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfShutdownRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfShutdownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfShutdownRpc>();
}

std::string ClearBgpInstanceVrfShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::~ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sub_group.is_set || is_set(sub_group.operation)) leaf_name_data.push_back(sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (refresh_sub_group.is_set || is_set(refresh_sub_group.operation)) leaf_name_data.push_back(refresh_sub_group.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
{
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
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::~ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::ClearBgpAfiSafiDampeningIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningIpv4PrefixRpc::~ClearBgpAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::ClearBgpAfiSafiDampeningIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiDampeningIpv6PrefixRpc::~ClearBgpAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpNexthopPerformanceStatisticsRpc::ClearBgpNexthopPerformanceStatisticsRpc()
{
    yang_name = "clear-bgp-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpNexthopPerformanceStatisticsRpc::~ClearBgpNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpNexthopPerformanceStatisticsRpc::has_data() const
{
    return false;
}

bool ClearBgpNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpNexthopRegistrationIpAddrRpc::ClearBgpNexthopRegistrationIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpNexthopRegistrationIpAddrRpc::~ClearBgpNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpNexthopRegistrationIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpPeerDropsAllRpc::ClearBgpPeerDropsAllRpc()
{
    yang_name = "clear-bgp-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPeerDropsAllRpc::~ClearBgpPeerDropsAllRpc()
{
}

bool ClearBgpPeerDropsAllRpc::has_data() const
{
    return false;
}

bool ClearBgpPeerDropsAllRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpPeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-all";

    return path_buffer.str();

}

EntityPath ClearBgpPeerDropsAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpPeerDropsAllRpc::get_children()
{
    return children;
}

void ClearBgpPeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpPeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsAllRpc>();
}

std::string ClearBgpPeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpPeerDropsIpAddrRpc::ClearBgpPeerDropsIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPeerDropsIpAddrRpc::~ClearBgpPeerDropsIpAddrRpc()
{
}

bool ClearBgpPeerDropsIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpPeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpPeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-peer-drops-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpPeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpPeerDropsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpPeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpPeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPeerDropsIpAddrRpc>();
}

std::string ClearBgpPeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpPerformanceStatisticsRpc::ClearBgpPerformanceStatisticsRpc()
{
    yang_name = "clear-bgp-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpPerformanceStatisticsRpc::~ClearBgpPerformanceStatisticsRpc()
{
}

bool ClearBgpPerformanceStatisticsRpc::has_data() const
{
    return false;
}

bool ClearBgpPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpPerformanceStatisticsRpc>();
}

std::string ClearBgpPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerAllSerialQueryRpc::ClearBgpRpkiServerAllSerialQueryRpc()
{
    yang_name = "clear-bgp-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerAllSerialQueryRpc::~ClearBgpRpkiServerAllSerialQueryRpc()
{
}

bool ClearBgpRpkiServerAllSerialQueryRpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAllSerialQueryRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all-serial-query";

    return path_buffer.str();

}

EntityPath ClearBgpRpkiServerAllSerialQueryRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQueryRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiServerAllSerialQueryRpc::get_children()
{
    return children;
}

void ClearBgpRpkiServerAllSerialQueryRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAllSerialQueryRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAllSerialQueryRpc>();
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAllSerialQueryRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAllSerialQueryRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerAllRpc::ClearBgpRpkiServerAllRpc()
{
    yang_name = "clear-bgp-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerAllRpc::~ClearBgpRpkiServerAllRpc()
{
}

bool ClearBgpRpkiServerAllRpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiServerAllRpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiServerAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-all";

    return path_buffer.str();

}

EntityPath ClearBgpRpkiServerAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiServerAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiServerAllRpc::get_children()
{
    return children;
}

void ClearBgpRpkiServerAllRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiServerAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerAllRpc>();
}

std::string ClearBgpRpkiServerAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiServerRpkiServerRpc::ClearBgpRpkiServerRpkiServerRpc()
    :
    rpki_server{YType::str, "rpki-server"}
{
    yang_name = "clear-bgp-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiServerRpkiServerRpc::~ClearBgpRpkiServerRpkiServerRpc()
{
}

bool ClearBgpRpkiServerRpkiServerRpc::has_data() const
{
    return rpki_server.is_set;
}

bool ClearBgpRpkiServerRpkiServerRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(rpki_server.operation);
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-server-rpki-server";

    return path_buffer.str();

}

EntityPath ClearBgpRpkiServerRpkiServerRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpki_server.is_set || is_set(rpki_server.operation)) leaf_name_data.push_back(rpki_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiServerRpkiServerRpc::get_children()
{
    return children;
}

void ClearBgpRpkiServerRpkiServerRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rpki-server")
    {
        rpki_server = value;
    }
}

std::shared_ptr<Entity> ClearBgpRpkiServerRpkiServerRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiServerRpkiServerRpc>();
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiServerRpkiServerRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiServerRpkiServerRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpRpkiValidationIpv4Rpc::ClearBgpRpkiValidationIpv4Rpc()
{
    yang_name = "clear-bgp-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpRpkiValidationIpv4Rpc::~ClearBgpRpkiValidationIpv4Rpc()
{
}

bool ClearBgpRpkiValidationIpv4Rpc::has_data() const
{
    return false;
}

bool ClearBgpRpkiValidationIpv4Rpc::has_operation() const
{
    return is_set(operation);
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-rpki-validation-ipv4";

    return path_buffer.str();

}

EntityPath ClearBgpRpkiValidationIpv4Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiValidationIpv4Rpc::get_children()
{
    return children;
}

void ClearBgpRpkiValidationIpv4Rpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv4Rpc::clone_ptr() const
{
    return std::make_shared<ClearBgpRpkiValidationIpv4Rpc>();
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpRpkiValidationIpv4Rpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpRpkiValidationIpv4Rpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

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

EntityPath ClearBgpRpkiValidationIpv6Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationIpv6Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiValidationIpv6Rpc::get_children()
{
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

EntityPath ClearBgpRpkiValidationRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpRpkiValidationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpRpkiValidationRpc::get_children()
{
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

EntityPath ClearBgpShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpShutdownRpc::get_children()
{
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

EntityPath ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
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

EntityPath ClearBgpUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqAddressFamilyRpc::get_children()
{
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
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
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

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpUpdateOutqNeighborIpAddrRefreshRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
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

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
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

ClearBgpUpdateOutqNeighborIpAddrRpc::ClearBgpUpdateOutqNeighborIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqNeighborIpAddrRpc::~ClearBgpUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
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

EntityPath ClearBgpUpdateOutqProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpUpdateOutqProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqProcessRpc::get_children()
{
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
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRpc()
    :
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpUpdateOutqUpdateGroupUpdateParentRpc()
    :
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
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

ClearBgpUpdateOutqUpdateGroupRpc::ClearBgpUpdateOutqUpdateGroupRpc()
    :
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpUpdateOutqUpdateGroupRpc::~ClearBgpUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpUpdateOutqUpdateGroupRpc::has_data() const
{
    return update_group.is_set;
}

bool ClearBgpUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group.is_set || is_set(update_group.operation)) leaf_name_data.push_back(update_group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "update-group")
    {
        update_group = value;
    }
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

ClearBgpVersionIpAddrIpNetmaskRpc::ClearBgpVersionIpAddrIpNetmaskRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-version-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpAddrIpNetmaskRpc::~ClearBgpVersionIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionIpAddrRpc::ClearBgpVersionIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-version-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpAddrRpc::~ClearBgpVersionIpAddrRpc()
{
}

bool ClearBgpVersionIpAddrRpc::has_data() const
{
    return ip_addr.is_set;
}

bool ClearBgpVersionIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
    }
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

ClearBgpVersionIpPrefixRpc::ClearBgpVersionIpPrefixRpc()
    :
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-version-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionIpPrefixRpc::~ClearBgpVersionIpPrefixRpc()
{
}

bool ClearBgpVersionIpPrefixRpc::has_data() const
{
    return ip_prefix.is_set;
}

bool ClearBgpVersionIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
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

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-version-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpAddrRpc::ClearBgpVersionAfiSafiIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-version-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpAddrRpc::~ClearBgpVersionAfiSafiIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpPrefixRpc::ClearBgpVersionAfiSafiIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpPrefixRpc::~ClearBgpVersionAfiSafiIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::~ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpAddrRpc::ClearBgpVersionAfiSafiRdIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpAddrRpc::~ClearBgpVersionAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpPrefixRpc::ClearBgpVersionAfiSafiRdIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpPrefixRpc::~ClearBgpVersionAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv4AddrRpc::ClearBgpVersionAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4AddrRpc::~ClearBgpVersionAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv4PrefixRpc::ClearBgpVersionAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4PrefixRpc::~ClearBgpVersionAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv4AddrRpc::ClearBgpVersionAfiSafiRdIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4AddrRpc::~ClearBgpVersionAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::ClearBgpVersionAfiSafiVrfIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4AddrRpc::~ClearBgpVersionAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiNetworkRpc::ClearBgpVersionAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"}
{
    yang_name = "clear-bgp-version-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiNetworkRpc::~ClearBgpVersionAfiSafiNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set;
}

bool ClearBgpVersionAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpVersionAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdNetworkRpc::ClearBgpVersionAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdNetworkRpc::~ClearBgpVersionAfiSafiRdNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfNetworkRpc::ClearBgpVersionAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfNetworkRpc::~ClearBgpVersionAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::ClearBgpVersionAfiSafiRtConstraintNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "clear-bgp-version-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRtConstraintNetworkRpc::~ClearBgpVersionAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpVersionAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRtConstraintNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::~ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv6AddrRpc::ClearBgpVersionAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6AddrRpc::~ClearBgpVersionAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpVersionAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpVersionAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiIpv6PrefixRpc::ClearBgpVersionAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiIpv6PrefixRpc::~ClearBgpVersionAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpVersionAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpVersionAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdRpc::ClearBgpVersionAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdRpc::~ClearBgpVersionAfiSafiRdRpc()
{
}

bool ClearBgpVersionAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfRpc::ClearBgpVersionAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfRpc::~ClearBgpVersionAfiSafiVrfRpc()
{
}

bool ClearBgpVersionAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRpc::ClearBgpVersionAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"}
{
    yang_name = "clear-bgp-version-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRpc::~ClearBgpVersionAfiSafiRpc()
{
}

bool ClearBgpVersionAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set;
}

bool ClearBgpVersionAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation);
}

std::string ClearBgpVersionAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
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

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::ClearBgpVersionAfiSafiSrPolicyPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiSrPolicyPrefixRpc::~ClearBgpVersionAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpVersionAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiSrPolicyPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::ClearBgpVersionAfiSafiRdIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4PrefixRpc::~ClearBgpVersionAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "clear-bgp-version-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::ClearBgpVersionAfiSafiVrfIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::~ClearBgpVersionAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6AddrRpc::ClearBgpVersionAfiSafiRdIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6AddrRpc::~ClearBgpVersionAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::ClearBgpVersionAfiSafiRdIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-version-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiRdIpv6PrefixRpc::~ClearBgpVersionAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpVersionAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiRdIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::ClearBgpVersionAfiSafiVrfIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6AddrRpc::~ClearBgpVersionAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::ClearBgpVersionAfiSafiVrfIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::~ClearBgpVersionAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpAddrIpNetmaskRpc::ClearBgpVersionVrfIpAddrIpNetmaskRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpAddrIpNetmaskRpc::~ClearBgpVersionVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::has_data() const
{
    return ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpAddrRpc::ClearBgpVersionVrfIpAddrRpc()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpAddrRpc::~ClearBgpVersionVrfIpAddrRpc()
{
}

bool ClearBgpVersionVrfIpAddrRpc::has_data() const
{
    return ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfIpPrefixRpc::ClearBgpVersionVrfIpPrefixRpc()
    :
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfIpPrefixRpc::~ClearBgpVersionVrfIpPrefixRpc()
{
}

bool ClearBgpVersionVrfIpPrefixRpc::has_data() const
{
    return ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::ClearBgpVersionVrfAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::~ClearBgpVersionVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::ClearBgpVersionVrfAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv4AddrRpc::~ClearBgpVersionVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiNetworkRpc::ClearBgpVersionVrfAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiNetworkRpc::~ClearBgpVersionVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRdNetworkRpc::ClearBgpVersionVrfAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRdNetworkRpc::~ClearBgpVersionVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::ClearBgpVersionVrfAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiVrfNetworkRpc::~ClearBgpVersionVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpVersionVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::ClearBgpVersionVrfAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6AddrRpc::~ClearBgpVersionVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::ClearBgpVersionVrfAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::~ClearBgpVersionVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpVersionVrfAfiSafiRdRpc::ClearBgpVersionVrfAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-version-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpVersionVrfAfiSafiRdRpc::~ClearBgpVersionVrfAfiSafiRdRpc()
{
}

bool ClearBgpVersionVrfAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpVersionVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpVersionVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-version-vrf-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpVersionVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpVersionVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpVersionVrfAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpVersionVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
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


}
}

