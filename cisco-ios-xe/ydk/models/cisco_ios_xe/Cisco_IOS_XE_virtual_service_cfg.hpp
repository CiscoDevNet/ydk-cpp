#ifndef _CISCO_IOS_XE_VIRTUAL_SERVICE_CFG_
#define _CISCO_IOS_XE_VIRTUAL_SERVICE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_virtual_service_cfg {

class VirtualServiceCfgData : public ydk::Entity
{
    public:
        VirtualServiceCfgData();
        ~VirtualServiceCfgData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Apps; //type: VirtualServiceCfgData::Apps
        class Controls; //type: VirtualServiceCfgData::Controls

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Apps> apps;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Controls> controls; // presence node
        
}; // VirtualServiceCfgData


class VirtualServiceCfgData::Apps : public ydk::Entity
{
    public:
        Apps();
        ~Apps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class App; //type: VirtualServiceCfgData::Apps::App

        ydk::YList app;
        
}; // VirtualServiceCfgData::Apps


class VirtualServiceCfgData::Apps::App : public ydk::Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf application_name; //type: string
        class ApplicationNetworkResource; //type: VirtualServiceCfgData::Apps::App::ApplicationNetworkResource
        class ApplicationResourceProfile; //type: VirtualServiceCfgData::Apps::App::ApplicationResourceProfile
        class ApplicationAttachedDevice; //type: VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Apps::App::ApplicationNetworkResource> application_network_resource;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Apps::App::ApplicationResourceProfile> application_resource_profile;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice> application_attached_device;
        
}; // VirtualServiceCfgData::Apps::App


class VirtualServiceCfgData::Apps::App::ApplicationNetworkResource : public ydk::Entity
{
    public:
        ApplicationNetworkResource();
        ~ApplicationNetworkResource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vnic_gateway_0; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_name_1; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_address_1; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_netmask_1; //type: string
        ydk::YLeaf virtualportgroup_application_default_gateway_1; //type: string
        ydk::YLeaf nameserver_0; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_default_gateway_1; //type: uint8
        ydk::YLeaf vnic_gateway_1; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_name_2; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_address_2; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_netmask_2; //type: string
        ydk::YLeaf virtualportgroup_application_gateway_2; //type: string
        ydk::YLeaf nameserver_1; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_default_gateway_2; //type: uint8
        ydk::YLeaf vnic_gateway_2; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_name_3; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_address_3; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_netmask_3; //type: string
        ydk::YLeaf virtualportgroup_application_gateway_3; //type: string
        ydk::YLeaf nameserver2; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_default_gateway_3; //type: uint8
        ydk::YLeaf vnic_gateway_3; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_name_4; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_address_4; //type: string
        ydk::YLeaf virtualportgroup_guest_ip_netmask_4; //type: string
        ydk::YLeaf virtualportgroup_application_gateway_4; //type: string
        ydk::YLeaf nameserver_3; //type: string
        ydk::YLeaf virtualportgroup_guest_interface_default_gateway_4; //type: uint8
        ydk::YLeaf management_interface_name; //type: string
        ydk::YLeaf management_guest_ip_address; //type: string
        ydk::YLeaf management_guest_ip_netmask; //type: string
        ydk::YLeaf management_application_gateway; //type: string
        ydk::YLeaf nameseerver4; //type: string
        ydk::YLeaf management_guest_interface_default_gateway; //type: uint8
        class ApplicationMacAddress; //type: VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_cfg::VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress> application_mac_address;
        
}; // VirtualServiceCfgData::Apps::App::ApplicationNetworkResource


class VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress : public ydk::Entity
{
    public:
        ApplicationMacAddress();
        ~ApplicationMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf mac_interface_name; //type: string

}; // VirtualServiceCfgData::Apps::App::ApplicationNetworkResource::ApplicationMacAddress


class VirtualServiceCfgData::Apps::App::ApplicationResourceProfile : public ydk::Entity
{
    public:
        ApplicationResourceProfile();
        ~ApplicationResourceProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf vcpu; //type: uint16
        ydk::YLeaf cpu_units; //type: uint16
        ydk::YLeaf memory_capacity_mb; //type: uint16
        ydk::YLeaf disk_size_mb; //type: uint16
        ydk::YLeaf pkg_profile_name; //type: string

}; // VirtualServiceCfgData::Apps::App::ApplicationResourceProfile


class VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice : public ydk::Entity
{
    public:
        ApplicationAttachedDevice();
        ~ApplicationAttachedDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf device_name; //type: string

}; // VirtualServiceCfgData::Apps::App::ApplicationAttachedDevice


class VirtualServiceCfgData::Controls : public ydk::Entity
{
    public:
        Controls();
        ~Controls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf application_hosting_infra_enable_statue; //type: uint8

}; // VirtualServiceCfgData::Controls


}
}

#endif /* _CISCO_IOS_XE_VIRTUAL_SERVICE_CFG_ */

