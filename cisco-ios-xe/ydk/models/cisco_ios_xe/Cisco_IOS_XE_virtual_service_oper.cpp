
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
{
    yang_name = "virtual-services"; yang_parent_name = "Cisco-IOS-XE-virtual-service-oper";
}

VirtualServices::~VirtualServices()
{
}

bool VirtualServices::has_data() const
{
    for (std::size_t index=0; index<virtual_service.size(); index++)
    {
        if(virtual_service[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::has_operation() const
{
    for (std::size_t index=0; index<virtual_service.size(); index++)
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

const EntityPath VirtualServices::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> VirtualServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-service")
    {
        for(auto const & c : virtual_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService>();
        c->parent = this;
        virtual_service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_service)
    {
        children[c->get_segment_path()] = c;
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
    attached_devices(std::make_shared<VirtualServices::VirtualService::AttachedDevices>())
	,details(std::make_shared<VirtualServices::VirtualService::Details>())
	,guest_routes(std::make_shared<VirtualServices::VirtualService::GuestRoutes>())
	,network_interfaces(std::make_shared<VirtualServices::VirtualService::NetworkInterfaces>())
	,network_utils(std::make_shared<VirtualServices::VirtualService::NetworkUtils>())
	,storage_utils(std::make_shared<VirtualServices::VirtualService::StorageUtils>())
	,utilization(std::make_shared<VirtualServices::VirtualService::Utilization>())
{
    attached_devices->parent = this;

    details->parent = this;

    guest_routes->parent = this;

    network_interfaces->parent = this;

    network_utils->parent = this;

    storage_utils->parent = this;

    utilization->parent = this;

    yang_name = "virtual-service"; yang_parent_name = "virtual-services";
}

VirtualServices::VirtualService::~VirtualService()
{
}

bool VirtualServices::VirtualService::has_data() const
{
    return name.is_set
	|| (attached_devices !=  nullptr && attached_devices->has_data())
	|| (details !=  nullptr && details->has_data())
	|| (guest_routes !=  nullptr && guest_routes->has_data())
	|| (network_interfaces !=  nullptr && network_interfaces->has_data())
	|| (network_utils !=  nullptr && network_utils->has_data())
	|| (storage_utils !=  nullptr && storage_utils->has_data())
	|| (utilization !=  nullptr && utilization->has_data());
}

bool VirtualServices::VirtualService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attached_devices !=  nullptr && attached_devices->has_operation())
	|| (details !=  nullptr && details->has_operation())
	|| (guest_routes !=  nullptr && guest_routes->has_operation())
	|| (network_interfaces !=  nullptr && network_interfaces->has_operation())
	|| (network_utils !=  nullptr && network_utils->has_operation())
	|| (storage_utils !=  nullptr && storage_utils->has_operation())
	|| (utilization !=  nullptr && utilization->has_operation());
}

std::string VirtualServices::VirtualService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-service" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-virtual-service-oper:virtual-services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached-devices")
    {
        if(attached_devices == nullptr)
        {
            attached_devices = std::make_shared<VirtualServices::VirtualService::AttachedDevices>();
        }
        return attached_devices;
    }

    if(child_yang_name == "details")
    {
        if(details == nullptr)
        {
            details = std::make_shared<VirtualServices::VirtualService::Details>();
        }
        return details;
    }

    if(child_yang_name == "guest-routes")
    {
        if(guest_routes == nullptr)
        {
            guest_routes = std::make_shared<VirtualServices::VirtualService::GuestRoutes>();
        }
        return guest_routes;
    }

    if(child_yang_name == "network-interfaces")
    {
        if(network_interfaces == nullptr)
        {
            network_interfaces = std::make_shared<VirtualServices::VirtualService::NetworkInterfaces>();
        }
        return network_interfaces;
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

    if(child_yang_name == "utilization")
    {
        if(utilization == nullptr)
        {
            utilization = std::make_shared<VirtualServices::VirtualService::Utilization>();
        }
        return utilization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attached_devices != nullptr)
    {
        children["attached-devices"] = attached_devices;
    }

    if(details != nullptr)
    {
        children["details"] = details;
    }

    if(guest_routes != nullptr)
    {
        children["guest-routes"] = guest_routes;
    }

    if(network_interfaces != nullptr)
    {
        children["network-interfaces"] = network_interfaces;
    }

    if(network_utils != nullptr)
    {
        children["network-utils"] = network_utils;
    }

    if(storage_utils != nullptr)
    {
        children["storage-utils"] = storage_utils;
    }

    if(utilization != nullptr)
    {
        children["utilization"] = utilization;
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
    if(name == "attached-devices" || name == "details" || name == "guest-routes" || name == "network-interfaces" || name == "network-utils" || name == "storage-utils" || name == "utilization" || name == "name")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::Details()
    :
    activated_profile_name{YType::str, "activated-profile-name"},
    guest_interface{YType::str, "guest-interface"},
    state{YType::str, "state"}
    	,
    detailed_guest_status(std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus>())
	,package_information(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation>())
	,resource_admission(std::make_shared<VirtualServices::VirtualService::Details::ResourceAdmission>())
	,resource_reservation(std::make_shared<VirtualServices::VirtualService::Details::ResourceReservation>())
{
    detailed_guest_status->parent = this;

    package_information->parent = this;

    resource_admission->parent = this;

    resource_reservation->parent = this;

    yang_name = "details"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::Details::~Details()
{
}

bool VirtualServices::VirtualService::Details::has_data() const
{
    return activated_profile_name.is_set
	|| guest_interface.is_set
	|| state.is_set
	|| (detailed_guest_status !=  nullptr && detailed_guest_status->has_data())
	|| (package_information !=  nullptr && package_information->has_data())
	|| (resource_admission !=  nullptr && resource_admission->has_data())
	|| (resource_reservation !=  nullptr && resource_reservation->has_data());
}

bool VirtualServices::VirtualService::Details::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_profile_name.yfilter)
	|| ydk::is_set(guest_interface.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (detailed_guest_status !=  nullptr && detailed_guest_status->has_operation())
	|| (package_information !=  nullptr && package_information->has_operation())
	|| (resource_admission !=  nullptr && resource_admission->has_operation())
	|| (resource_reservation !=  nullptr && resource_reservation->has_operation());
}

std::string VirtualServices::VirtualService::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Details' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_profile_name.is_set || is_set(activated_profile_name.yfilter)) leaf_name_data.push_back(activated_profile_name.get_name_leafdata());
    if (guest_interface.is_set || is_set(guest_interface.yfilter)) leaf_name_data.push_back(guest_interface.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detailed-guest-status")
    {
        if(detailed_guest_status == nullptr)
        {
            detailed_guest_status = std::make_shared<VirtualServices::VirtualService::Details::DetailedGuestStatus>();
        }
        return detailed_guest_status;
    }

    if(child_yang_name == "package-information")
    {
        if(package_information == nullptr)
        {
            package_information = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation>();
        }
        return package_information;
    }

    if(child_yang_name == "resource-admission")
    {
        if(resource_admission == nullptr)
        {
            resource_admission = std::make_shared<VirtualServices::VirtualService::Details::ResourceAdmission>();
        }
        return resource_admission;
    }

    if(child_yang_name == "resource-reservation")
    {
        if(resource_reservation == nullptr)
        {
            resource_reservation = std::make_shared<VirtualServices::VirtualService::Details::ResourceReservation>();
        }
        return resource_reservation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detailed_guest_status != nullptr)
    {
        children["detailed-guest-status"] = detailed_guest_status;
    }

    if(package_information != nullptr)
    {
        children["package-information"] = package_information;
    }

    if(resource_admission != nullptr)
    {
        children["resource-admission"] = resource_admission;
    }

    if(resource_reservation != nullptr)
    {
        children["resource-reservation"] = resource_reservation;
    }

    return children;
}

void VirtualServices::VirtualService::Details::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-profile-name")
    {
        activated_profile_name.yfilter = yfilter;
    }
    if(value_path == "guest-interface")
    {
        guest_interface.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detailed-guest-status" || name == "package-information" || name == "resource-admission" || name == "resource-reservation" || name == "activated-profile-name" || name == "guest-interface" || name == "state")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::PackageInformation()
    :
    name{YType::str, "name"},
    path{YType::str, "path"}
    	,
    application(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Application>())
	,licensing(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Licensing>())
	,signing(std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Signing>())
{
    application->parent = this;

    licensing->parent = this;

    signing->parent = this;

    yang_name = "package-information"; yang_parent_name = "details";
}

VirtualServices::VirtualService::Details::PackageInformation::~PackageInformation()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::has_data() const
{
    return name.is_set
	|| path.is_set
	|| (application !=  nullptr && application->has_data())
	|| (licensing !=  nullptr && licensing->has_data())
	|| (signing !=  nullptr && signing->has_data());
}

bool VirtualServices::VirtualService::Details::PackageInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (licensing !=  nullptr && licensing->has_operation())
	|| (signing !=  nullptr && signing->has_operation());
}

std::string VirtualServices::VirtualService::Details::PackageInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package-information";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::PackageInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PackageInformation' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    if(child_yang_name == "licensing")
    {
        if(licensing == nullptr)
        {
            licensing = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Licensing>();
        }
        return licensing;
    }

    if(child_yang_name == "signing")
    {
        if(signing == nullptr)
        {
            signing = std::make_shared<VirtualServices::VirtualService::Details::PackageInformation::Signing>();
        }
        return signing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(licensing != nullptr)
    {
        children["licensing"] = licensing;
    }

    if(signing != nullptr)
    {
        children["signing"] = signing;
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
    if(name == "application" || name == "licensing" || name == "signing" || name == "name" || name == "path")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::Application::Application()
    :
    description{YType::str, "description"},
    installed_version{YType::str, "installed-version"},
    name{YType::str, "name"}
{
    yang_name = "application"; yang_parent_name = "package-information";
}

VirtualServices::VirtualService::Details::PackageInformation::Application::~Application()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_data() const
{
    return description.is_set
	|| installed_version.is_set
	|| name.is_set;
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(installed_version.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string VirtualServices::VirtualService::Details::PackageInformation::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::PackageInformation::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (installed_version.is_set || is_set(installed_version.yfilter)) leaf_name_data.push_back(installed_version.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VirtualServices::VirtualService::Details::PackageInformation::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-version")
    {
        installed_version = value;
        installed_version.value_namespace = name_space;
        installed_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::PackageInformation::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "installed-version")
    {
        installed_version.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::PackageInformation::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "installed-version" || name == "name")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::PackageInformation::Signing::Signing()
    :
    key_type{YType::str, "key-type"},
    method{YType::str, "method"}
{
    yang_name = "signing"; yang_parent_name = "package-information";
}

VirtualServices::VirtualService::Details::PackageInformation::Signing::~Signing()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Signing::has_data() const
{
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

const EntityPath VirtualServices::VirtualService::Details::PackageInformation::Signing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signing' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.yfilter)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Signing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Signing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    yang_name = "licensing"; yang_parent_name = "package-information";
}

VirtualServices::VirtualService::Details::PackageInformation::Licensing::~Licensing()
{
}

bool VirtualServices::VirtualService::Details::PackageInformation::Licensing::has_data() const
{
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

const EntityPath VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Licensing' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::PackageInformation::Licensing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    yang_name = "detailed-guest-status"; yang_parent_name = "details";
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::~DetailedGuestStatus()
{
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::has_data() const
{
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

const EntityPath VirtualServices::VirtualService::Details::DetailedGuestStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailedGuestStatus' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    memory{YType::str, "memory"},
    name{YType::str, "name"},
    pid{YType::str, "pid"},
    status{YType::str, "status"},
    uptime{YType::str, "uptime"}
{
    yang_name = "processes"; yang_parent_name = "detailed-guest-status";
}

VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::~Processes()
{
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_data() const
{
    return memory.is_set
	|| name.is_set
	|| pid.is_set
	|| status.is_set
	|| uptime.is_set;
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processes";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Processes' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::DetailedGuestStatus::Processes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory" || name == "name" || name == "pid" || name == "status" || name == "uptime")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::ResourceReservation::ResourceReservation()
    :
    cpu{YType::uint64, "cpu"},
    disk{YType::uint64, "disk"},
    memory{YType::uint64, "memory"}
{
    yang_name = "resource-reservation"; yang_parent_name = "details";
}

VirtualServices::VirtualService::Details::ResourceReservation::~ResourceReservation()
{
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_data() const
{
    return cpu.is_set
	|| disk.is_set
	|| memory.is_set;
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu.yfilter)
	|| ydk::is_set(disk.yfilter)
	|| ydk::is_set(memory.yfilter);
}

std::string VirtualServices::VirtualService::Details::ResourceReservation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-reservation";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::ResourceReservation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceReservation' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (disk.is_set || is_set(disk.yfilter)) leaf_name_data.push_back(disk.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::ResourceReservation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::ResourceReservation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VirtualServices::VirtualService::Details::ResourceReservation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
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
}

void VirtualServices::VirtualService::Details::ResourceReservation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
    if(value_path == "disk")
    {
        disk.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::ResourceReservation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "disk" || name == "memory")
        return true;
    return false;
}

VirtualServices::VirtualService::Details::ResourceAdmission::ResourceAdmission()
    :
    cpu{YType::uint64, "cpu"},
    disk_space{YType::str, "disk-space"},
    memory{YType::str, "memory"},
    state{YType::str, "state"},
    vcpus{YType::str, "vcpus"}
{
    yang_name = "resource-admission"; yang_parent_name = "details";
}

VirtualServices::VirtualService::Details::ResourceAdmission::~ResourceAdmission()
{
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_data() const
{
    return cpu.is_set
	|| disk_space.is_set
	|| memory.is_set
	|| state.is_set
	|| vcpus.is_set;
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpu.yfilter)
	|| ydk::is_set(disk_space.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(vcpus.yfilter);
}

std::string VirtualServices::VirtualService::Details::ResourceAdmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-admission";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Details::ResourceAdmission::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceAdmission' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (disk_space.is_set || is_set(disk_space.yfilter)) leaf_name_data.push_back(disk_space.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vcpus.is_set || is_set(vcpus.yfilter)) leaf_name_data.push_back(vcpus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Details::ResourceAdmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Details::ResourceAdmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VirtualServices::VirtualService::Details::ResourceAdmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
    if(value_path == "disk-space")
    {
        disk_space.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "vcpus")
    {
        vcpus.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Details::ResourceAdmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu" || name == "disk-space" || name == "memory" || name == "state" || name == "vcpus")
        return true;
    return false;
}

VirtualServices::VirtualService::Utilization::Utilization()
    :
    name{YType::str, "name"}
    	,
    cpu_util(std::make_shared<VirtualServices::VirtualService::Utilization::CpuUtil>())
	,memory_util(std::make_shared<VirtualServices::VirtualService::Utilization::MemoryUtil>())
{
    cpu_util->parent = this;

    memory_util->parent = this;

    yang_name = "utilization"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::Utilization::~Utilization()
{
}

bool VirtualServices::VirtualService::Utilization::has_data() const
{
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

const EntityPath VirtualServices::VirtualService::Utilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Utilization' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    actual_application_util{YType::uint64, "actual-application-util"},
    cpu_state{YType::str, "cpu-state"},
    requested_application_util{YType::uint64, "requested-application-util"}
{
    yang_name = "cpu-util"; yang_parent_name = "utilization";
}

VirtualServices::VirtualService::Utilization::CpuUtil::~CpuUtil()
{
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_data() const
{
    return actual_application_util.is_set
	|| cpu_state.is_set
	|| requested_application_util.is_set;
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(actual_application_util.yfilter)
	|| ydk::is_set(cpu_state.yfilter)
	|| ydk::is_set(requested_application_util.yfilter);
}

std::string VirtualServices::VirtualService::Utilization::CpuUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-util";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::Utilization::CpuUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CpuUtil' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actual_application_util.is_set || is_set(actual_application_util.yfilter)) leaf_name_data.push_back(actual_application_util.get_name_leafdata());
    if (cpu_state.is_set || is_set(cpu_state.yfilter)) leaf_name_data.push_back(cpu_state.get_name_leafdata());
    if (requested_application_util.is_set || is_set(requested_application_util.yfilter)) leaf_name_data.push_back(requested_application_util.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Utilization::CpuUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Utilization::CpuUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void VirtualServices::VirtualService::Utilization::CpuUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "requested-application-util")
    {
        requested_application_util = value;
        requested_application_util.value_namespace = name_space;
        requested_application_util.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::Utilization::CpuUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "actual-application-util")
    {
        actual_application_util.yfilter = yfilter;
    }
    if(value_path == "cpu-state")
    {
        cpu_state.yfilter = yfilter;
    }
    if(value_path == "requested-application-util")
    {
        requested_application_util.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::Utilization::CpuUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actual-application-util" || name == "cpu-state" || name == "requested-application-util")
        return true;
    return false;
}

VirtualServices::VirtualService::Utilization::MemoryUtil::MemoryUtil()
    :
    memory_allocation{YType::str, "memory-allocation"},
    memory_used{YType::str, "memory-used"}
{
    yang_name = "memory-util"; yang_parent_name = "utilization";
}

VirtualServices::VirtualService::Utilization::MemoryUtil::~MemoryUtil()
{
}

bool VirtualServices::VirtualService::Utilization::MemoryUtil::has_data() const
{
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

const EntityPath VirtualServices::VirtualService::Utilization::MemoryUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemoryUtil' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_allocation.is_set || is_set(memory_allocation.yfilter)) leaf_name_data.push_back(memory_allocation.get_name_leafdata());
    if (memory_used.is_set || is_set(memory_used.yfilter)) leaf_name_data.push_back(memory_used.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::Utilization::MemoryUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::Utilization::MemoryUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
{
    yang_name = "network-utils"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::NetworkUtils::~NetworkUtils()
{
}

bool VirtualServices::VirtualService::NetworkUtils::has_data() const
{
    for (std::size_t index=0; index<network_util.size(); index++)
    {
        if(network_util[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::NetworkUtils::has_operation() const
{
    for (std::size_t index=0; index<network_util.size(); index++)
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

const EntityPath VirtualServices::VirtualService::NetworkUtils::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkUtils' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkUtils::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-util")
    {
        for(auto const & c : network_util)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService::NetworkUtils::NetworkUtil>();
        c->parent = this;
        network_util.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkUtils::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_util)
    {
        children[c->get_segment_path()] = c;
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
    rx_bytes{YType::uint64, "rx-bytes"},
    rx_errors{YType::uint64, "rx-errors"},
    rx_packets{YType::uint64, "rx-packets"},
    tx_bytes{YType::uint64, "tx-bytes"},
    tx_errors{YType::uint64, "tx-errors"},
    tx_packets{YType::uint64, "tx-packets"}
{
    yang_name = "network-util"; yang_parent_name = "network-utils";
}

VirtualServices::VirtualService::NetworkUtils::NetworkUtil::~NetworkUtil()
{
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_data() const
{
    return name.is_set
	|| alias.is_set
	|| rx_bytes.is_set
	|| rx_errors.is_set
	|| rx_packets.is_set
	|| tx_bytes.is_set
	|| tx_errors.is_set
	|| tx_packets.is_set;
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(rx_bytes.yfilter)
	|| ydk::is_set(rx_errors.yfilter)
	|| ydk::is_set(rx_packets.yfilter)
	|| ydk::is_set(tx_bytes.yfilter)
	|| ydk::is_set(tx_errors.yfilter)
	|| ydk::is_set(tx_packets.yfilter);
}

std::string VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-util" <<"[name='" <<name <<"']" <<"[alias='" <<alias <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkUtil' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (rx_bytes.is_set || is_set(rx_bytes.yfilter)) leaf_name_data.push_back(rx_bytes.get_name_leafdata());
    if (rx_errors.is_set || is_set(rx_errors.yfilter)) leaf_name_data.push_back(rx_errors.get_name_leafdata());
    if (rx_packets.is_set || is_set(rx_packets.yfilter)) leaf_name_data.push_back(rx_packets.get_name_leafdata());
    if (tx_bytes.is_set || is_set(tx_bytes.yfilter)) leaf_name_data.push_back(tx_bytes.get_name_leafdata());
    if (tx_errors.is_set || is_set(tx_errors.yfilter)) leaf_name_data.push_back(tx_errors.get_name_leafdata());
    if (tx_packets.is_set || is_set(tx_packets.yfilter)) leaf_name_data.push_back(tx_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkUtils::NetworkUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "rx-packets")
    {
        rx_packets = value;
        rx_packets.value_namespace = name_space;
        rx_packets.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tx-packets")
    {
        tx_packets = value;
        tx_packets.value_namespace = name_space;
        tx_packets.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rx-bytes")
    {
        rx_bytes.yfilter = yfilter;
    }
    if(value_path == "rx-errors")
    {
        rx_errors.yfilter = yfilter;
    }
    if(value_path == "rx-packets")
    {
        rx_packets.yfilter = yfilter;
    }
    if(value_path == "tx-bytes")
    {
        tx_bytes.yfilter = yfilter;
    }
    if(value_path == "tx-errors")
    {
        tx_errors.yfilter = yfilter;
    }
    if(value_path == "tx-packets")
    {
        tx_packets.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::NetworkUtils::NetworkUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "alias" || name == "rx-bytes" || name == "rx-errors" || name == "rx-packets" || name == "tx-bytes" || name == "tx-errors" || name == "tx-packets")
        return true;
    return false;
}

VirtualServices::VirtualService::StorageUtils::StorageUtils()
{
    yang_name = "storage-utils"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::StorageUtils::~StorageUtils()
{
}

bool VirtualServices::VirtualService::StorageUtils::has_data() const
{
    for (std::size_t index=0; index<storage_util.size(); index++)
    {
        if(storage_util[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::StorageUtils::has_operation() const
{
    for (std::size_t index=0; index<storage_util.size(); index++)
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

const EntityPath VirtualServices::VirtualService::StorageUtils::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StorageUtils' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::StorageUtils::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storage-util")
    {
        for(auto const & c : storage_util)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService::StorageUtils::StorageUtil>();
        c->parent = this;
        storage_util.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::StorageUtils::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : storage_util)
    {
        children[c->get_segment_path()] = c;
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
    available{YType::str, "available"},
    capacity{YType::uint64, "capacity"},
    errors{YType::uint64, "errors"},
    rd_bytes{YType::uint64, "rd-bytes"},
    rd_requests{YType::uint64, "rd-requests"},
    usage{YType::str, "usage"},
    used{YType::uint64, "used"},
    wr_bytes{YType::uint64, "wr-bytes"},
    wr_requests{YType::uint64, "wr-requests"}
{
    yang_name = "storage-util"; yang_parent_name = "storage-utils";
}

VirtualServices::VirtualService::StorageUtils::StorageUtil::~StorageUtil()
{
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_data() const
{
    return name.is_set
	|| alias.is_set
	|| available.is_set
	|| capacity.is_set
	|| errors.is_set
	|| rd_bytes.is_set
	|| rd_requests.is_set
	|| usage.is_set
	|| used.is_set
	|| wr_bytes.is_set
	|| wr_requests.is_set;
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(available.yfilter)
	|| ydk::is_set(capacity.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(rd_bytes.yfilter)
	|| ydk::is_set(rd_requests.yfilter)
	|| ydk::is_set(usage.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(wr_bytes.yfilter)
	|| ydk::is_set(wr_requests.yfilter);
}

std::string VirtualServices::VirtualService::StorageUtils::StorageUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storage-util" <<"[name='" <<name <<"']" <<"[alias='" <<alias <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::StorageUtils::StorageUtil::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StorageUtil' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());
    if (capacity.is_set || is_set(capacity.yfilter)) leaf_name_data.push_back(capacity.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (rd_bytes.is_set || is_set(rd_bytes.yfilter)) leaf_name_data.push_back(rd_bytes.get_name_leafdata());
    if (rd_requests.is_set || is_set(rd_requests.yfilter)) leaf_name_data.push_back(rd_requests.get_name_leafdata());
    if (usage.is_set || is_set(usage.yfilter)) leaf_name_data.push_back(usage.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (wr_bytes.is_set || is_set(wr_bytes.yfilter)) leaf_name_data.push_back(wr_bytes.get_name_leafdata());
    if (wr_requests.is_set || is_set(wr_requests.yfilter)) leaf_name_data.push_back(wr_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::StorageUtils::StorageUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::StorageUtils::StorageUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capacity")
    {
        capacity = value;
        capacity.value_namespace = name_space;
        capacity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "usage")
    {
        usage = value;
        usage.value_namespace = name_space;
        usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
    if(value_path == "capacity")
    {
        capacity.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "rd-bytes")
    {
        rd_bytes.yfilter = yfilter;
    }
    if(value_path == "rd-requests")
    {
        rd_requests.yfilter = yfilter;
    }
    if(value_path == "usage")
    {
        usage.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "wr-bytes")
    {
        wr_bytes.yfilter = yfilter;
    }
    if(value_path == "wr-requests")
    {
        wr_requests.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::StorageUtils::StorageUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "alias" || name == "available" || name == "capacity" || name == "errors" || name == "rd-bytes" || name == "rd-requests" || name == "usage" || name == "used" || name == "wr-bytes" || name == "wr-requests")
        return true;
    return false;
}

VirtualServices::VirtualService::AttachedDevices::AttachedDevices()
{
    yang_name = "attached-devices"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::AttachedDevices::~AttachedDevices()
{
}

bool VirtualServices::VirtualService::AttachedDevices::has_data() const
{
    for (std::size_t index=0; index<attached_device.size(); index++)
    {
        if(attached_device[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::AttachedDevices::has_operation() const
{
    for (std::size_t index=0; index<attached_device.size(); index++)
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

const EntityPath VirtualServices::VirtualService::AttachedDevices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttachedDevices' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::AttachedDevices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attached-device")
    {
        for(auto const & c : attached_device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService::AttachedDevices::AttachedDevice>();
        c->parent = this;
        attached_device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::AttachedDevices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attached_device)
    {
        children[c->get_segment_path()] = c;
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
    alias{YType::str, "alias"},
    type{YType::str, "type"}
{
    yang_name = "attached-device"; yang_parent_name = "attached-devices";
}

VirtualServices::VirtualService::AttachedDevices::AttachedDevice::~AttachedDevice()
{
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_data() const
{
    return name.is_set
	|| alias.is_set
	|| type.is_set;
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attached-device" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttachedDevice' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::AttachedDevices::AttachedDevice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualServices::VirtualService::AttachedDevices::AttachedDevice::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool VirtualServices::VirtualService::AttachedDevices::AttachedDevice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "alias" || name == "type")
        return true;
    return false;
}

VirtualServices::VirtualService::NetworkInterfaces::NetworkInterfaces()
{
    yang_name = "network-interfaces"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::NetworkInterfaces::~NetworkInterfaces()
{
}

bool VirtualServices::VirtualService::NetworkInterfaces::has_data() const
{
    for (std::size_t index=0; index<network_interface.size(); index++)
    {
        if(network_interface[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::NetworkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<network_interface.size(); index++)
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

const EntityPath VirtualServices::VirtualService::NetworkInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkInterfaces' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-interface")
    {
        for(auto const & c : network_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface>();
        c->parent = this;
        network_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_interface)
    {
        children[c->get_segment_path()] = c;
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
    attached_interface{YType::str, "attached-interface"}
{
    yang_name = "network-interface"; yang_parent_name = "network-interfaces";
}

VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::~NetworkInterface()
{
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_data() const
{
    return mac_address.is_set
	|| attached_interface.is_set;
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(attached_interface.yfilter);
}

std::string VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-interface" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkInterface' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (attached_interface.is_set || is_set(attached_interface.yfilter)) leaf_name_data.push_back(attached_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
}

bool VirtualServices::VirtualService::NetworkInterfaces::NetworkInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "attached-interface")
        return true;
    return false;
}

VirtualServices::VirtualService::GuestRoutes::GuestRoutes()
{
    yang_name = "guest-routes"; yang_parent_name = "virtual-service";
}

VirtualServices::VirtualService::GuestRoutes::~GuestRoutes()
{
}

bool VirtualServices::VirtualService::GuestRoutes::has_data() const
{
    for (std::size_t index=0; index<guest_route.size(); index++)
    {
        if(guest_route[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualServices::VirtualService::GuestRoutes::has_operation() const
{
    for (std::size_t index=0; index<guest_route.size(); index++)
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

const EntityPath VirtualServices::VirtualService::GuestRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GuestRoutes' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::GuestRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guest-route")
    {
        for(auto const & c : guest_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<VirtualServices::VirtualService::GuestRoutes::GuestRoute>();
        c->parent = this;
        guest_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::GuestRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : guest_route)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "guest-route"; yang_parent_name = "guest-routes";
}

VirtualServices::VirtualService::GuestRoutes::GuestRoute::~GuestRoute()
{
}

bool VirtualServices::VirtualService::GuestRoutes::GuestRoute::has_data() const
{
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
    path_buffer << "guest-route" <<"[route='" <<route <<"']";

    return path_buffer.str();

}

const EntityPath VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GuestRoute' in Cisco_IOS_XE_virtual_service_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> VirtualServices::VirtualService::GuestRoutes::GuestRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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
