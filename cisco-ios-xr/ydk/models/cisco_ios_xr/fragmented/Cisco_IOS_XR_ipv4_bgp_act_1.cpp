
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-afi-safi-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::~ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAsGracefulRpc::ClearBgpInstanceAsGracefulRpc()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAsGracefulRpc::~ClearBgpInstanceAsGracefulRpc()
{
}

bool ClearBgpInstanceAsGracefulRpc::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAsGracefulRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAsGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceAsGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAsGracefulRpc>();
}

std::string ClearBgpInstanceAsGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAsGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAsGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAsRpc::ClearBgpInstanceAsRpc()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAsRpc::~ClearBgpInstanceAsRpc()
{
}

bool ClearBgpInstanceAsRpc::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAsRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceAsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAsRpc>();
}

std::string ClearBgpInstanceAsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathIpAddrIpNetmaskRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-bestpath-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathIpAddrRpc::ClearBgpInstanceBestpathIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-bestpath-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpAddrRpc::~ClearBgpInstanceBestpathIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpAddrRpc>();
}

std::string ClearBgpInstanceBestpathIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathIpPrefixRpc::ClearBgpInstanceBestpathIpPrefixRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpPrefixRpc::~ClearBgpInstanceBestpathIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathIpPrefixRpc::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathIpPrefixRpc>();
}

std::string ClearBgpInstanceBestpathIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::ClearBgpInstanceBestpathAfiSafiIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiNetworkRpc::ClearBgpInstanceBestpathAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiNetworkRpc::~ClearBgpInstanceBestpathAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiNetworkRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::ClearBgpInstanceBestpathAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::~ClearBgpInstanceBestpathAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetworkRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::~ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::~ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.operation)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.operation)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdRpc::ClearBgpInstanceBestpathAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdRpc::~ClearBgpInstanceBestpathAfiSafiRdRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfRpc::ClearBgpInstanceBestpathAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfRpc::~ClearBgpInstanceBestpathAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRpc::ClearBgpInstanceBestpathAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRpc::~ClearBgpInstanceBestpathAfiSafiRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.operation)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (mp2mp.is_set || is_set(mp2mp.operation)) leaf_name_data.push_back(mp2mp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "mp2mp")
    {
        mp2mp = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc>();
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfIpAddrRpc::ClearBgpInstanceBestpathVrfIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpAddrRpc::~ClearBgpInstanceBestpathVrfIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpAddrRpc>();
}

std::string ClearBgpInstanceBestpathVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfIpPrefixRpc::ClearBgpInstanceBestpathVrfIpPrefixRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpPrefixRpc::~ClearBgpInstanceBestpathVrfIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfIpPrefixRpc>();
}

std::string ClearBgpInstanceBestpathVrfIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::ClearBgpInstanceBestpathVrfAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::~ClearBgpInstanceBestpathVrfAfiSafiRdRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::ClearBgpInstanceBestpathVrfAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::~ClearBgpInstanceBestpathVrfAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceBestpathVrfAfiSafiRpc::ClearBgpInstanceBestpathVrfAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRpc::~ClearBgpInstanceBestpathVrfAfiSafiRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceBestpathVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceBestpathVrfAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRpc>();
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceBestpathVrfAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceExternalGracefulRpc::ClearBgpInstanceExternalGracefulRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceExternalGracefulRpc::~ClearBgpInstanceExternalGracefulRpc()
{
}

bool ClearBgpInstanceExternalGracefulRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternalGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceExternalGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceExternalGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceExternalGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceExternalGracefulRpc>();
}

std::string ClearBgpInstanceExternalGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceExternalGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceExternalGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceExternalRpc::ClearBgpInstanceExternalRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceExternalRpc::~ClearBgpInstanceExternalRpc()
{
}

bool ClearBgpInstanceExternalRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternalRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceExternalRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceExternalRpc::get_children()
{
    return children;
}

void ClearBgpInstanceExternalRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceExternalRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceExternalRpc>();
}

std::string ClearBgpInstanceExternalRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceExternalRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceExternalRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc>();
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceNexthopPerformanceStatisticsRpc::ClearBgpInstanceNexthopPerformanceStatisticsRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceNexthopPerformanceStatisticsRpc::~ClearBgpInstanceNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstanceNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceNexthopPerformanceStatisticsRpc>();
}

std::string ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceNexthopRegistrationIpAddrRpc::ClearBgpInstanceNexthopRegistrationIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceNexthopRegistrationIpAddrRpc::~ClearBgpInstanceNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-registration-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddrRpc>();
}

std::string ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstancePeerDropsAllRpc::ClearBgpInstancePeerDropsAllRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePeerDropsAllRpc::~ClearBgpInstancePeerDropsAllRpc()
{
}

bool ClearBgpInstancePeerDropsAllRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePeerDropsAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstancePeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-all";

    return path_buffer.str();

}

EntityPath ClearBgpInstancePeerDropsAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstancePeerDropsAllRpc::get_children()
{
    return children;
}

void ClearBgpInstancePeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePeerDropsAllRpc>();
}

std::string ClearBgpInstancePeerDropsAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePeerDropsAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePeerDropsAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstancePeerDropsIpAddrRpc::ClearBgpInstancePeerDropsIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePeerDropsIpAddrRpc::~ClearBgpInstancePeerDropsIpAddrRpc()
{
}

bool ClearBgpInstancePeerDropsIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstancePeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstancePeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstancePeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstancePeerDropsIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstancePeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePeerDropsIpAddrRpc>();
}

std::string ClearBgpInstancePeerDropsIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePeerDropsIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePeerDropsIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstancePerformanceStatisticsRpc::ClearBgpInstancePerformanceStatisticsRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePerformanceStatisticsRpc::~ClearBgpInstancePerformanceStatisticsRpc()
{
}

bool ClearBgpInstancePerformanceStatisticsRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstancePerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-performance-statistics";

    return path_buffer.str();

}

EntityPath ClearBgpInstancePerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstancePerformanceStatisticsRpc::get_children()
{
    return children;
}

void ClearBgpInstancePerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatisticsRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstancePerformanceStatisticsRpc>();
}

std::string ClearBgpInstancePerformanceStatisticsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstancePerformanceStatisticsRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstancePerformanceStatisticsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiServerAllSerialQueryRpc::ClearBgpInstanceRpkiServerAllSerialQueryRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerAllSerialQueryRpc::~ClearBgpInstanceRpkiServerAllSerialQueryRpc()
{
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all-serial-query";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiServerAllSerialQueryRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQueryRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerAllSerialQueryRpc>();
}

std::string ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiServerAllRpc::ClearBgpInstanceRpkiServerAllRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerAllRpc::~ClearBgpInstanceRpkiServerAllRpc()
{
}

bool ClearBgpInstanceRpkiServerAllRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiServerAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiServerAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiServerAllRpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiServerAllRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerAllRpc>();
}

std::string ClearBgpInstanceRpkiServerAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiServerRpkiServerRpc::ClearBgpInstanceRpkiServerRpkiServerRpc()
    :
    instance_name{YType::str, "instance-name"},
    rpki_server{YType::str, "rpki-server"}
{
    yang_name = "clear-bgp-instance-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerRpkiServerRpc::~ClearBgpInstanceRpkiServerRpkiServerRpc()
{
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::has_data() const
{
    return instance_name.is_set
	|| rpki_server.is_set;
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(rpki_server.operation);
}

std::string ClearBgpInstanceRpkiServerRpkiServerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-rpki-server";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiServerRpkiServerRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rpki_server.is_set || is_set(rpki_server.operation)) leaf_name_data.push_back(rpki_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiServerRpkiServerRpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiServerRpkiServerRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "rpki-server")
    {
        rpki_server = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServerRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiServerRpkiServerRpc>();
}

std::string ClearBgpInstanceRpkiServerRpkiServerRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiServerRpkiServerRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiServerRpkiServerRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiValidationIpv4Rpc::ClearBgpInstanceRpkiValidationIpv4Rpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationIpv4Rpc::~ClearBgpInstanceRpkiValidationIpv4Rpc()
{
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationIpv4Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv4";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiValidationIpv4Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiValidationIpv4Rpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiValidationIpv4Rpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4Rpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidationIpv4Rpc>();
}

std::string ClearBgpInstanceRpkiValidationIpv4Rpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidationIpv4Rpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidationIpv4Rpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiValidationIpv6Rpc::ClearBgpInstanceRpkiValidationIpv6Rpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-rpki-validation-ipv6"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationIpv6Rpc::~ClearBgpInstanceRpkiValidationIpv6Rpc()
{
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationIpv6Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv6";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiValidationIpv6Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiValidationIpv6Rpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiValidationIpv6Rpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6Rpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidationIpv6Rpc>();
}

std::string ClearBgpInstanceRpkiValidationIpv6Rpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidationIpv6Rpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidationIpv6Rpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceRpkiValidationRpc::ClearBgpInstanceRpkiValidationRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-rpki-validation"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationRpc::~ClearBgpInstanceRpkiValidationRpc()
{
}

bool ClearBgpInstanceRpkiValidationRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceRpkiValidationRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceRpkiValidationRpc::get_children()
{
    return children;
}

void ClearBgpInstanceRpkiValidationRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceRpkiValidationRpc>();
}

std::string ClearBgpInstanceRpkiValidationRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceRpkiValidationRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceRpkiValidationRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceShutdownRpc::ClearBgpInstanceShutdownRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-shutdown"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceShutdownRpc::~ClearBgpInstanceShutdownRpc()
{
}

bool ClearBgpInstanceShutdownRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceShutdownRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-shutdown";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceShutdownRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceShutdownRpc::get_children()
{
    return children;
}

void ClearBgpInstanceShutdownRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceShutdownRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceShutdownRpc>();
}

std::string ClearBgpInstanceShutdownRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceShutdownRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceShutdownRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-update-outq-address-family-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::~ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqAddressFamilyUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqAddressFamilyRpc::ClearBgpInstanceUpdateOutqAddressFamilyRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-update-outq-address-family"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqAddressFamilyRpc::~ClearBgpInstanceUpdateOutqAddressFamilyRpc()
{
}

bool ClearBgpInstanceUpdateOutqAddressFamilyRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqAddressFamilyRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-address-family";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqAddressFamilyRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqAddressFamilyRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqAddressFamilyRpc>();
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqAddressFamilyRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::~ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-refresh"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::~ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-refresh";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrRefreshRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::~ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::ClearBgpInstanceUpdateOutqNeighborIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-update-outq-neighbor-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::~ClearBgpInstanceUpdateOutqNeighborIpAddrRpc()
{
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-neighbor-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqNeighborIpAddrRpc>();
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqNeighborIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqProcessRpc::ClearBgpInstanceUpdateOutqProcessRpc()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-update-outq-process"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqProcessRpc::~ClearBgpInstanceUpdateOutqProcessRpc()
{
}

bool ClearBgpInstanceUpdateOutqProcessRpc::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceUpdateOutqProcessRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceUpdateOutqProcessRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-process";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqProcessRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqProcessRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqProcessRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqProcessRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqProcessRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqProcessRpc>();
}

std::string ClearBgpInstanceUpdateOutqProcessRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqProcessRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqProcessRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    sub_group{YType::str, "sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::has_data() const
{
    return instance_name.is_set
	|| sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    refresh_sub_group{YType::str, "refresh-sub-group"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::~ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_data() const
{
    return instance_name.is_set
	|| refresh_sub_group.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(refresh_sub_group.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-sub-group-refresh-sub-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupSubGroupRefreshSubGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group-update-parent"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::~ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group-update-parent";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupUpdateParentRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceUpdateOutqUpdateGroupRpc::ClearBgpInstanceUpdateOutqUpdateGroupRpc()
    :
    instance_name{YType::str, "instance-name"},
    update_group{YType::str, "update-group"}
{
    yang_name = "clear-bgp-instance-update-outq-update-group"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceUpdateOutqUpdateGroupRpc::~ClearBgpInstanceUpdateOutqUpdateGroupRpc()
{
}

bool ClearBgpInstanceUpdateOutqUpdateGroupRpc::has_data() const
{
    return instance_name.is_set
	|| update_group.is_set;
}

bool ClearBgpInstanceUpdateOutqUpdateGroupRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(update_group.operation);
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-update-outq-update-group";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_children()
{
    return children;
}

void ClearBgpInstanceUpdateOutqUpdateGroupRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "update-group")
    {
        update_group = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceUpdateOutqUpdateGroupRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceUpdateOutqUpdateGroupRpc>();
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceUpdateOutqUpdateGroupRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionIpAddrIpNetmaskRpc::ClearBgpInstanceVersionIpAddrIpNetmaskRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-version-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionIpAddrIpNetmaskRpc::~ClearBgpInstanceVersionIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceVersionIpAddrIpNetmaskRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionIpAddrRpc::ClearBgpInstanceVersionIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-version-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionIpAddrRpc::~ClearBgpInstanceVersionIpAddrRpc()
{
}

bool ClearBgpInstanceVersionIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceVersionIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpAddrRpc>();
}

std::string ClearBgpInstanceVersionIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionIpPrefixRpc::ClearBgpInstanceVersionIpPrefixRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-version-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionIpPrefixRpc::~ClearBgpInstanceVersionIpPrefixRpc()
{
}

bool ClearBgpInstanceVersionIpPrefixRpc::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceVersionIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionIpPrefixRpc>();
}

std::string ClearBgpInstanceVersionIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::~ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpAddrRpc::ClearBgpInstanceVersionAfiSafiIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpAddrRpc::~ClearBgpInstanceVersionAfiSafiIpAddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpAddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpPrefixRpc::ClearBgpInstanceVersionAfiSafiIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpPrefixRpc::~ClearBgpInstanceVersionAfiSafiIpPrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpPrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::ClearBgpInstanceVersionAfiSafiRdIpAddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::~ClearBgpInstanceVersionAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpAddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::~ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::ClearBgpInstanceVersionAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::~ClearBgpInstanceVersionAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::~ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::~ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiNetworkRpc::ClearBgpInstanceVersionAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiNetworkRpc::~ClearBgpInstanceVersionAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpInstanceVersionAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiNetworkRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdNetworkRpc::ClearBgpInstanceVersionAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdNetworkRpc::~ClearBgpInstanceVersionAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdNetworkRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::ClearBgpInstanceVersionAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::~ClearBgpInstanceVersionAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::~ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.operation)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "rt-constraint-network")
    {
        rt_constraint_network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRtConstraintNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::~ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.operation)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-tunnel-network")
    {
        ipv4_tunnel_network = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv4TunnelNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::ClearBgpInstanceVersionAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::~ClearBgpInstanceVersionAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::~ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdRpc::ClearBgpInstanceVersionAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdRpc::~ClearBgpInstanceVersionAfiSafiRdRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfRpc::ClearBgpInstanceVersionAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfRpc::~ClearBgpInstanceVersionAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRpc::ClearBgpInstanceVersionAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRpc::~ClearBgpInstanceVersionAfiSafiRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::~ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.operation)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "sr-policy-prefix")
    {
        sr_policy_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiSrPolicyPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiBridgeDomainIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::~ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (mp2mp.is_set || is_set(mp2mp.operation)) leaf_name_data.push_back(mp2mp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "mp2mp")
    {
        mp2mp = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiMp2MpIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::~ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::~ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "rd")
    {
        rd = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiRdIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::~ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionAfiSafiVrfIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::~ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc>();
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpAddrIpNetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfIpAddrRpc::ClearBgpInstanceVersionVrfIpAddrRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfIpAddrRpc::~ClearBgpInstanceVersionVrfIpAddrRpc()
{
}

bool ClearBgpInstanceVersionVrfIpAddrRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfIpAddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpAddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpAddrRpc>();
}

std::string ClearBgpInstanceVersionVrfIpAddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpAddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpAddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfIpPrefixRpc::ClearBgpInstanceVersionVrfIpPrefixRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfIpPrefixRpc::~ClearBgpInstanceVersionVrfIpPrefixRpc()
{
}

bool ClearBgpInstanceVersionVrfIpPrefixRpc::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-ip-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfIpPrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "ip-prefix")
    {
        ip_prefix = value;
    }
    if(value_path == "vrf-all")
    {
        vrf_all = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfIpPrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfIpPrefixRpc>();
}

std::string ClearBgpInstanceVersionVrfIpPrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfIpPrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfIpPrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4AddrIpv4MaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv4AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::ClearBgpInstanceVersionVrfAfiSafiNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::~ClearBgpInstanceVersionVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiNetworkRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::~ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiRdNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::~ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiVrfNetworkRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6AddrRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::~ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiIpv6PrefixRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiRdRpc::ClearBgpInstanceVersionVrfAfiSafiRdRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiRdRpc::~ClearBgpInstanceVersionVrfAfiSafiRdRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRdRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-rd";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi-name")
    {
        afi_safi_name = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRdRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRdRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiRdRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiVrfRpc::ClearBgpInstanceVersionVrfAfiSafiVrfRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiVrfRpc::~ClearBgpInstanceVersionVrfAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi-vrf";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiVrfRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiVrfRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiVrfRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVersionVrfAfiSafiRpc::ClearBgpInstanceVersionVrfAfiSafiRpc()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-version-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVersionVrfAfiSafiRpc::~ClearBgpInstanceVersionVrfAfiSafiRpc()
{
}

bool ClearBgpInstanceVersionVrfAfiSafiRpc::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVersionVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVersionVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-version-vrf-afi-safi";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVersionVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVersionVrfAfiSafiRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVersionVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVersionVrfAfiSafiRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVersionVrfAfiSafiRpc>();
}

std::string ClearBgpInstanceVersionVrfAfiSafiRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVersionVrfAfiSafiRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVersionVrfAfiSafiRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAllGracefulRpc::ClearBgpInstanceVrfAllGracefulRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-all-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAllGracefulRpc::~ClearBgpInstanceVrfAllGracefulRpc()
{
}

bool ClearBgpInstanceVrfAllGracefulRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAllGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAllGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAllGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAllGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAllGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAllGracefulRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAllGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAllGracefulRpc>();
}

std::string ClearBgpInstanceVrfAllGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAllGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAllGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfAllRpc::ClearBgpInstanceVrfAllRpc()
    :
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfAllRpc::~ClearBgpInstanceVrfAllRpc()
{
}

bool ClearBgpInstanceVrfAllRpc::has_data() const
{
    return instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfAllRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-all";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfAllRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfAllRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVrfAllRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfAllRpc>();
}

std::string ClearBgpInstanceVrfAllRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfAllRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfAllRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ClearBgpInstanceVrfIpAddrGracefulRpc::ClearBgpInstanceVrfIpAddrGracefulRpc()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "clear-bgp-instance-vrf-ip-addr-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceVrfIpAddrGracefulRpc::~ClearBgpInstanceVrfIpAddrGracefulRpc()
{
}

bool ClearBgpInstanceVrfIpAddrGracefulRpc::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceVrfIpAddrGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceVrfIpAddrGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-vrf-ip-addr-graceful";

    return path_buffer.str();

}

EntityPath ClearBgpInstanceVrfIpAddrGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ClearBgpInstanceVrfIpAddrGracefulRpc::get_children()
{
    return children;
}

void ClearBgpInstanceVrfIpAddrGracefulRpc::set_value(const std::string & value_path, std::string value)
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

std::shared_ptr<Entity> ClearBgpInstanceVrfIpAddrGracefulRpc::clone_ptr() const
{
    return std::make_shared<ClearBgpInstanceVrfIpAddrGracefulRpc>();
}

std::string ClearBgpInstanceVrfIpAddrGracefulRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClearBgpInstanceVrfIpAddrGracefulRpc::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClearBgpInstanceVrfIpAddrGracefulRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}


}
}

