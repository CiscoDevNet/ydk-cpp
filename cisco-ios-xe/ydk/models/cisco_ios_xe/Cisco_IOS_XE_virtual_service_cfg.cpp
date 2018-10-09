
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_virtual_service_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_virtual_service_cfg {

VirtualServiceCfgData::VirtualServiceCfgData()
    :
    apps(std::make_shared<VirtualServiceCfgData::Apps>())
    , controls(nullptr) // presence node
{
    apps->parent = this;

    yang_name = "virtual-service-cfg-data"; yang_parent_name = "Cisco-IOS-XE-virtual-service-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

VirtualServiceCfgData::~VirtualServiceCfgData()
{
}

bool VirtualServiceCfgData::has_data() const
{
    if (is_presence_container) return true;
    return (apps !=  nullptr && apps->has_data())
	|| (controls !=  nullptr && controls->has_data());
}

bool VirtualServiceCfgData::has_operation() const
{
    return is_set(yfilter)
	|| (apps !=  nullptr && apps->has_operation())
	|| (controls !=  nullptr && controls->has_operation());
}

std::string VirtualServiceCfgData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-cfg:virtual-service-cfg-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "apps")
    {
        if(apps == nullptr)
        {
            apps = std::make_shared<VirtualServiceCfgData::Apps>();
        }
        return apps;
    }

    if(child_yang_name == "controls")
    {
        if(controls == nullptr)
        {
            controls = std::make_shared<VirtualServiceCfgData::Controls>();
        }
        return controls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(apps != nullptr)
    {
        children["apps"] = apps;
    }

    if(controls != nullptr)
    {
        children["controls"] = controls;
    }

    return children;
}

void VirtualServiceCfgData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServiceCfgData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VirtualServiceCfgData::clone_ptr() const
{
    return std::make_shared<VirtualServiceCfgData>();
}

std::string VirtualServiceCfgData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string VirtualServiceCfgData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function VirtualServiceCfgData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VirtualServiceCfgData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool VirtualServiceCfgData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "apps" || name == "controls")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::Apps()
    :
    app(this, {"application_name"})
{

    yang_name = "apps"; yang_parent_name = "virtual-service-cfg-data"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualServiceCfgData::Apps::~Apps()
{
}

bool VirtualServiceCfgData::Apps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<app.len(); index++)
    {
        if(app[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServiceCfgData::Apps::has_operation() const
{
    for (std::size_t index=0; index<app.len(); index++)
    {
        if(app[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServiceCfgData::Apps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-cfg:virtual-service-cfg-data/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualServiceCfgData::Apps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "apps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "app")
    {
        auto c = std::make_shared<VirtualServiceCfgData::Apps::App>();
        c->parent = this;
        app.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : app.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServiceCfgData::Apps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServiceCfgData::Apps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServiceCfgData::Apps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::App::App()
    :
    application_name{YType::str, "application-name"}
        ,
    application_network_resource(std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationNetworkResource>())
    , application_resource_profile(std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationResourceProfile>())
    , application_attached_device(std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice>())
{
    application_network_resource->parent = this;
    application_resource_profile->parent = this;
    application_attached_device->parent = this;

    yang_name = "app"; yang_parent_name = "apps"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualServiceCfgData::Apps::App::~App()
{
}

bool VirtualServiceCfgData::Apps::App::has_data() const
{
    if (is_presence_container) return true;
    return application_name.is_set
	|| (application_network_resource !=  nullptr && application_network_resource->has_data())
	|| (application_resource_profile !=  nullptr && application_resource_profile->has_data())
	|| (application_attached_device !=  nullptr && application_attached_device->has_data());
}

bool VirtualServiceCfgData::Apps::App::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_name.yfilter)
	|| (application_network_resource !=  nullptr && application_network_resource->has_operation())
	|| (application_resource_profile !=  nullptr && application_resource_profile->has_operation())
	|| (application_attached_device !=  nullptr && application_attached_device->has_operation());
}

std::string VirtualServiceCfgData::Apps::App::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-cfg:virtual-service-cfg-data/apps/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualServiceCfgData::Apps::App::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "app";
    ADD_KEY_TOKEN(application_name, "application-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::App::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::App::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-network-resource")
    {
        if(application_network_resource == nullptr)
        {
            application_network_resource = std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationNetworkResource>();
        }
        return application_network_resource;
    }

    if(child_yang_name == "application-resource-profile")
    {
        if(application_resource_profile == nullptr)
        {
            application_resource_profile = std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationResourceProfile>();
        }
        return application_resource_profile;
    }

    if(child_yang_name == "application-attached-device")
    {
        if(application_attached_device == nullptr)
        {
            application_attached_device = std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice>();
        }
        return application_attached_device;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::App::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_network_resource != nullptr)
    {
        children["application-network-resource"] = application_network_resource;
    }

    if(application_resource_profile != nullptr)
    {
        children["application-resource-profile"] = application_resource_profile;
    }

    if(application_attached_device != nullptr)
    {
        children["application-attached-device"] = application_attached_device;
    }

    return children;
}

void VirtualServiceCfgData::Apps::App::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Apps::App::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Apps::App::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-network-resource" || name == "application-resource-profile" || name == "application-attached-device" || name == "application-name")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationNetworkResource()
    :
    vnic_gateway_0{YType::str, "vnic-gateway-0"},
    virtualportgroup_guest_interface_name_1{YType::str, "virtualportgroup-guest-interface-name-1"},
    virtualportgroup_guest_ip_address_1{YType::str, "virtualportgroup-guest-ip-address-1"},
    virtualportgroup_guest_ip_netmask_1{YType::str, "virtualportgroup-guest-ip-netmask-1"},
    virtualportgroup_application_default_gateway_1{YType::str, "virtualportgroup-application-default-gateway-1"},
    nameserver_0{YType::str, "nameserver-0"},
    virtualportgroup_guest_interface_default_gateway_1{YType::uint8, "virtualportgroup-guest-interface-default-gateway-1"},
    vnic_gateway_1{YType::str, "vnic-gateway-1"},
    virtualportgroup_guest_interface_name_2{YType::str, "virtualportgroup-guest-interface-name-2"},
    virtualportgroup_guest_ip_address_2{YType::str, "virtualportgroup-guest-ip-address-2"},
    virtualportgroup_guest_ip_netmask_2{YType::str, "virtualportgroup-guest-ip-netmask-2"},
    virtualportgroup_application_gateway_2{YType::str, "virtualportgroup-application-gateway-2"},
    nameserver_1{YType::str, "nameserver-1"},
    virtualportgroup_guest_interface_default_gateway_2{YType::uint8, "virtualportgroup-guest-interface-default-gateway-2"},
    vnic_gateway_2{YType::str, "vnic-gateway-2"},
    virtualportgroup_guest_interface_name_3{YType::str, "virtualportgroup-guest-interface-name-3"},
    virtualportgroup_guest_ip_address_3{YType::str, "virtualportgroup-guest-ip-address-3"},
    virtualportgroup_guest_ip_netmask_3{YType::str, "virtualportgroup-guest-ip-netmask-3"},
    virtualportgroup_application_gateway_3{YType::str, "virtualportgroup-application-gateway-3"},
    nameserver2{YType::str, "nameserver2"},
    virtualportgroup_guest_interface_default_gateway_3{YType::uint8, "virtualportgroup-guest-interface-default-gateway-3"},
    vnic_gateway_3{YType::str, "vnic-gateway-3"},
    virtualportgroup_guest_interface_name_4{YType::str, "virtualportgroup-guest-interface-name-4"},
    virtualportgroup_guest_ip_address_4{YType::str, "virtualportgroup-guest-ip-address-4"},
    virtualportgroup_guest_ip_netmask_4{YType::str, "virtualportgroup-guest-ip-netmask-4"},
    virtualportgroup_application_gateway_4{YType::str, "virtualportgroup-application-gateway-4"},
    nameserver_3{YType::str, "nameserver-3"},
    virtualportgroup_guest_interface_default_gateway_4{YType::uint8, "virtualportgroup-guest-interface-default-gateway-4"},
    management_interface_name{YType::str, "management-interface-name"},
    management_guest_ip_address{YType::str, "management-guest-ip-address"},
    management_guest_ip_netmask{YType::str, "management-guest-ip-netmask"},
    management_application_gateway{YType::str, "management-application-gateway"},
    nameseerver4{YType::str, "nameseerver4"},
    management_guest_interface_default_gateway{YType::uint8, "management-guest-interface-default-gateway"}
        ,
    application_mac_address(std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress>())
{
    application_mac_address->parent = this;

    yang_name = "application-network-resource"; yang_parent_name = "app"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::~ApplicationNetworkResource()
{
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::has_data() const
{
    if (is_presence_container) return true;
    return vnic_gateway_0.is_set
	|| virtualportgroup_guest_interface_name_1.is_set
	|| virtualportgroup_guest_ip_address_1.is_set
	|| virtualportgroup_guest_ip_netmask_1.is_set
	|| virtualportgroup_application_default_gateway_1.is_set
	|| nameserver_0.is_set
	|| virtualportgroup_guest_interface_default_gateway_1.is_set
	|| vnic_gateway_1.is_set
	|| virtualportgroup_guest_interface_name_2.is_set
	|| virtualportgroup_guest_ip_address_2.is_set
	|| virtualportgroup_guest_ip_netmask_2.is_set
	|| virtualportgroup_application_gateway_2.is_set
	|| nameserver_1.is_set
	|| virtualportgroup_guest_interface_default_gateway_2.is_set
	|| vnic_gateway_2.is_set
	|| virtualportgroup_guest_interface_name_3.is_set
	|| virtualportgroup_guest_ip_address_3.is_set
	|| virtualportgroup_guest_ip_netmask_3.is_set
	|| virtualportgroup_application_gateway_3.is_set
	|| nameserver2.is_set
	|| virtualportgroup_guest_interface_default_gateway_3.is_set
	|| vnic_gateway_3.is_set
	|| virtualportgroup_guest_interface_name_4.is_set
	|| virtualportgroup_guest_ip_address_4.is_set
	|| virtualportgroup_guest_ip_netmask_4.is_set
	|| virtualportgroup_application_gateway_4.is_set
	|| nameserver_3.is_set
	|| virtualportgroup_guest_interface_default_gateway_4.is_set
	|| management_interface_name.is_set
	|| management_guest_ip_address.is_set
	|| management_guest_ip_netmask.is_set
	|| management_application_gateway.is_set
	|| nameseerver4.is_set
	|| management_guest_interface_default_gateway.is_set
	|| (application_mac_address !=  nullptr && application_mac_address->has_data());
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnic_gateway_0.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_name_1.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_address_1.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_netmask_1.yfilter)
	|| ydk::is_set(virtualportgroup_application_default_gateway_1.yfilter)
	|| ydk::is_set(nameserver_0.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_default_gateway_1.yfilter)
	|| ydk::is_set(vnic_gateway_1.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_name_2.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_address_2.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_netmask_2.yfilter)
	|| ydk::is_set(virtualportgroup_application_gateway_2.yfilter)
	|| ydk::is_set(nameserver_1.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_default_gateway_2.yfilter)
	|| ydk::is_set(vnic_gateway_2.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_name_3.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_address_3.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_netmask_3.yfilter)
	|| ydk::is_set(virtualportgroup_application_gateway_3.yfilter)
	|| ydk::is_set(nameserver2.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_default_gateway_3.yfilter)
	|| ydk::is_set(vnic_gateway_3.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_name_4.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_address_4.yfilter)
	|| ydk::is_set(virtualportgroup_guest_ip_netmask_4.yfilter)
	|| ydk::is_set(virtualportgroup_application_gateway_4.yfilter)
	|| ydk::is_set(nameserver_3.yfilter)
	|| ydk::is_set(virtualportgroup_guest_interface_default_gateway_4.yfilter)
	|| ydk::is_set(management_interface_name.yfilter)
	|| ydk::is_set(management_guest_ip_address.yfilter)
	|| ydk::is_set(management_guest_ip_netmask.yfilter)
	|| ydk::is_set(management_application_gateway.yfilter)
	|| ydk::is_set(nameseerver4.yfilter)
	|| ydk::is_set(management_guest_interface_default_gateway.yfilter)
	|| (application_mac_address !=  nullptr && application_mac_address->has_operation());
}

std::string VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-network-resource";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnic_gateway_0.is_set || is_set(vnic_gateway_0.yfilter)) leaf_name_data.push_back(vnic_gateway_0.get_name_leafdata());
    if (virtualportgroup_guest_interface_name_1.is_set || is_set(virtualportgroup_guest_interface_name_1.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_name_1.get_name_leafdata());
    if (virtualportgroup_guest_ip_address_1.is_set || is_set(virtualportgroup_guest_ip_address_1.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_address_1.get_name_leafdata());
    if (virtualportgroup_guest_ip_netmask_1.is_set || is_set(virtualportgroup_guest_ip_netmask_1.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_netmask_1.get_name_leafdata());
    if (virtualportgroup_application_default_gateway_1.is_set || is_set(virtualportgroup_application_default_gateway_1.yfilter)) leaf_name_data.push_back(virtualportgroup_application_default_gateway_1.get_name_leafdata());
    if (nameserver_0.is_set || is_set(nameserver_0.yfilter)) leaf_name_data.push_back(nameserver_0.get_name_leafdata());
    if (virtualportgroup_guest_interface_default_gateway_1.is_set || is_set(virtualportgroup_guest_interface_default_gateway_1.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_default_gateway_1.get_name_leafdata());
    if (vnic_gateway_1.is_set || is_set(vnic_gateway_1.yfilter)) leaf_name_data.push_back(vnic_gateway_1.get_name_leafdata());
    if (virtualportgroup_guest_interface_name_2.is_set || is_set(virtualportgroup_guest_interface_name_2.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_name_2.get_name_leafdata());
    if (virtualportgroup_guest_ip_address_2.is_set || is_set(virtualportgroup_guest_ip_address_2.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_address_2.get_name_leafdata());
    if (virtualportgroup_guest_ip_netmask_2.is_set || is_set(virtualportgroup_guest_ip_netmask_2.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_netmask_2.get_name_leafdata());
    if (virtualportgroup_application_gateway_2.is_set || is_set(virtualportgroup_application_gateway_2.yfilter)) leaf_name_data.push_back(virtualportgroup_application_gateway_2.get_name_leafdata());
    if (nameserver_1.is_set || is_set(nameserver_1.yfilter)) leaf_name_data.push_back(nameserver_1.get_name_leafdata());
    if (virtualportgroup_guest_interface_default_gateway_2.is_set || is_set(virtualportgroup_guest_interface_default_gateway_2.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_default_gateway_2.get_name_leafdata());
    if (vnic_gateway_2.is_set || is_set(vnic_gateway_2.yfilter)) leaf_name_data.push_back(vnic_gateway_2.get_name_leafdata());
    if (virtualportgroup_guest_interface_name_3.is_set || is_set(virtualportgroup_guest_interface_name_3.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_name_3.get_name_leafdata());
    if (virtualportgroup_guest_ip_address_3.is_set || is_set(virtualportgroup_guest_ip_address_3.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_address_3.get_name_leafdata());
    if (virtualportgroup_guest_ip_netmask_3.is_set || is_set(virtualportgroup_guest_ip_netmask_3.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_netmask_3.get_name_leafdata());
    if (virtualportgroup_application_gateway_3.is_set || is_set(virtualportgroup_application_gateway_3.yfilter)) leaf_name_data.push_back(virtualportgroup_application_gateway_3.get_name_leafdata());
    if (nameserver2.is_set || is_set(nameserver2.yfilter)) leaf_name_data.push_back(nameserver2.get_name_leafdata());
    if (virtualportgroup_guest_interface_default_gateway_3.is_set || is_set(virtualportgroup_guest_interface_default_gateway_3.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_default_gateway_3.get_name_leafdata());
    if (vnic_gateway_3.is_set || is_set(vnic_gateway_3.yfilter)) leaf_name_data.push_back(vnic_gateway_3.get_name_leafdata());
    if (virtualportgroup_guest_interface_name_4.is_set || is_set(virtualportgroup_guest_interface_name_4.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_name_4.get_name_leafdata());
    if (virtualportgroup_guest_ip_address_4.is_set || is_set(virtualportgroup_guest_ip_address_4.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_address_4.get_name_leafdata());
    if (virtualportgroup_guest_ip_netmask_4.is_set || is_set(virtualportgroup_guest_ip_netmask_4.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_ip_netmask_4.get_name_leafdata());
    if (virtualportgroup_application_gateway_4.is_set || is_set(virtualportgroup_application_gateway_4.yfilter)) leaf_name_data.push_back(virtualportgroup_application_gateway_4.get_name_leafdata());
    if (nameserver_3.is_set || is_set(nameserver_3.yfilter)) leaf_name_data.push_back(nameserver_3.get_name_leafdata());
    if (virtualportgroup_guest_interface_default_gateway_4.is_set || is_set(virtualportgroup_guest_interface_default_gateway_4.yfilter)) leaf_name_data.push_back(virtualportgroup_guest_interface_default_gateway_4.get_name_leafdata());
    if (management_interface_name.is_set || is_set(management_interface_name.yfilter)) leaf_name_data.push_back(management_interface_name.get_name_leafdata());
    if (management_guest_ip_address.is_set || is_set(management_guest_ip_address.yfilter)) leaf_name_data.push_back(management_guest_ip_address.get_name_leafdata());
    if (management_guest_ip_netmask.is_set || is_set(management_guest_ip_netmask.yfilter)) leaf_name_data.push_back(management_guest_ip_netmask.get_name_leafdata());
    if (management_application_gateway.is_set || is_set(management_application_gateway.yfilter)) leaf_name_data.push_back(management_application_gateway.get_name_leafdata());
    if (nameseerver4.is_set || is_set(nameseerver4.yfilter)) leaf_name_data.push_back(nameseerver4.get_name_leafdata());
    if (management_guest_interface_default_gateway.is_set || is_set(management_guest_interface_default_gateway.yfilter)) leaf_name_data.push_back(management_guest_interface_default_gateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-mac-address")
    {
        if(application_mac_address == nullptr)
        {
            application_mac_address = std::make_shared<VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress>();
        }
        return application_mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_mac_address != nullptr)
    {
        children["application-mac-address"] = application_mac_address;
    }

    return children;
}

void VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnic-gateway-0")
    {
        vnic_gateway_0 = value;
        vnic_gateway_0.value_namespace = name_space;
        vnic_gateway_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-name-1")
    {
        virtualportgroup_guest_interface_name_1 = value;
        virtualportgroup_guest_interface_name_1.value_namespace = name_space;
        virtualportgroup_guest_interface_name_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-address-1")
    {
        virtualportgroup_guest_ip_address_1 = value;
        virtualportgroup_guest_ip_address_1.value_namespace = name_space;
        virtualportgroup_guest_ip_address_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-1")
    {
        virtualportgroup_guest_ip_netmask_1 = value;
        virtualportgroup_guest_ip_netmask_1.value_namespace = name_space;
        virtualportgroup_guest_ip_netmask_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-application-default-gateway-1")
    {
        virtualportgroup_application_default_gateway_1 = value;
        virtualportgroup_application_default_gateway_1.value_namespace = name_space;
        virtualportgroup_application_default_gateway_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver-0")
    {
        nameserver_0 = value;
        nameserver_0.value_namespace = name_space;
        nameserver_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-1")
    {
        virtualportgroup_guest_interface_default_gateway_1 = value;
        virtualportgroup_guest_interface_default_gateway_1.value_namespace = name_space;
        virtualportgroup_guest_interface_default_gateway_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnic-gateway-1")
    {
        vnic_gateway_1 = value;
        vnic_gateway_1.value_namespace = name_space;
        vnic_gateway_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-name-2")
    {
        virtualportgroup_guest_interface_name_2 = value;
        virtualportgroup_guest_interface_name_2.value_namespace = name_space;
        virtualportgroup_guest_interface_name_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-address-2")
    {
        virtualportgroup_guest_ip_address_2 = value;
        virtualportgroup_guest_ip_address_2.value_namespace = name_space;
        virtualportgroup_guest_ip_address_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-2")
    {
        virtualportgroup_guest_ip_netmask_2 = value;
        virtualportgroup_guest_ip_netmask_2.value_namespace = name_space;
        virtualportgroup_guest_ip_netmask_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-application-gateway-2")
    {
        virtualportgroup_application_gateway_2 = value;
        virtualportgroup_application_gateway_2.value_namespace = name_space;
        virtualportgroup_application_gateway_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver-1")
    {
        nameserver_1 = value;
        nameserver_1.value_namespace = name_space;
        nameserver_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-2")
    {
        virtualportgroup_guest_interface_default_gateway_2 = value;
        virtualportgroup_guest_interface_default_gateway_2.value_namespace = name_space;
        virtualportgroup_guest_interface_default_gateway_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnic-gateway-2")
    {
        vnic_gateway_2 = value;
        vnic_gateway_2.value_namespace = name_space;
        vnic_gateway_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-name-3")
    {
        virtualportgroup_guest_interface_name_3 = value;
        virtualportgroup_guest_interface_name_3.value_namespace = name_space;
        virtualportgroup_guest_interface_name_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-address-3")
    {
        virtualportgroup_guest_ip_address_3 = value;
        virtualportgroup_guest_ip_address_3.value_namespace = name_space;
        virtualportgroup_guest_ip_address_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-3")
    {
        virtualportgroup_guest_ip_netmask_3 = value;
        virtualportgroup_guest_ip_netmask_3.value_namespace = name_space;
        virtualportgroup_guest_ip_netmask_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-application-gateway-3")
    {
        virtualportgroup_application_gateway_3 = value;
        virtualportgroup_application_gateway_3.value_namespace = name_space;
        virtualportgroup_application_gateway_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver2")
    {
        nameserver2 = value;
        nameserver2.value_namespace = name_space;
        nameserver2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-3")
    {
        virtualportgroup_guest_interface_default_gateway_3 = value;
        virtualportgroup_guest_interface_default_gateway_3.value_namespace = name_space;
        virtualportgroup_guest_interface_default_gateway_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnic-gateway-3")
    {
        vnic_gateway_3 = value;
        vnic_gateway_3.value_namespace = name_space;
        vnic_gateway_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-name-4")
    {
        virtualportgroup_guest_interface_name_4 = value;
        virtualportgroup_guest_interface_name_4.value_namespace = name_space;
        virtualportgroup_guest_interface_name_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-address-4")
    {
        virtualportgroup_guest_ip_address_4 = value;
        virtualportgroup_guest_ip_address_4.value_namespace = name_space;
        virtualportgroup_guest_ip_address_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-4")
    {
        virtualportgroup_guest_ip_netmask_4 = value;
        virtualportgroup_guest_ip_netmask_4.value_namespace = name_space;
        virtualportgroup_guest_ip_netmask_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-application-gateway-4")
    {
        virtualportgroup_application_gateway_4 = value;
        virtualportgroup_application_gateway_4.value_namespace = name_space;
        virtualportgroup_application_gateway_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameserver-3")
    {
        nameserver_3 = value;
        nameserver_3.value_namespace = name_space;
        nameserver_3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-4")
    {
        virtualportgroup_guest_interface_default_gateway_4 = value;
        virtualportgroup_guest_interface_default_gateway_4.value_namespace = name_space;
        virtualportgroup_guest_interface_default_gateway_4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-interface-name")
    {
        management_interface_name = value;
        management_interface_name.value_namespace = name_space;
        management_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-guest-ip-address")
    {
        management_guest_ip_address = value;
        management_guest_ip_address.value_namespace = name_space;
        management_guest_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-guest-ip-netmask")
    {
        management_guest_ip_netmask = value;
        management_guest_ip_netmask.value_namespace = name_space;
        management_guest_ip_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-application-gateway")
    {
        management_application_gateway = value;
        management_application_gateway.value_namespace = name_space;
        management_application_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nameseerver4")
    {
        nameseerver4 = value;
        nameseerver4.value_namespace = name_space;
        nameseerver4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "management-guest-interface-default-gateway")
    {
        management_guest_interface_default_gateway = value;
        management_guest_interface_default_gateway.value_namespace = name_space;
        management_guest_interface_default_gateway.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnic-gateway-0")
    {
        vnic_gateway_0.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-name-1")
    {
        virtualportgroup_guest_interface_name_1.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-address-1")
    {
        virtualportgroup_guest_ip_address_1.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-1")
    {
        virtualportgroup_guest_ip_netmask_1.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-application-default-gateway-1")
    {
        virtualportgroup_application_default_gateway_1.yfilter = yfilter;
    }
    if(value_path == "nameserver-0")
    {
        nameserver_0.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-1")
    {
        virtualportgroup_guest_interface_default_gateway_1.yfilter = yfilter;
    }
    if(value_path == "vnic-gateway-1")
    {
        vnic_gateway_1.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-name-2")
    {
        virtualportgroup_guest_interface_name_2.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-address-2")
    {
        virtualportgroup_guest_ip_address_2.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-2")
    {
        virtualportgroup_guest_ip_netmask_2.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-application-gateway-2")
    {
        virtualportgroup_application_gateway_2.yfilter = yfilter;
    }
    if(value_path == "nameserver-1")
    {
        nameserver_1.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-2")
    {
        virtualportgroup_guest_interface_default_gateway_2.yfilter = yfilter;
    }
    if(value_path == "vnic-gateway-2")
    {
        vnic_gateway_2.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-name-3")
    {
        virtualportgroup_guest_interface_name_3.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-address-3")
    {
        virtualportgroup_guest_ip_address_3.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-3")
    {
        virtualportgroup_guest_ip_netmask_3.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-application-gateway-3")
    {
        virtualportgroup_application_gateway_3.yfilter = yfilter;
    }
    if(value_path == "nameserver2")
    {
        nameserver2.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-3")
    {
        virtualportgroup_guest_interface_default_gateway_3.yfilter = yfilter;
    }
    if(value_path == "vnic-gateway-3")
    {
        vnic_gateway_3.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-name-4")
    {
        virtualportgroup_guest_interface_name_4.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-address-4")
    {
        virtualportgroup_guest_ip_address_4.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-ip-netmask-4")
    {
        virtualportgroup_guest_ip_netmask_4.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-application-gateway-4")
    {
        virtualportgroup_application_gateway_4.yfilter = yfilter;
    }
    if(value_path == "nameserver-3")
    {
        nameserver_3.yfilter = yfilter;
    }
    if(value_path == "virtualportgroup-guest-interface-default-gateway-4")
    {
        virtualportgroup_guest_interface_default_gateway_4.yfilter = yfilter;
    }
    if(value_path == "management-interface-name")
    {
        management_interface_name.yfilter = yfilter;
    }
    if(value_path == "management-guest-ip-address")
    {
        management_guest_ip_address.yfilter = yfilter;
    }
    if(value_path == "management-guest-ip-netmask")
    {
        management_guest_ip_netmask.yfilter = yfilter;
    }
    if(value_path == "management-application-gateway")
    {
        management_application_gateway.yfilter = yfilter;
    }
    if(value_path == "nameseerver4")
    {
        nameseerver4.yfilter = yfilter;
    }
    if(value_path == "management-guest-interface-default-gateway")
    {
        management_guest_interface_default_gateway.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-mac-address" || name == "vnic-gateway-0" || name == "virtualportgroup-guest-interface-name-1" || name == "virtualportgroup-guest-ip-address-1" || name == "virtualportgroup-guest-ip-netmask-1" || name == "virtualportgroup-application-default-gateway-1" || name == "nameserver-0" || name == "virtualportgroup-guest-interface-default-gateway-1" || name == "vnic-gateway-1" || name == "virtualportgroup-guest-interface-name-2" || name == "virtualportgroup-guest-ip-address-2" || name == "virtualportgroup-guest-ip-netmask-2" || name == "virtualportgroup-application-gateway-2" || name == "nameserver-1" || name == "virtualportgroup-guest-interface-default-gateway-2" || name == "vnic-gateway-2" || name == "virtualportgroup-guest-interface-name-3" || name == "virtualportgroup-guest-ip-address-3" || name == "virtualportgroup-guest-ip-netmask-3" || name == "virtualportgroup-application-gateway-3" || name == "nameserver2" || name == "virtualportgroup-guest-interface-default-gateway-3" || name == "vnic-gateway-3" || name == "virtualportgroup-guest-interface-name-4" || name == "virtualportgroup-guest-ip-address-4" || name == "virtualportgroup-guest-ip-netmask-4" || name == "virtualportgroup-application-gateway-4" || name == "nameserver-3" || name == "virtualportgroup-guest-interface-default-gateway-4" || name == "management-interface-name" || name == "management-guest-ip-address" || name == "management-guest-ip-netmask" || name == "management-application-gateway" || name == "nameseerver4" || name == "management-guest-interface-default-gateway")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::ApplicationMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_interface_name{YType::str, "mac-interface-name"}
{

    yang_name = "application-mac-address"; yang_parent_name = "application-network-resource"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::~ApplicationMacAddress()
{
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mac_interface_name.is_set;
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_interface_name.yfilter);
}

std::string VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_interface_name.is_set || is_set(mac_interface_name.yfilter)) leaf_name_data.push_back(mac_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-interface-name")
    {
        mac_interface_name = value;
        mac_interface_name.value_namespace = name_space;
        mac_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-interface-name")
    {
        mac_interface_name.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-interface-name")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::ApplicationResourceProfile()
    :
    profile_name{YType::str, "profile-name"},
    vcpu{YType::uint16, "vcpu"},
    cpu_units{YType::uint16, "cpu-units"},
    memory_capacity_mb{YType::uint16, "memory-capacity-mb"},
    disk_size_mb{YType::uint16, "disk-size-mb"},
    pkg_profile_name{YType::str, "pkg-profile-name"}
{

    yang_name = "application-resource-profile"; yang_parent_name = "app"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::~ApplicationResourceProfile()
{
}

bool VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| vcpu.is_set
	|| cpu_units.is_set
	|| memory_capacity_mb.is_set
	|| disk_size_mb.is_set
	|| pkg_profile_name.is_set;
}

bool VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(vcpu.yfilter)
	|| ydk::is_set(cpu_units.yfilter)
	|| ydk::is_set(memory_capacity_mb.yfilter)
	|| ydk::is_set(disk_size_mb.yfilter)
	|| ydk::is_set(pkg_profile_name.yfilter);
}

std::string VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-resource-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (vcpu.is_set || is_set(vcpu.yfilter)) leaf_name_data.push_back(vcpu.get_name_leafdata());
    if (cpu_units.is_set || is_set(cpu_units.yfilter)) leaf_name_data.push_back(cpu_units.get_name_leafdata());
    if (memory_capacity_mb.is_set || is_set(memory_capacity_mb.yfilter)) leaf_name_data.push_back(memory_capacity_mb.get_name_leafdata());
    if (disk_size_mb.is_set || is_set(disk_size_mb.yfilter)) leaf_name_data.push_back(disk_size_mb.get_name_leafdata());
    if (pkg_profile_name.is_set || is_set(pkg_profile_name.yfilter)) leaf_name_data.push_back(pkg_profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcpu")
    {
        vcpu = value;
        vcpu.value_namespace = name_space;
        vcpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-units")
    {
        cpu_units = value;
        cpu_units.value_namespace = name_space;
        cpu_units.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-capacity-mb")
    {
        memory_capacity_mb = value;
        memory_capacity_mb.value_namespace = name_space;
        memory_capacity_mb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-size-mb")
    {
        disk_size_mb = value;
        disk_size_mb.value_namespace = name_space;
        disk_size_mb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkg-profile-name")
    {
        pkg_profile_name = value;
        pkg_profile_name.value_namespace = name_space;
        pkg_profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "vcpu")
    {
        vcpu.yfilter = yfilter;
    }
    if(value_path == "cpu-units")
    {
        cpu_units.yfilter = yfilter;
    }
    if(value_path == "memory-capacity-mb")
    {
        memory_capacity_mb.yfilter = yfilter;
    }
    if(value_path == "disk-size-mb")
    {
        disk_size_mb.yfilter = yfilter;
    }
    if(value_path == "pkg-profile-name")
    {
        pkg_profile_name.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Apps::App::ApplicationResourceProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name" || name == "vcpu" || name == "cpu-units" || name == "memory-capacity-mb" || name == "disk-size-mb" || name == "pkg-profile-name")
        return true;
    return false;
}

VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::ApplicationAttachedDevice()
    :
    device_name{YType::str, "device-name"}
{

    yang_name = "application-attached-device"; yang_parent_name = "app"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::~ApplicationAttachedDevice()
{
}

bool VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::has_data() const
{
    if (is_presence_container) return true;
    return device_name.is_set;
}

bool VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter);
}

std::string VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attached-device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name")
        return true;
    return false;
}

VirtualServiceCfgData::Controls::Controls()
    :
    application_hosting_infra_enable_statue{YType::uint8, "application-hosting-infra-enable-statue"}
{

    yang_name = "controls"; yang_parent_name = "virtual-service-cfg-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

VirtualServiceCfgData::Controls::~Controls()
{
}

bool VirtualServiceCfgData::Controls::has_data() const
{
    if (is_presence_container) return true;
    return application_hosting_infra_enable_statue.is_set;
}

bool VirtualServiceCfgData::Controls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_hosting_infra_enable_statue.yfilter);
}

std::string VirtualServiceCfgData::Controls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-cfg:virtual-service-cfg-data/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualServiceCfgData::Controls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServiceCfgData::Controls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_hosting_infra_enable_statue.is_set || is_set(application_hosting_infra_enable_statue.yfilter)) leaf_name_data.push_back(application_hosting_infra_enable_statue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServiceCfgData::Controls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServiceCfgData::Controls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServiceCfgData::Controls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-hosting-infra-enable-statue")
    {
        application_hosting_infra_enable_statue = value;
        application_hosting_infra_enable_statue.value_namespace = name_space;
        application_hosting_infra_enable_statue.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServiceCfgData::Controls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-hosting-infra-enable-statue")
    {
        application_hosting_infra_enable_statue.yfilter = yfilter;
    }
}

bool VirtualServiceCfgData::Controls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-hosting-infra-enable-statue")
        return true;
    return false;
}


}
}

