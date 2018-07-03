
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_virtual_service_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_virtual_service_oper {

VirtualServices::VirtualServices()
    :
    virtual_service(this, {"name"})
{

    yang_name = "virtual-services"; yang_parent_name = "Cisco-IOS-XE-virtual-service-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

VirtualServices::~VirtualServices()
{
}

bool VirtualServices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_service.len(); index++)
    {
        if(virtual_service[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::has_operation() const
{
    for (std::size_t index=0; index<virtual_service.len(); index++)
    {
        if(virtual_service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-oper:virtual-services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-service")
    {
        auto c = std::make_shared<VirtualServices::VirtualService>();
        c->parent = this;
        virtual_service.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : virtual_service.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> VirtualServices::clone_ptr() const
{
    return std::make_shared<VirtualServices>();
}

std::string VirtualServices::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string VirtualServices::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function VirtualServices::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VirtualServices::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool VirtualServices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-service")
        return true;
    return false;
}

VirtualServices::VirtualService::VirtualService()
    :
    name{YType::str, "name"}
        ,
    details(std::make_shared<VirtualServices::VirtualService::Details>())
    , utilization(std::make_shared<VirtualServices::VirtualService::Utilization>())
    , network_utils(std::make_shared<VirtualServices::VirtualService::NetworkUtils>())
    , storage_utils(std::make_shared<VirtualServices::VirtualService::StorageUtils>())
    , processes(std::make_shared<VirtualServices::VirtualService::Processes>())
    , attached_devices(std::make_shared<VirtualServices::VirtualService::AttachedDevices>())
    , network_interfaces(std::make_shared<VirtualServices::VirtualService::NetworkInterfaces>())
    , guest_routes(std::make_shared<VirtualServices::VirtualService::GuestRoutes>())
{
    details->parent = this;
    utilization->parent = this;
    network_utils->parent = this;
    storage_utils->parent = this;
    processes->parent = this;
    attached_devices->parent = this;
    network_interfaces->parent = this;
    guest_routes->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "virtual-services"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualServices::VirtualService::~VirtualService()
{
}

bool VirtualServices::VirtualService::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (details !=  nullptr && details->has_data())
	|| (utilization !=  nullptr && utilization->has_data())
	|| (network_utils !=  nullptr && network_utils->has_data())
	|| (storage_utils !=  nullptr && storage_utils->has_data())
	|| (processes !=  nullptr && processes->has_data())
	|| (attached_devices !=  nullptr && attached_devices->has_data())
	|| (network_interfaces !=  nullptr && network_interfaces->has_data())
	|| (guest_routes !=  nullptr && guest_routes->has_data());
}

bool VirtualServices::VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (details !=  nullptr && details->has_operation())
	|| (utilization !=  nullptr && utilization->has_operation())
	|| (network_utils !=  nullptr && network_utils->has_operation())
	|| (storage_utils !=  nullptr && storage_utils->has_operation())
	|| (processes !=  nullptr && processes->has_operation())
	|| (attached_devices !=  nullptr && attached_devices->has_operation())
	|| (network_interfaces !=  nullptr && network_interfaces->has_operation())
	|| (guest_routes !=  nullptr && guest_routes->has_operation());
}

std::string VirtualServices::VirtualService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-virtual-service-oper:virtual-services/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualServices::VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-service";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<VirtualServices::VirtualService::Details>();
        }
        return details;
    }

    if(child_yang_name == "utilization")
    {
        if(utilization == nullptr)
        {
            utilization = std::make_shared<VirtualServices::VirtualService::Utilization>();
        }
        return utilization;
    }

    if(child_yang_name == "network-utils")
    {
        if(network_utils == nullptr)
        {
            network_utils = std::make_shared<VirtualServices::VirtualService::NetworkUtils>();
        }
        return network_utils;
    }

    if(child_yang_name == "storage-utils")
    {
        if(storage_utils == nullptr)
        {
            storage_utils = std::make_shared<VirtualServices::VirtualService::StorageUtils>();
        }
        return storage_utils;
    }

    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<VirtualServices::VirtualService::Processes>();
        }
        return processes;
    }

    if(child_yang_name == "attached-devices")
    {
        if(attached_devices == nullptr)
        {
            attached_devices = std::make_shared<VirtualServices::VirtualService::AttachedDevices>();
        }
        return attached_devices;
    }

    if(child_yang_name == "network-interfaces")
    {
        if(network_interfaces == nullptr)
        {
            network_interfaces = std::make_shared<VirtualServices::VirtualService::NetworkInterfaces>();
        }
        return network_interfaces;
    }

    if(child_yang_name == "guest-routes")
    {
        if(guest_routes == nullptr)
        {
            guest_routes = std::make_shared<VirtualServices::VirtualService::GuestRoutes>();
        }
        return guest_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(details != nullptr)
    {
        children["details"] = details;
    }

    if(utilization != nullptr)
    {
        children["utilization"] = utilization;
    }

    if(network_utils != nullptr)
    {
        children["network-utils"] = network_utils;
    }

    if(storage_utils != nullptr)
    {
        children["storage-utils"] = storage_utils;
    }

    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    if(attached_devices != nullptr)
    {
        children["attached-devices"] = attached_devices;
    }

    if(network_interfaces != nullptr)
    {
        children["network-interfaces"] = network_interfaces;
    }

    if(guest_routes != nullptr)
    {
        children["guest-routes"] = guest_routes;
    }

    return children;
}

void VirtualServices::VirtualService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "utilization" || name == "network-utils" || name == "storage-utils" || name == "processes" || name == "attached-devices" || name == "network-interfaces" || name == "guest-routes" || name == "name")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::Details()
    :
    state{YType::str, "state"},
    activated_profile_name{YType::str, "activated-profile-name"},
    guest_interface{YType::str, "guest-interface"}
        ,
    package_information(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation>())
    , detailed_guest_status(std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus>())
    , resource_reservation(std::make_shared<VirtualServices::VirtualService::Details::ResourceReservation>())
    , resource_admission(std::make_shared<VirtualServices::VirtualService::Details::ResourceAdmission>())
{
    package_information->parent = this;
    detailed_guest_status->parent = this;
    resource_reservation->parent = this;
    resource_admission->parent = this;

    yang_name = "details"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::~Details()
{
}

bool VirtualServices::VirtualService::Details::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| activated_profile_name.is_set
	|| guest_interface.is_set
	|| (package_information !=  nullptr && package_information->has_data())
	|| (detailed_guest_status !=  nullptr && detailed_guest_status->has_data())
	|| (resource_reservation !=  nullptr && resource_reservation->has_data())
	|| (resource_admission !=  nullptr && resource_admission->has_data());
}

bool VirtualServices::VirtualService::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(activated_profile_name.yfilter)
	|| ydk::is_set(guest_interface.yfilter)
	|| (package_information !=  nullptr && package_information->has_operation())
	|| (detailed_guest_status !=  nullptr && detailed_guest_status->has_operation())
	|| (resource_reservation !=  nullptr && resource_reservation->has_operation())
	|| (resource_admission !=  nullptr && resource_admission->has_operation());
}

std::string VirtualServices::VirtualService::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (activated_profile_name.is_set || is_set(activated_profile_name.yfilter)) leaf_name_data.push_back(activated_profile_name.get_name_leafdata());
    if (guest_interface.is_set || is_set(guest_interface.yfilter)) leaf_name_data.push_back(guest_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package-information")
    {
        if(package_information == nullptr)
        {
            package_information = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation>();
        }
        return package_information;
    }

    if(child_yang_name == "detailed-guest-status")
    {
        if(detailed_guest_status == nullptr)
        {
            detailed_guest_status = std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus>();
        }
        return detailed_guest_status;
    }

    if(child_yang_name == "resource-reservation")
    {
        if(resource_reservation == nullptr)
        {
            resource_reservation = std::make_shared<VirtualServices::VirtualService::Details::ResourceReservation>();
        }
        return resource_reservation;
    }

    if(child_yang_name == "resource-admission")
    {
        if(resource_admission == nullptr)
        {
            resource_admission = std::make_shared<VirtualServices::VirtualService::Details::ResourceAdmission>();
        }
        return resource_admission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(package_information != nullptr)
    {
        children["package-information"] = package_information;
    }

    if(detailed_guest_status != nullptr)
    {
        children["detailed-guest-status"] = detailed_guest_status;
    }

    if(resource_reservation != nullptr)
    {
        children["resource-reservation"] = resource_reservation;
    }

    if(resource_admission != nullptr)
    {
        children["resource-admission"] = resource_admission;
    }

    return children;
}

void VirtualServices::VirtualService::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-profile-name")
    {
        activated_profile_name = value;
        activated_profile_name.value_namespace = name_space;
        activated_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "guest-interface")
    {
        guest_interface = value;
        guest_interface.value_namespace = name_space;
        guest_interface.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "activated-profile-name")
    {
        activated_profile_name.yfilter = yfilter;
    }
    if(value_path == "guest-interface")
    {
        guest_interface.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package-information" || name == "detailed-guest-status" || name == "resource-reservation" || name == "resource-admission" || name == "state" || name == "activated-profile-name" || name == "guest-interface")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::PackageInformation()
    :
    name{YType::str, "name"},
    path{YType::str, "path"}
        ,
    application(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Application>())
    , signing(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Signing>())
    , licensing(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Licensing>())
{
    application->parent = this;
    signing->parent = this;
    licensing->parent = this;

    yang_name = "package-information"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::PackageInformation::~PackageInformation()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path.is_set
	|| (application !=  nullptr && application->has_data())
	|| (signing !=  nullptr && signing->has_data())
	|| (licensing !=  nullptr && licensing->has_data());
}

bool VirtualServices::VirtualService::Details::PackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (signing !=  nullptr && signing->has_operation())
	|| (licensing !=  nullptr && licensing->has_operation());
}

std::string VirtualServices::VirtualService::Details::PackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::PackageInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Application>();
        }
        return application;
    }

    if(child_yang_name == "signing")
    {
        if(signing == nullptr)
        {
            signing = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Signing>();
        }
        return signing;
    }

    if(child_yang_name == "licensing")
    {
        if(licensing == nullptr)
        {
            licensing = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Licensing>();
        }
        return licensing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(signing != nullptr)
    {
        children["signing"] = signing;
    }

    if(licensing != nullptr)
    {
        children["licensing"] = licensing;
    }

    return children;
}

void VirtualServices::VirtualService::Details::PackageInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::PackageInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::PackageInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "signing" || name == "licensing" || name == "name" || name == "path")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::Application::Application()
    :
    name{YType::str, "name"},
    installed_version{YType::str, "installed-version"},
    description{YType::str, "description"},
    type{YType::str, "type"}
{

    yang_name = "application"; yang_parent_name = "package-information"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::PackageInformation::Application::~Application()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| installed_version.is_set
	|| description.is_set
	|| type.is_set;
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(installed_version.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string VirtualServices::VirtualService::Details::PackageInformation::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::PackageInformation::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (installed_version.is_set || is_set(installed_version.yfilter)) leaf_name_data.push_back(installed_version.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::PackageInformation::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-version")
    {
        installed_version = value;
        installed_version.value_namespace = name_space;
        installed_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::PackageInformation::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "installed-version")
    {
        installed_version.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "installed-version" || name == "description" || name == "type")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::Signing::Signing()
    :
    key_type{YType::str, "key-type"},
    method{YType::str, "method"}
{

    yang_name = "signing"; yang_parent_name = "package-information"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::PackageInformation::Signing::~Signing()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Signing::has_data() const
{
    if (is_presence_container) return true;
    return key_type.is_set
	|| method.is_set;
}

bool VirtualServices::VirtualService::Details::PackageInformation::Signing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_type.yfilter)
	|| ydk::is_set(method.yfilter);
}

std::string VirtualServices::VirtualService::Details::PackageInformation::Signing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::PackageInformation::Signing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Signing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Signing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::PackageInformation::Signing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-type")
    {
        key_type = value;
        key_type.value_namespace = name_space;
        key_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::PackageInformation::Signing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-type")
    {
        key_type.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::PackageInformation::Signing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-type" || name == "method")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::Licensing::Licensing()
    :
    name{YType::str, "name"},
    version{YType::str, "version"}
{

    yang_name = "licensing"; yang_parent_name = "package-information"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::PackageInformation::Licensing::~Licensing()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Licensing::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set;
}

bool VirtualServices::VirtualService::Details::PackageInformation::Licensing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "licensing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::PackageInformation::Licensing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::PackageInformation::Licensing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::PackageInformation::Licensing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::DetailedGuestStatus()
    :
    processes(std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes>())
{
    processes->parent = this;

    yang_name = "detailed-guest-status"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::~DetailedGuestStatus()
{
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::has_data() const
{
    if (is_presence_container) return true;
    return (processes !=  nullptr && processes->has_data());
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::has_operation() const
{
    return is_set(yfilter)
	|| (processes !=  nullptr && processes->has_operation());
}

std::string VirtualServices::VirtualService::Details::DetailedGuestStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-guest-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::DetailedGuestStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::DetailedGuestStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "processes")
    {
        if(processes == nullptr)
        {
            processes = std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes>();
        }
        return processes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::DetailedGuestStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(processes != nullptr)
    {
        children["processes"] = processes;
    }

    return children;
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processes")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::Processes()
    :
    name{YType::str, "name"},
    status{YType::str, "status"},
    pid{YType::str, "pid"},
    uptime{YType::str, "uptime"},
    memory{YType::str, "memory"}
{

    yang_name = "processes"; yang_parent_name = "detailed-guest-status"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::~Processes()
{
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| status.is_set
	|| pid.is_set
	|| uptime.is_set
	|| memory.is_set;
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "status" || name == "pid" || name == "uptime" || name == "memory")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::ResourceReservation::ResourceReservation()
    :
    disk{YType::uint64, "disk"},
    memory{YType::uint64, "memory"},
    cpu{YType::uint64, "cpu"}
{

    yang_name = "resource-reservation"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::ResourceReservation::~ResourceReservation()
{
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_data() const
{
    if (is_presence_container) return true;
    return disk.is_set
	|| memory.is_set
	|| cpu.is_set;
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disk.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(cpu.yfilter);
}

std::string VirtualServices::VirtualService::Details::ResourceReservation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-reservation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::ResourceReservation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disk.is_set || is_set(disk.yfilter)) leaf_name_data.push_back(disk.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::ResourceReservation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::ResourceReservation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::ResourceReservation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disk")
    {
        disk = value;
        disk.value_namespace = name_space;
        disk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::ResourceReservation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disk")
    {
        disk.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disk" || name == "memory" || name == "cpu")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::ResourceAdmission::ResourceAdmission()
    :
    state{YType::str, "state"},
    disk_space{YType::str, "disk-space"},
    memory{YType::str, "memory"},
    cpu{YType::uint64, "cpu"},
    vcpus{YType::str, "vcpus"}
{

    yang_name = "resource-admission"; yang_parent_name = "details"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Details::ResourceAdmission::~ResourceAdmission()
{
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| disk_space.is_set
	|| memory.is_set
	|| cpu.is_set
	|| vcpus.is_set;
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(disk_space.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(cpu.yfilter)
	|| ydk::is_set(vcpus.yfilter);
}

std::string VirtualServices::VirtualService::Details::ResourceAdmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Details::ResourceAdmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (disk_space.is_set || is_set(disk_space.yfilter)) leaf_name_data.push_back(disk_space.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (vcpus.is_set || is_set(vcpus.yfilter)) leaf_name_data.push_back(vcpus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::ResourceAdmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::ResourceAdmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Details::ResourceAdmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-space")
    {
        disk_space = value;
        disk_space.value_namespace = name_space;
        disk_space.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcpus")
    {
        vcpus = value;
        vcpus.value_namespace = name_space;
        vcpus.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::ResourceAdmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "disk-space")
    {
        disk_space.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
    if(value_path == "vcpus")
    {
        vcpus.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "disk-space" || name == "memory" || name == "cpu" || name == "vcpus")
        return true;
    return false;
}

VirtualServices::VirtualService::Utilization::Utilization()
    :
    name{YType::str, "name"}
        ,
    cpu_util(std::make_shared<VirtualServices::VirtualService::Utilization::CpuUtil>())
    , memory_util(std::make_shared<VirtualServices::VirtualService::Utilization::MemoryUtil>())
{
    cpu_util->parent = this;
    memory_util->parent = this;

    yang_name = "utilization"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Utilization::~Utilization()
{
}

bool VirtualServices::VirtualService::Utilization::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (cpu_util !=  nullptr && cpu_util->has_data())
	|| (memory_util !=  nullptr && memory_util->has_data());
}

bool VirtualServices::VirtualService::Utilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (cpu_util !=  nullptr && cpu_util->has_operation())
	|| (memory_util !=  nullptr && memory_util->has_operation());
}

std::string VirtualServices::VirtualService::Utilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Utilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Utilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu-util")
    {
        if(cpu_util == nullptr)
        {
            cpu_util = std::make_shared<VirtualServices::VirtualService::Utilization::CpuUtil>();
        }
        return cpu_util;
    }

    if(child_yang_name == "memory-util")
    {
        if(memory_util == nullptr)
        {
            memory_util = std::make_shared<VirtualServices::VirtualService::Utilization::MemoryUtil>();
        }
        return memory_util;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Utilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpu_util != nullptr)
    {
        children["cpu-util"] = cpu_util;
    }

    if(memory_util != nullptr)
    {
        children["memory-util"] = memory_util;
    }

    return children;
}

void VirtualServices::VirtualService::Utilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Utilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Utilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu-util" || name == "memory-util" || name == "name")
        return true;
    return false;
}

VirtualServices::VirtualService::Utilization::CpuUtil::CpuUtil()
    :
    requested_application_util{YType::uint64, "requested-application-util"},
    actual_application_util{YType::uint64, "actual-application-util"},
    cpu_state{YType::str, "cpu-state"}
{

    yang_name = "cpu-util"; yang_parent_name = "utilization"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Utilization::CpuUtil::~CpuUtil()
{
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_data() const
{
    if (is_presence_container) return true;
    return requested_application_util.is_set
	|| actual_application_util.is_set
	|| cpu_state.is_set;
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requested_application_util.yfilter)
	|| ydk::is_set(actual_application_util.yfilter)
	|| ydk::is_set(cpu_state.yfilter);
}

std::string VirtualServices::VirtualService::Utilization::CpuUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Utilization::CpuUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requested_application_util.is_set || is_set(requested_application_util.yfilter)) leaf_name_data.push_back(requested_application_util.get_name_leafdata());
    if (actual_application_util.is_set || is_set(actual_application_util.yfilter)) leaf_name_data.push_back(actual_application_util.get_name_leafdata());
    if (cpu_state.is_set || is_set(cpu_state.yfilter)) leaf_name_data.push_back(cpu_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Utilization::CpuUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Utilization::CpuUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Utilization::CpuUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requested-application-util")
    {
        requested_application_util = value;
        requested_application_util.value_namespace = name_space;
        requested_application_util.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-application-util")
    {
        actual_application_util = value;
        actual_application_util.value_namespace = name_space;
        actual_application_util.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu-state")
    {
        cpu_state = value;
        cpu_state.value_namespace = name_space;
        cpu_state.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Utilization::CpuUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requested-application-util")
    {
        requested_application_util.yfilter = yfilter;
    }
    if(value_path == "actual-application-util")
    {
        actual_application_util.yfilter = yfilter;
    }
    if(value_path == "cpu-state")
    {
        cpu_state.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requested-application-util" || name == "actual-application-util" || name == "cpu-state")
        return true;
    return false;
}

VirtualServices::VirtualService::Utilization::MemoryUtil::MemoryUtil()
    :
    memory_allocation{YType::str, "memory-allocation"},
    memory_used{YType::str, "memory-used"}
{

    yang_name = "memory-util"; yang_parent_name = "utilization"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Utilization::MemoryUtil::~MemoryUtil()
{
}

bool VirtualServices::VirtualService::Utilization::MemoryUtil::has_data() const
{
    if (is_presence_container) return true;
    return memory_allocation.is_set
	|| memory_used.is_set;
}

bool VirtualServices::VirtualService::Utilization::MemoryUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_allocation.yfilter)
	|| ydk::is_set(memory_used.yfilter);
}

std::string VirtualServices::VirtualService::Utilization::MemoryUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Utilization::MemoryUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_allocation.is_set || is_set(memory_allocation.yfilter)) leaf_name_data.push_back(memory_allocation.get_name_leafdata());
    if (memory_used.is_set || is_set(memory_used.yfilter)) leaf_name_data.push_back(memory_used.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Utilization::MemoryUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Utilization::MemoryUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Utilization::MemoryUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-allocation")
    {
        memory_allocation = value;
        memory_allocation.value_namespace = name_space;
        memory_allocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-used")
    {
        memory_used = value;
        memory_used.value_namespace = name_space;
        memory_used.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Utilization::MemoryUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-allocation")
    {
        memory_allocation.yfilter = yfilter;
    }
    if(value_path == "memory-used")
    {
        memory_used.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Utilization::MemoryUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-allocation" || name == "memory-used")
        return true;
    return false;
}

VirtualServices::VirtualService::NetworkUtils::NetworkUtils()
    :
    network_util(this, {"name"})
{

    yang_name = "network-utils"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::NetworkUtils::~NetworkUtils()
{
}

bool VirtualServices::VirtualService::NetworkUtils::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_util.len(); index++)
    {
        if(network_util[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::NetworkUtils::has_operation() const
{
    for (std::size_t index=0; index<network_util.len(); index++)
    {
        if(network_util[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::NetworkUtils::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-utils";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::NetworkUtils::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkUtils::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-util")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::NetworkUtils::NetworkUtil>();
        c->parent = this;
        network_util.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkUtils::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_util.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::NetworkUtils::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::NetworkUtils::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::NetworkUtils::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-util")
        return true;
    return false;
}

VirtualServices::VirtualService::NetworkUtils::NetworkUtil::NetworkUtil()
    :
    name{YType::str, "name"},
    alias{YType::str, "alias"},
    rx_packets{YType::uint64, "rx-packets"},
    rx_bytes{YType::uint64, "rx-bytes"},
    rx_errors{YType::uint64, "rx-errors"},
    tx_packets{YType::uint64, "tx-packets"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_errors{YType::uint64, "tx-errors"}
{

    yang_name = "network-util"; yang_parent_name = "network-utils"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::NetworkUtils::NetworkUtil::~NetworkUtil()
{
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| alias.is_set
	|| rx_packets.is_set
	|| rx_bytes.is_set
	|| rx_errors.is_set
	|| tx_packets.is_set
	|| tx_bytes.is_set
	|| tx_errors.is_set;
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(rx_packets.yfilter)
	|| ydk::is_set(rx_bytes.yfilter)
	|| ydk::is_set(rx_errors.yfilter)
	|| ydk::is_set(tx_packets.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_errors.yfilter);
}

std::string VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-util";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.yfilter)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (rx_bytes.is_set || is_set(rx_bytes.yfilter)) leaf_name_data.push_back(rx_bytes.get_name_leafdata());
    if (rx_errors.is_set || is_set(rx_errors.yfilter)) leaf_name_data.push_back(rx_errors.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_errors.is_set || is_set(tx_errors.yfilter)) leaf_name_data.push_back(tx_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::NetworkUtils::NetworkUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-packets")
    {
        rx_packets = value;
        rx_packets.value_namespace = name_space;
        rx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-bytes")
    {
        rx_bytes = value;
        rx_bytes.value_namespace = name_space;
        rx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-errors")
    {
        rx_errors = value;
        rx_errors.value_namespace = name_space;
        rx_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes = value;
        tx_bytes.value_namespace = name_space;
        tx_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-errors")
    {
        tx_errors = value;
        tx_errors.value_namespace = name_space;
        tx_errors.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::NetworkUtils::NetworkUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "rx-packets")
    {
        rx_packets.yfilter = yfilter;
    }
    if(value_path == "rx-bytes")
    {
        rx_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-errors")
    {
        rx_errors.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-errors")
    {
        tx_errors.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "alias" || name == "rx-packets" || name == "rx-bytes" || name == "rx-errors" || name == "tx-packets" || name == "tx-bytes" || name == "tx-errors")
        return true;
    return false;
}

VirtualServices::VirtualService::StorageUtils::StorageUtils()
    :
    storage_util(this, {"name"})
{

    yang_name = "storage-utils"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::StorageUtils::~StorageUtils()
{
}

bool VirtualServices::VirtualService::StorageUtils::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<storage_util.len(); index++)
    {
        if(storage_util[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::StorageUtils::has_operation() const
{
    for (std::size_t index=0; index<storage_util.len(); index++)
    {
        if(storage_util[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::StorageUtils::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage-utils";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::StorageUtils::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::StorageUtils::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storage-util")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::StorageUtils::StorageUtil>();
        c->parent = this;
        storage_util.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::StorageUtils::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : storage_util.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::StorageUtils::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::StorageUtils::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::StorageUtils::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storage-util")
        return true;
    return false;
}

VirtualServices::VirtualService::StorageUtils::StorageUtil::StorageUtil()
    :
    name{YType::str, "name"},
    alias{YType::str, "alias"},
    rd_bytes{YType::uint64, "rd-bytes"},
    rd_requests{YType::uint64, "rd-requests"},
    errors{YType::uint64, "errors"},
    wr_bytes{YType::uint64, "wr-bytes"},
    wr_requests{YType::uint64, "wr-requests"},
    capacity{YType::uint64, "capacity"},
    available{YType::str, "available"},
    used{YType::uint64, "used"},
    usage{YType::str, "usage"}
{

    yang_name = "storage-util"; yang_parent_name = "storage-utils"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::StorageUtils::StorageUtil::~StorageUtil()
{
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| alias.is_set
	|| rd_bytes.is_set
	|| rd_requests.is_set
	|| errors.is_set
	|| wr_bytes.is_set
	|| wr_requests.is_set
	|| capacity.is_set
	|| available.is_set
	|| used.is_set
	|| usage.is_set;
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(rd_bytes.yfilter)
	|| ydk::is_set(rd_requests.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(wr_bytes.yfilter)
	|| ydk::is_set(wr_requests.yfilter)
	|| ydk::is_set(capacity.yfilter)
	|| ydk::is_set(available.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(usage.yfilter);
}

std::string VirtualServices::VirtualService::StorageUtils::StorageUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage-util";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::StorageUtils::StorageUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (rd_bytes.is_set || is_set(rd_bytes.yfilter)) leaf_name_data.push_back(rd_bytes.get_name_leafdata());
    if (rd_requests.is_set || is_set(rd_requests.yfilter)) leaf_name_data.push_back(rd_requests.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (wr_bytes.is_set || is_set(wr_bytes.yfilter)) leaf_name_data.push_back(wr_bytes.get_name_leafdata());
    if (wr_requests.is_set || is_set(wr_requests.yfilter)) leaf_name_data.push_back(wr_requests.get_name_leafdata());
    if (capacity.is_set || is_set(capacity.yfilter)) leaf_name_data.push_back(capacity.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::StorageUtils::StorageUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::StorageUtils::StorageUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::StorageUtils::StorageUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-bytes")
    {
        rd_bytes = value;
        rd_bytes.value_namespace = name_space;
        rd_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-requests")
    {
        rd_requests = value;
        rd_requests.value_namespace = name_space;
        rd_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wr-bytes")
    {
        wr_bytes = value;
        wr_bytes.value_namespace = name_space;
        wr_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wr-requests")
    {
        wr_requests = value;
        wr_requests.value_namespace = name_space;
        wr_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capacity")
    {
        capacity = value;
        capacity.value_namespace = name_space;
        capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::StorageUtils::StorageUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "rd-bytes")
    {
        rd_bytes.yfilter = yfilter;
    }
    if(value_path == "rd-requests")
    {
        rd_requests.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "wr-bytes")
    {
        wr_bytes.yfilter = yfilter;
    }
    if(value_path == "wr-requests")
    {
        wr_requests.yfilter = yfilter;
    }
    if(value_path == "capacity")
    {
        capacity.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "alias" || name == "rd-bytes" || name == "rd-requests" || name == "errors" || name == "wr-bytes" || name == "wr-requests" || name == "capacity" || name == "available" || name == "used" || name == "usage")
        return true;
    return false;
}

VirtualServices::VirtualService::Processes::Processes()
    :
    process(this, {"name"})
{

    yang_name = "processes"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Processes::~Processes()
{
}

bool VirtualServices::VirtualService::Processes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::Processes::has_operation() const
{
    for (std::size_t index=0; index<process.len(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Processes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::Processes::Process>();
        c->parent = this;
        process.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : process.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

VirtualServices::VirtualService::Processes::Process::Process()
    :
    name{YType::str, "name"},
    status{YType::str, "status"},
    pid{YType::str, "pid"},
    uptime{YType::str, "uptime"},
    memory{YType::str, "memory"}
{

    yang_name = "process"; yang_parent_name = "processes"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::Processes::Process::~Process()
{
}

bool VirtualServices::VirtualService::Processes::Process::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| status.is_set
	|| pid.is_set
	|| uptime.is_set
	|| memory.is_set;
}

bool VirtualServices::VirtualService::Processes::Process::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string VirtualServices::VirtualService::Processes::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::Processes::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Processes::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Processes::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::Processes::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Processes::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Processes::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "status" || name == "pid" || name == "uptime" || name == "memory")
        return true;
    return false;
}

VirtualServices::VirtualService::AttachedDevices::AttachedDevices()
    :
    attached_device(this, {"name"})
{

    yang_name = "attached-devices"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::AttachedDevices::~AttachedDevices()
{
}

bool VirtualServices::VirtualService::AttachedDevices::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attached_device.len(); index++)
    {
        if(attached_device[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::AttachedDevices::has_operation() const
{
    for (std::size_t index=0; index<attached_device.len(); index++)
    {
        if(attached_device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::AttachedDevices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::AttachedDevices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::AttachedDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached-device")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::AttachedDevices::AttachedDevice>();
        c->parent = this;
        attached_device.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::AttachedDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attached_device.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::AttachedDevices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::AttachedDevices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::AttachedDevices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attached-device")
        return true;
    return false;
}

VirtualServices::VirtualService::AttachedDevices::AttachedDevice::AttachedDevice()
    :
    name{YType::str, "name"},
    type{YType::str, "type"},
    alias{YType::str, "alias"}
{

    yang_name = "attached-device"; yang_parent_name = "attached-devices"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::AttachedDevices::AttachedDevice::~AttachedDevice()
{
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| type.is_set
	|| alias.is_set;
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(alias.yfilter);
}

std::string VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-device";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::AttachedDevices::AttachedDevice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::AttachedDevices::AttachedDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type" || name == "alias")
        return true;
    return false;
}

VirtualServices::VirtualService::NetworkInterfaces::NetworkInterfaces()
    :
    network_interface(this, {"mac_address"})
{

    yang_name = "network-interfaces"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::NetworkInterfaces::~NetworkInterfaces()
{
}

bool VirtualServices::VirtualService::NetworkInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network_interface.len(); index++)
    {
        if(network_interface[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::NetworkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<network_interface.len(); index++)
    {
        if(network_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::NetworkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::NetworkInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-interface")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface>();
        c->parent = this;
        network_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : network_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::NetworkInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::NetworkInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::NetworkInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-interface")
        return true;
    return false;
}

VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::NetworkInterface()
    :
    mac_address{YType::str, "mac-address"},
    attached_interface{YType::str, "attached-interface"},
    ipv4_address{YType::str, "ipv4-address"}
{

    yang_name = "network-interface"; yang_parent_name = "network-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::~NetworkInterface()
{
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| attached_interface.is_set
	|| ipv4_address.is_set;
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(attached_interface.yfilter)
	|| ydk::is_set(ipv4_address.yfilter);
}

std::string VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-interface";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (attached_interface.is_set || is_set(attached_interface.yfilter)) leaf_name_data.push_back(attached_interface.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attached-interface")
    {
        attached_interface = value;
        attached_interface.value_namespace = name_space;
        attached_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "attached-interface")
    {
        attached_interface.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "attached-interface" || name == "ipv4-address")
        return true;
    return false;
}

VirtualServices::VirtualService::GuestRoutes::GuestRoutes()
    :
    guest_route(this, {"route"})
{

    yang_name = "guest-routes"; yang_parent_name = "virtual-service"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::GuestRoutes::~GuestRoutes()
{
}

bool VirtualServices::VirtualService::GuestRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<guest_route.len(); index++)
    {
        if(guest_route[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::GuestRoutes::has_operation() const
{
    for (std::size_t index=0; index<guest_route.len(); index++)
    {
        if(guest_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualServices::VirtualService::GuestRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::GuestRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::GuestRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest-route")
    {
        auto c = std::make_shared<VirtualServices::VirtualService::GuestRoutes::GuestRoute>();
        c->parent = this;
        guest_route.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::GuestRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : guest_route.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void VirtualServices::VirtualService::GuestRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualServices::VirtualService::GuestRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualServices::VirtualService::GuestRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guest-route")
        return true;
    return false;
}

VirtualServices::VirtualService::GuestRoutes::GuestRoute::GuestRoute()
    :
    route{YType::str, "route"}
{

    yang_name = "guest-route"; yang_parent_name = "guest-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

VirtualServices::VirtualService::GuestRoutes::GuestRoute::~GuestRoute()
{
}

bool VirtualServices::VirtualService::GuestRoutes::GuestRoute::has_data() const
{
    if (is_presence_container) return true;
    return route.is_set;
}

bool VirtualServices::VirtualService::GuestRoutes::GuestRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route.yfilter);
}

std::string VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guest-route";
    ADD_KEY_TOKEN(route, "route");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void VirtualServices::VirtualService::GuestRoutes::GuestRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::GuestRoutes::GuestRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::GuestRoutes::GuestRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}


}
}

