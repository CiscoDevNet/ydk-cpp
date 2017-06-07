#ifndef _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_
#define _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_virtual_service_oper {

class VirtualServices : public Entity
{
    public:
        VirtualServices();
        ~VirtualServices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class VirtualService; //type: VirtualServices::VirtualService

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService> > virtual_service;
        
}; // VirtualServices


class VirtualServices::VirtualService : public Entity
{
    public:
        VirtualService();
        ~VirtualService();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Details; //type: VirtualServices::VirtualService::Details
        class Utilization; //type: VirtualServices::VirtualService::Utilization
        class NetworkUtils; //type: VirtualServices::VirtualService::NetworkUtils
        class StorageUtils; //type: VirtualServices::VirtualService::StorageUtils
        class AttachedDevices; //type: VirtualServices::VirtualService::AttachedDevices
        class NetworkInterfaces; //type: VirtualServices::VirtualService::NetworkInterfaces
        class GuestRoutes; //type: VirtualServices::VirtualService::GuestRoutes

        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::AttachedDevices> attached_devices;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details> details;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::GuestRoutes> guest_routes;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkInterfaces> network_interfaces;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkUtils> network_utils;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::StorageUtils> storage_utils;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization> utilization;
        
}; // VirtualServices::VirtualService


class VirtualServices::VirtualService::Details : public Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: string
        YLeaf activated_profile_name; //type: string
        YLeaf guest_interface; //type: string
        class PackageInformation; //type: VirtualServices::VirtualService::Details::PackageInformation
        class DetailedGuestStatus; //type: VirtualServices::VirtualService::Details::DetailedGuestStatus
        class ResourceReservation; //type: VirtualServices::VirtualService::Details::ResourceReservation
        class ResourceAdmission; //type: VirtualServices::VirtualService::Details::ResourceAdmission

        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::DetailedGuestStatus> detailed_guest_status;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation> package_information;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::ResourceAdmission> resource_admission;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::ResourceReservation> resource_reservation;
        
}; // VirtualServices::VirtualService::Details


class VirtualServices::VirtualService::Details::PackageInformation : public Entity
{
    public:
        PackageInformation();
        ~PackageInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf path; //type: string
        class Application; //type: VirtualServices::VirtualService::Details::PackageInformation::Application
        class Signing; //type: VirtualServices::VirtualService::Details::PackageInformation::Signing
        class Licensing; //type: VirtualServices::VirtualService::Details::PackageInformation::Licensing

        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Application> application;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Licensing> licensing;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Signing> signing;
        
}; // VirtualServices::VirtualService::Details::PackageInformation


class VirtualServices::VirtualService::Details::PackageInformation::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf installed_version; //type: string
        YLeaf description; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Application


class VirtualServices::VirtualService::Details::PackageInformation::Signing : public Entity
{
    public:
        Signing();
        ~Signing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_type; //type: string
        YLeaf method; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Signing


class VirtualServices::VirtualService::Details::PackageInformation::Licensing : public Entity
{
    public:
        Licensing();
        ~Licensing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf version; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Licensing


class VirtualServices::VirtualService::Details::DetailedGuestStatus : public Entity
{
    public:
        DetailedGuestStatus();
        ~DetailedGuestStatus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Processes; //type: VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes

        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes> processes;
        
}; // VirtualServices::VirtualService::Details::DetailedGuestStatus


class VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes : public Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf status; //type: string
        YLeaf pid; //type: string
        YLeaf uptime; //type: string
        YLeaf memory; //type: string

}; // VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes


class VirtualServices::VirtualService::Details::ResourceReservation : public Entity
{
    public:
        ResourceReservation();
        ~ResourceReservation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disk; //type: uint64
        YLeaf memory; //type: uint64
        YLeaf cpu; //type: uint64

}; // VirtualServices::VirtualService::Details::ResourceReservation


class VirtualServices::VirtualService::Details::ResourceAdmission : public Entity
{
    public:
        ResourceAdmission();
        ~ResourceAdmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf state; //type: string
        YLeaf disk_space; //type: string
        YLeaf memory; //type: string
        YLeaf cpu; //type: uint64
        YLeaf vcpus; //type: string

}; // VirtualServices::VirtualService::Details::ResourceAdmission


class VirtualServices::VirtualService::Utilization : public Entity
{
    public:
        Utilization();
        ~Utilization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class CpuUtil; //type: VirtualServices::VirtualService::Utilization::CpuUtil
        class MemoryUtil; //type: VirtualServices::VirtualService::Utilization::MemoryUtil

        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization::CpuUtil> cpu_util;
        std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization::MemoryUtil> memory_util;
        
}; // VirtualServices::VirtualService::Utilization


class VirtualServices::VirtualService::Utilization::CpuUtil : public Entity
{
    public:
        CpuUtil();
        ~CpuUtil();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf requested_application_util; //type: uint64
        YLeaf actual_application_util; //type: uint64
        YLeaf cpu_state; //type: string

}; // VirtualServices::VirtualService::Utilization::CpuUtil


class VirtualServices::VirtualService::Utilization::MemoryUtil : public Entity
{
    public:
        MemoryUtil();
        ~MemoryUtil();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf memory_allocation; //type: string
        YLeaf memory_used; //type: string

}; // VirtualServices::VirtualService::Utilization::MemoryUtil


class VirtualServices::VirtualService::NetworkUtils : public Entity
{
    public:
        NetworkUtils();
        ~NetworkUtils();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NetworkUtil; //type: VirtualServices::VirtualService::NetworkUtils::NetworkUtil

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkUtils::NetworkUtil> > network_util;
        
}; // VirtualServices::VirtualService::NetworkUtils


class VirtualServices::VirtualService::NetworkUtils::NetworkUtil : public Entity
{
    public:
        NetworkUtil();
        ~NetworkUtil();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf alias; //type: string
        YLeaf rx_packets; //type: uint64
        YLeaf rx_bytes; //type: uint64
        YLeaf rx_errors; //type: uint64
        YLeaf tx_packets; //type: uint64
        YLeaf tx_bytes; //type: uint64
        YLeaf tx_errors; //type: uint64

}; // VirtualServices::VirtualService::NetworkUtils::NetworkUtil


class VirtualServices::VirtualService::StorageUtils : public Entity
{
    public:
        StorageUtils();
        ~StorageUtils();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class StorageUtil; //type: VirtualServices::VirtualService::StorageUtils::StorageUtil

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::StorageUtils::StorageUtil> > storage_util;
        
}; // VirtualServices::VirtualService::StorageUtils


class VirtualServices::VirtualService::StorageUtils::StorageUtil : public Entity
{
    public:
        StorageUtil();
        ~StorageUtil();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf alias; //type: string
        YLeaf rd_bytes; //type: uint64
        YLeaf rd_requests; //type: uint64
        YLeaf errors; //type: uint64
        YLeaf wr_bytes; //type: uint64
        YLeaf wr_requests; //type: uint64
        YLeaf capacity; //type: uint64
        YLeaf available; //type: string
        YLeaf used; //type: uint64
        YLeaf usage; //type: string

}; // VirtualServices::VirtualService::StorageUtils::StorageUtil


class VirtualServices::VirtualService::AttachedDevices : public Entity
{
    public:
        AttachedDevices();
        ~AttachedDevices();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AttachedDevice; //type: VirtualServices::VirtualService::AttachedDevices::AttachedDevice

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::AttachedDevices::AttachedDevice> > attached_device;
        
}; // VirtualServices::VirtualService::AttachedDevices


class VirtualServices::VirtualService::AttachedDevices::AttachedDevice : public Entity
{
    public:
        AttachedDevice();
        ~AttachedDevice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf type; //type: string
        YLeaf alias; //type: string

}; // VirtualServices::VirtualService::AttachedDevices::AttachedDevice


class VirtualServices::VirtualService::NetworkInterfaces : public Entity
{
    public:
        NetworkInterfaces();
        ~NetworkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NetworkInterface; //type: VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface> > network_interface;
        
}; // VirtualServices::VirtualService::NetworkInterfaces


class VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface : public Entity
{
    public:
        NetworkInterface();
        ~NetworkInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mac_address; //type: string
        YLeaf attached_interface; //type: string

}; // VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface


class VirtualServices::VirtualService::GuestRoutes : public Entity
{
    public:
        GuestRoutes();
        ~GuestRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GuestRoute; //type: VirtualServices::VirtualService::GuestRoutes::GuestRoute

        std::vector<std::shared_ptr<Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::GuestRoutes::GuestRoute> > guest_route;
        
}; // VirtualServices::VirtualService::GuestRoutes


class VirtualServices::VirtualService::GuestRoutes::GuestRoute : public Entity
{
    public:
        GuestRoute();
        ~GuestRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route; //type: string

}; // VirtualServices::VirtualService::GuestRoutes::GuestRoute


}
}

#endif /* _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_ */

