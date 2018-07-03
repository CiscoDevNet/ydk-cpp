#ifndef _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_
#define _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_virtual_service_oper {

class VirtualServices : public ydk::Entity
{
    public:
        VirtualServices();
        ~VirtualServices();

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

        class VirtualService; //type: VirtualServices::VirtualService

        ydk::YList virtual_service;
        
}; // VirtualServices


class VirtualServices::VirtualService : public ydk::Entity
{
    public:
        VirtualService();
        ~VirtualService();

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

        ydk::YLeaf name; //type: string
        class Details; //type: VirtualServices::VirtualService::Details
        class Utilization; //type: VirtualServices::VirtualService::Utilization
        class NetworkUtils; //type: VirtualServices::VirtualService::NetworkUtils
        class StorageUtils; //type: VirtualServices::VirtualService::StorageUtils
        class Processes; //type: VirtualServices::VirtualService::Processes
        class AttachedDevices; //type: VirtualServices::VirtualService::AttachedDevices
        class NetworkInterfaces; //type: VirtualServices::VirtualService::NetworkInterfaces
        class GuestRoutes; //type: VirtualServices::VirtualService::GuestRoutes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details> details;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization> utilization;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkUtils> network_utils;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::StorageUtils> storage_utils;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Processes> processes;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::AttachedDevices> attached_devices;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::NetworkInterfaces> network_interfaces;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::GuestRoutes> guest_routes;
        
}; // VirtualServices::VirtualService


class VirtualServices::VirtualService::Details : public ydk::Entity
{
    public:
        Details();
        ~Details();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: string
        ydk::YLeaf activated_profile_name; //type: string
        ydk::YLeaf guest_interface; //type: string
        class PackageInformation; //type: VirtualServices::VirtualService::Details::PackageInformation
        class DetailedGuestStatus; //type: VirtualServices::VirtualService::Details::DetailedGuestStatus
        class ResourceReservation; //type: VirtualServices::VirtualService::Details::ResourceReservation
        class ResourceAdmission; //type: VirtualServices::VirtualService::Details::ResourceAdmission

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation> package_information;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::DetailedGuestStatus> detailed_guest_status;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::ResourceReservation> resource_reservation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::ResourceAdmission> resource_admission;
        
}; // VirtualServices::VirtualService::Details


class VirtualServices::VirtualService::Details::PackageInformation : public ydk::Entity
{
    public:
        PackageInformation();
        ~PackageInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path; //type: string
        class Application; //type: VirtualServices::VirtualService::Details::PackageInformation::Application
        class Signing; //type: VirtualServices::VirtualService::Details::PackageInformation::Signing
        class Licensing; //type: VirtualServices::VirtualService::Details::PackageInformation::Licensing

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Application> application;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Signing> signing;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::PackageInformation::Licensing> licensing;
        
}; // VirtualServices::VirtualService::Details::PackageInformation


class VirtualServices::VirtualService::Details::PackageInformation::Application : public ydk::Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf installed_version; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf type; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Application


class VirtualServices::VirtualService::Details::PackageInformation::Signing : public ydk::Entity
{
    public:
        Signing();
        ~Signing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_type; //type: string
        ydk::YLeaf method; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Signing


class VirtualServices::VirtualService::Details::PackageInformation::Licensing : public ydk::Entity
{
    public:
        Licensing();
        ~Licensing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf version; //type: string

}; // VirtualServices::VirtualService::Details::PackageInformation::Licensing


class VirtualServices::VirtualService::Details::DetailedGuestStatus : public ydk::Entity
{
    public:
        DetailedGuestStatus();
        ~DetailedGuestStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Processes; //type: VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes> processes;
        
}; // VirtualServices::VirtualService::Details::DetailedGuestStatus


class VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf memory; //type: string

}; // VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes


class VirtualServices::VirtualService::Details::ResourceReservation : public ydk::Entity
{
    public:
        ResourceReservation();
        ~ResourceReservation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disk; //type: uint64
        ydk::YLeaf memory; //type: uint64
        ydk::YLeaf cpu; //type: uint64

}; // VirtualServices::VirtualService::Details::ResourceReservation


class VirtualServices::VirtualService::Details::ResourceAdmission : public ydk::Entity
{
    public:
        ResourceAdmission();
        ~ResourceAdmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: string
        ydk::YLeaf disk_space; //type: string
        ydk::YLeaf memory; //type: string
        ydk::YLeaf cpu; //type: uint64
        ydk::YLeaf vcpus; //type: string

}; // VirtualServices::VirtualService::Details::ResourceAdmission


class VirtualServices::VirtualService::Utilization : public ydk::Entity
{
    public:
        Utilization();
        ~Utilization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class CpuUtil; //type: VirtualServices::VirtualService::Utilization::CpuUtil
        class MemoryUtil; //type: VirtualServices::VirtualService::Utilization::MemoryUtil

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization::CpuUtil> cpu_util;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_virtual_service_oper::VirtualServices::VirtualService::Utilization::MemoryUtil> memory_util;
        
}; // VirtualServices::VirtualService::Utilization


class VirtualServices::VirtualService::Utilization::CpuUtil : public ydk::Entity
{
    public:
        CpuUtil();
        ~CpuUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf requested_application_util; //type: uint64
        ydk::YLeaf actual_application_util; //type: uint64
        ydk::YLeaf cpu_state; //type: string

}; // VirtualServices::VirtualService::Utilization::CpuUtil


class VirtualServices::VirtualService::Utilization::MemoryUtil : public ydk::Entity
{
    public:
        MemoryUtil();
        ~MemoryUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf memory_allocation; //type: string
        ydk::YLeaf memory_used; //type: string

}; // VirtualServices::VirtualService::Utilization::MemoryUtil


class VirtualServices::VirtualService::NetworkUtils : public ydk::Entity
{
    public:
        NetworkUtils();
        ~NetworkUtils();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkUtil; //type: VirtualServices::VirtualService::NetworkUtils::NetworkUtil

        ydk::YList network_util;
        
}; // VirtualServices::VirtualService::NetworkUtils


class VirtualServices::VirtualService::NetworkUtils::NetworkUtil : public ydk::Entity
{
    public:
        NetworkUtil();
        ~NetworkUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf rx_packets; //type: uint64
        ydk::YLeaf rx_bytes; //type: uint64
        ydk::YLeaf rx_errors; //type: uint64
        ydk::YLeaf tx_packets; //type: uint64
        ydk::YLeaf tx_bytes; //type: uint64
        ydk::YLeaf tx_errors; //type: uint64

}; // VirtualServices::VirtualService::NetworkUtils::NetworkUtil


class VirtualServices::VirtualService::StorageUtils : public ydk::Entity
{
    public:
        StorageUtils();
        ~StorageUtils();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StorageUtil; //type: VirtualServices::VirtualService::StorageUtils::StorageUtil

        ydk::YList storage_util;
        
}; // VirtualServices::VirtualService::StorageUtils


class VirtualServices::VirtualService::StorageUtils::StorageUtil : public ydk::Entity
{
    public:
        StorageUtil();
        ~StorageUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf alias; //type: string
        ydk::YLeaf rd_bytes; //type: uint64
        ydk::YLeaf rd_requests; //type: uint64
        ydk::YLeaf errors; //type: uint64
        ydk::YLeaf wr_bytes; //type: uint64
        ydk::YLeaf wr_requests; //type: uint64
        ydk::YLeaf capacity; //type: uint64
        ydk::YLeaf available; //type: string
        ydk::YLeaf used; //type: uint64
        ydk::YLeaf usage; //type: string

}; // VirtualServices::VirtualService::StorageUtils::StorageUtil


class VirtualServices::VirtualService::Processes : public ydk::Entity
{
    public:
        Processes();
        ~Processes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Process; //type: VirtualServices::VirtualService::Processes::Process

        ydk::YList process;
        
}; // VirtualServices::VirtualService::Processes


class VirtualServices::VirtualService::Processes::Process : public ydk::Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf status; //type: string
        ydk::YLeaf pid; //type: string
        ydk::YLeaf uptime; //type: string
        ydk::YLeaf memory; //type: string

}; // VirtualServices::VirtualService::Processes::Process


class VirtualServices::VirtualService::AttachedDevices : public ydk::Entity
{
    public:
        AttachedDevices();
        ~AttachedDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttachedDevice; //type: VirtualServices::VirtualService::AttachedDevices::AttachedDevice

        ydk::YList attached_device;
        
}; // VirtualServices::VirtualService::AttachedDevices


class VirtualServices::VirtualService::AttachedDevices::AttachedDevice : public ydk::Entity
{
    public:
        AttachedDevice();
        ~AttachedDevice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf alias; //type: string

}; // VirtualServices::VirtualService::AttachedDevices::AttachedDevice


class VirtualServices::VirtualService::NetworkInterfaces : public ydk::Entity
{
    public:
        NetworkInterfaces();
        ~NetworkInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkInterface; //type: VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface

        ydk::YList network_interface;
        
}; // VirtualServices::VirtualService::NetworkInterfaces


class VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface : public ydk::Entity
{
    public:
        NetworkInterface();
        ~NetworkInterface();

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
        ydk::YLeaf attached_interface; //type: string
        ydk::YLeaf ipv4_address; //type: string

}; // VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface


class VirtualServices::VirtualService::GuestRoutes : public ydk::Entity
{
    public:
        GuestRoutes();
        ~GuestRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GuestRoute; //type: VirtualServices::VirtualService::GuestRoutes::GuestRoute

        ydk::YList guest_route;
        
}; // VirtualServices::VirtualService::GuestRoutes


class VirtualServices::VirtualService::GuestRoutes::GuestRoute : public ydk::Entity
{
    public:
        GuestRoute();
        ~GuestRoute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf route; //type: string

}; // VirtualServices::VirtualService::GuestRoutes::GuestRoute


}
}

#endif /* _CISCO_IOS_XE_VIRTUAL_SERVICE_OPER_ */

