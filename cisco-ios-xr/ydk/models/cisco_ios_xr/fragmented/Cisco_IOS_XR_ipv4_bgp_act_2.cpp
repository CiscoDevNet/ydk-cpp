
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_act_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_act {

ClearBgpInstanceAsGracefulRpc::ClearBgpInstanceAsGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceAsGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-as-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAsGracefulRpc::~ClearBgpInstanceAsGracefulRpc()
{
}

bool ClearBgpInstanceAsGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAsGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAsGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAsGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAsGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAsGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAsGracefulRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAsGracefulRpc::Input::Input()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-as-graceful";
}

ClearBgpInstanceAsGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceAsGracefulRpc::Input::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAsGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAsGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAsGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as-graceful/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAsGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAsGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAsRpc::ClearBgpInstanceAsRpc()
    :
    input(std::make_shared<ClearBgpInstanceAsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-as"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAsRpc::~ClearBgpInstanceAsRpc()
{
}

bool ClearBgpInstanceAsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAsRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAsRpc::Input::Input()
    :
    as_number{YType::str, "as-number"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-as";
}

ClearBgpInstanceAsRpc::Input::~Input()
{
}

bool ClearBgpInstanceAsRpc::Input::has_data() const
{
    return as_number.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceAsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceAsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-as/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAsRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-addr-ip-netmask";
}

ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathIpAddrRpc::ClearBgpInstanceBestpathIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpAddrRpc::~ClearBgpInstanceBestpathIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-addr";
}

ClearBgpInstanceBestpathIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathIpPrefixRpc::ClearBgpInstanceBestpathIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathIpPrefixRpc::~ClearBgpInstanceBestpathIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathIpPrefixRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-ip-prefix";
}

ClearBgpInstanceBestpathIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathIpPrefixRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask";
}

ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::ClearBgpInstanceBestpathAfiSafiIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-addr";
}

ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ip-prefix";
}

ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ip-prefix/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-addr";
}

ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix";
}

ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ip_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-addr";
}

ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-prefix";
}

ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiNetworkRpc::ClearBgpInstanceBestpathAfiSafiNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiNetworkRpc::~ClearBgpInstanceBestpathAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-network";
}

ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::ClearBgpInstanceBestpathAfiSafiRdNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::~ClearBgpInstanceBestpathAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-network";
}

ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::~ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-network";
}

ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rt-constraint-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::~ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rt-constraint-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rt_constraint_network{YType::str, "rt-constraint-network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rt-constraint-network";
}

ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rt_constraint_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rt_constraint_network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rt-constraint-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rt_constraint_network.is_set || is_set(rt_constraint_network.operation)) leaf_name_data.push_back(rt_constraint_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRtConstraintNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::~ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_tunnel_network{YType::str, "ipv4-tunnel-network"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network";
}

ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_tunnel_network.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_tunnel_network.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv4-tunnel-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_tunnel_network.is_set || is_set(ipv4_tunnel_network.operation)) leaf_name_data.push_back(ipv4_tunnel_network.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv4TunnelNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-addr";
}

ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-ipv6-prefix";
}

ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdRpc::ClearBgpInstanceBestpathAfiSafiRdRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdRpc::~ClearBgpInstanceBestpathAfiSafiRdRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd";
}

ClearBgpInstanceBestpathAfiSafiRdRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfRpc::ClearBgpInstanceBestpathAfiSafiVrfRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfRpc::~ClearBgpInstanceBestpathAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf";
}

ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRpc::ClearBgpInstanceBestpathAfiSafiRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRpc::~ClearBgpInstanceBestpathAfiSafiRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi";
}

ClearBgpInstanceBestpathAfiSafiRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::~ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    sr_policy_prefix{YType::str, "sr-policy-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix";
}

ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| sr_policy_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(sr_policy_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-sr-policy-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (sr_policy_prefix.is_set || is_set(sr_policy_prefix.operation)) leaf_name_data.push_back(sr_policy_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiSrPolicyPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    bridge_domain_name{YType::str, "bridge-domain-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix";
}

ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| bridge_domain_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(bridge_domain_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-bridge-domain-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.operation)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiBridgeDomainIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    mp2mp{YType::str, "mp2mp"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix";
}

ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| mp2mp.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(mp2mp.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-mp2mp-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (mp2mp.is_set || is_set(mp2mp.operation)) leaf_name_data.push_back(mp2mp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiMp2MpIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask";
}

ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    rd{YType::str, "rd"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix";
}

ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| rd.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(rd.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-rd-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiRdIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::~ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix";
}

ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-afi-safi-vrf-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathAfiSafiVrfIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::~ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    ip_netmask{YType::str, "ip-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask";
}

ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| ip_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(ip_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr-ip-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.operation)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrIpNetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfIpAddrRpc::ClearBgpInstanceBestpathVrfIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpAddrRpc::~ClearBgpInstanceBestpathVrfIpAddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-addr";
}

ClearBgpInstanceBestpathVrfIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.operation)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfIpPrefixRpc::ClearBgpInstanceBestpathVrfIpPrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfIpPrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-ip-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfIpPrefixRpc::~ClearBgpInstanceBestpathVrfIpPrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfIpPrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpPrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfIpPrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpPrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfIpPrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_prefix{YType::str, "ip-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-ip-prefix";
}

ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-ip-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ip_prefix.is_set || is_set(ip_prefix.operation)) leaf_name_data.push_back(ip_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfIpPrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv4_mask{YType::str, "ipv4-mask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| ipv4_mask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(ipv4_mask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr-ipv4-mask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrIpv4MaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_addr{YType::str, "ipv4-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv4-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_addr.is_set || is_set(ipv4_addr.operation)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv4AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-network";
}

ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd-network";
}

ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::~ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    network{YType::str, "network"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| network.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(network.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf-network/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfNetworkRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    ipv6_netmask{YType::str, "ipv6-netmask"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| ipv6_netmask.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(ipv6_netmask.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr-ipv6-netmask/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (ipv6_netmask.is_set || is_set(ipv6_netmask.operation)) leaf_name_data.push_back(ipv6_netmask.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrIpv6NetmaskRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_addr{YType::str, "ipv6-addr"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_addr.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_addr.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-addr/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.operation)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6AddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::~ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix";
}

ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::ClearBgpInstanceBestpathVrfAfiSafiRdRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::~ClearBgpInstanceBestpathVrfAfiSafiRdRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    rd{YType::str, "rd"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-rd";
}

ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| rd.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(rd.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-rd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRdRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::ClearBgpInstanceBestpathVrfAfiSafiVrfRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::~ClearBgpInstanceBestpathVrfAfiSafiVrfRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi-vrf";
}

ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set
	|| vrf_name.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation)
	|| is_set(vrf_name.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiVrfRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceBestpathVrfAfiSafiRpc::ClearBgpInstanceBestpathVrfAfiSafiRpc()
    :
    input(std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-bestpath-vrf-afi-safi"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceBestpathVrfAfiSafiRpc::~ClearBgpInstanceBestpathVrfAfiSafiRpc()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceBestpathVrfAfiSafiRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    vrf_all{YType::str, "vrf-all"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-bestpath-vrf-afi-safi";
}

ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::~Input()
{
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| vrf_all.is_set;
}

bool ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(vrf_all.operation);
}

std::string ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-bestpath-vrf-afi-safi/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (vrf_all.is_set || is_set(vrf_all.operation)) leaf_name_data.push_back(vrf_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceBestpathVrfAfiSafiRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceExternalGracefulRpc::ClearBgpInstanceExternalGracefulRpc()
    :
    input(std::make_shared<ClearBgpInstanceExternalGracefulRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-external-graceful"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceExternalGracefulRpc::~ClearBgpInstanceExternalGracefulRpc()
{
}

bool ClearBgpInstanceExternalGracefulRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceExternalGracefulRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceExternalGracefulRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external-graceful";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceExternalGracefulRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceExternalGracefulRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceExternalGracefulRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalGracefulRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceExternalGracefulRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceExternalGracefulRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-external-graceful";
}

ClearBgpInstanceExternalGracefulRpc::Input::~Input()
{
}

bool ClearBgpInstanceExternalGracefulRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternalGracefulRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceExternalGracefulRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceExternalGracefulRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external-graceful/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceExternalGracefulRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalGracefulRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceExternalGracefulRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceExternalRpc::ClearBgpInstanceExternalRpc()
    :
    input(std::make_shared<ClearBgpInstanceExternalRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-external"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceExternalRpc::~ClearBgpInstanceExternalRpc()
{
}

bool ClearBgpInstanceExternalRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceExternalRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceExternalRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceExternalRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceExternalRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceExternalRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceExternalRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceExternalRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-external";
}

ClearBgpInstanceExternalRpc::Input::~Input()
{
}

bool ClearBgpInstanceExternalRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceExternalRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceExternalRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceExternalRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-external/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceExternalRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceExternalRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceExternalRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ipv4-prefix";
}

ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv4_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv4_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv4-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv4PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-dampening-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::~ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-dampening-ipv6-prefix";
}

ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-dampening-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiDampeningIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc()
    :
    input(std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::~ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::Input()
    :
    afi_safi_name{YType::enumeration, "afi-safi-name"},
    instance_name{YType::str, "instance-name"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix";
}

ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::~Input()
{
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_data() const
{
    return afi_safi_name.is_set
	|| instance_name.is_set
	|| ipv6_prefix.is_set;
}

bool ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi_name.operation)
	|| is_set(instance_name.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-afi-safi-flap-statistics-ipv6-prefix/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi_name.is_set || is_set(afi_safi_name.operation)) leaf_name_data.push_back(afi_safi_name.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceAfiSafiFlapStatisticsIpv6PrefixRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceNexthopPerformanceStatisticsRpc::ClearBgpInstanceNexthopPerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-nexthop-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceNexthopPerformanceStatisticsRpc::~ClearBgpInstanceNexthopPerformanceStatisticsRpc()
{
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopPerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceNexthopPerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-nexthop-performance-statistics";
}

ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-performance-statistics/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceNexthopPerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceNexthopRegistrationIpAddrRpc::ClearBgpInstanceNexthopRegistrationIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-nexthop-registration-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceNexthopRegistrationIpAddrRpc::~ClearBgpInstanceNexthopRegistrationIpAddrRpc()
{
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-registration-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopRegistrationIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceNexthopRegistrationIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-nexthop-registration-ip-addr";
}

ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-nexthop-registration-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceNexthopRegistrationIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstancePeerDropsAllRpc::ClearBgpInstancePeerDropsAllRpc()
    :
    input(std::make_shared<ClearBgpInstancePeerDropsAllRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-peer-drops-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePeerDropsAllRpc::~ClearBgpInstancePeerDropsAllRpc()
{
}

bool ClearBgpInstancePeerDropsAllRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePeerDropsAllRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePeerDropsAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-all";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePeerDropsAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePeerDropsAllRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePeerDropsAllRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstancePeerDropsAllRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-peer-drops-all";
}

ClearBgpInstancePeerDropsAllRpc::Input::~Input()
{
}

bool ClearBgpInstancePeerDropsAllRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePeerDropsAllRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstancePeerDropsAllRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePeerDropsAllRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-all/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsAllRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsAllRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePeerDropsAllRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstancePeerDropsIpAddrRpc::ClearBgpInstancePeerDropsIpAddrRpc()
    :
    input(std::make_shared<ClearBgpInstancePeerDropsIpAddrRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-peer-drops-ip-addr"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePeerDropsIpAddrRpc::~ClearBgpInstancePeerDropsIpAddrRpc()
{
}

bool ClearBgpInstancePeerDropsIpAddrRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePeerDropsIpAddrRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePeerDropsIpAddrRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-ip-addr";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePeerDropsIpAddrRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddrRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePeerDropsIpAddrRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsIpAddrRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePeerDropsIpAddrRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstancePeerDropsIpAddrRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    ip_addr{YType::str, "ip-addr"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-peer-drops-ip-addr";
}

ClearBgpInstancePeerDropsIpAddrRpc::Input::~Input()
{
}

bool ClearBgpInstancePeerDropsIpAddrRpc::Input::has_data() const
{
    return instance_name.is_set
	|| ip_addr.is_set;
}

bool ClearBgpInstancePeerDropsIpAddrRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(ip_addr.operation);
}

std::string ClearBgpInstancePeerDropsIpAddrRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePeerDropsIpAddrRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-peer-drops-ip-addr/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstancePeerDropsIpAddrRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePeerDropsIpAddrRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePeerDropsIpAddrRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstancePerformanceStatisticsRpc::ClearBgpInstancePerformanceStatisticsRpc()
    :
    input(std::make_shared<ClearBgpInstancePerformanceStatisticsRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-performance-statistics"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstancePerformanceStatisticsRpc::~ClearBgpInstancePerformanceStatisticsRpc()
{
}

bool ClearBgpInstancePerformanceStatisticsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstancePerformanceStatisticsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstancePerformanceStatisticsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-performance-statistics";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePerformanceStatisticsRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatisticsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstancePerformanceStatisticsRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePerformanceStatisticsRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstancePerformanceStatisticsRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstancePerformanceStatisticsRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-performance-statistics";
}

ClearBgpInstancePerformanceStatisticsRpc::Input::~Input()
{
}

bool ClearBgpInstancePerformanceStatisticsRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstancePerformanceStatisticsRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstancePerformanceStatisticsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstancePerformanceStatisticsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-performance-statistics/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstancePerformanceStatisticsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstancePerformanceStatisticsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstancePerformanceStatisticsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceRpkiServerAllSerialQueryRpc::ClearBgpInstanceRpkiServerAllSerialQueryRpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-all-serial-query"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerAllSerialQueryRpc::~ClearBgpInstanceRpkiServerAllSerialQueryRpc()
{
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all-serial-query";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllSerialQueryRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerAllSerialQueryRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-all-serial-query";
}

ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all-serial-query/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerAllSerialQueryRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceRpkiServerAllRpc::ClearBgpInstanceRpkiServerAllRpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerAllRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-all"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerAllRpc::~ClearBgpInstanceRpkiServerAllRpc()
{
}

bool ClearBgpInstanceRpkiServerAllRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerAllRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerAllRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerAllRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerAllRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerAllRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiServerAllRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-all";
}

ClearBgpInstanceRpkiServerAllRpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerAllRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiServerAllRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiServerAllRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerAllRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-all/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerAllRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerAllRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerAllRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceRpkiServerRpkiServerRpc::ClearBgpInstanceRpkiServerRpkiServerRpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiServerRpkiServerRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-server-rpki-server"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiServerRpkiServerRpc::~ClearBgpInstanceRpkiServerRpkiServerRpc()
{
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiServerRpkiServerRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-rpki-server";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerRpkiServerRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServerRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiServerRpkiServerRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerRpkiServerRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiServerRpkiServerRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiServerRpkiServerRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"},
    rpki_server{YType::str, "rpki-server"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-server-rpki-server";
}

ClearBgpInstanceRpkiServerRpkiServerRpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::Input::has_data() const
{
    return instance_name.is_set
	|| rpki_server.is_set;
}

bool ClearBgpInstanceRpkiServerRpkiServerRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation)
	|| is_set(rpki_server.operation);
}

std::string ClearBgpInstanceRpkiServerRpkiServerRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiServerRpkiServerRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-server-rpki-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (rpki_server.is_set || is_set(rpki_server.operation)) leaf_name_data.push_back(rpki_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBgpInstanceRpkiServerRpkiServerRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiServerRpkiServerRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiServerRpkiServerRpc::Input::set_value(const std::string & value_path, std::string value)
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

ClearBgpInstanceRpkiValidationIpv4Rpc::ClearBgpInstanceRpkiValidationIpv4Rpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidationIpv4Rpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation-ipv4"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationIpv4Rpc::~ClearBgpInstanceRpkiValidationIpv4Rpc()
{
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidationIpv4Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv4";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationIpv4Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidationIpv4Rpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv4Rpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidationIpv4Rpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiValidationIpv4Rpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation-ipv4";
}

ClearBgpInstanceRpkiValidationIpv4Rpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv4Rpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationIpv4Rpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationIpv4Rpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv4/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv4Rpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv4Rpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidationIpv4Rpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceRpkiValidationIpv6Rpc::ClearBgpInstanceRpkiValidationIpv6Rpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidationIpv6Rpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation-ipv6"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationIpv6Rpc::~ClearBgpInstanceRpkiValidationIpv6Rpc()
{
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidationIpv6Rpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv6";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationIpv6Rpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6Rpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidationIpv6Rpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv6Rpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidationIpv6Rpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiValidationIpv6Rpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation-ipv6";
}

ClearBgpInstanceRpkiValidationIpv6Rpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationIpv6Rpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationIpv6Rpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationIpv6Rpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation-ipv6/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationIpv6Rpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationIpv6Rpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidationIpv6Rpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}

ClearBgpInstanceRpkiValidationRpc::ClearBgpInstanceRpkiValidationRpc()
    :
    input(std::make_shared<ClearBgpInstanceRpkiValidationRpc::Input>())
{
    input->parent = this;

    yang_name = "clear-bgp-instance-rpki-validation"; yang_parent_name = "Cisco-IOS-XR-ipv4-bgp-act";
}

ClearBgpInstanceRpkiValidationRpc::~ClearBgpInstanceRpkiValidationRpc()
{
}

bool ClearBgpInstanceRpkiValidationRpc::has_data() const
{
    return (input !=  nullptr && input->has_data());
}

bool ClearBgpInstanceRpkiValidationRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation());
}

std::string ClearBgpInstanceRpkiValidationRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationRpc::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBgpInstanceRpkiValidationRpc::Input>();
        }
        return input;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationRpc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    return children;
}

void ClearBgpInstanceRpkiValidationRpc::set_value(const std::string & value_path, std::string value)
{
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

ClearBgpInstanceRpkiValidationRpc::Input::Input()
    :
    instance_name{YType::str, "instance-name"}
{
    yang_name = "input"; yang_parent_name = "clear-bgp-instance-rpki-validation";
}

ClearBgpInstanceRpkiValidationRpc::Input::~Input()
{
}

bool ClearBgpInstanceRpkiValidationRpc::Input::has_data() const
{
    return instance_name.is_set;
}

bool ClearBgpInstanceRpkiValidationRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(instance_name.operation);
}

std::string ClearBgpInstanceRpkiValidationRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBgpInstanceRpkiValidationRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-bgp-act:clear-bgp-instance-rpki-validation/" << get_segment_path();
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

std::shared_ptr<Entity> ClearBgpInstanceRpkiValidationRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBgpInstanceRpkiValidationRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBgpInstanceRpkiValidationRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
}


}
}

