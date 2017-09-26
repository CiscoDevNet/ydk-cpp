
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_installmgr_admin_oper {

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::LoadPath()
    :
    build_information{YType::str, "build-information"},
    version{YType::str, "version"}
    	,
    package(std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>())
{
    package->parent = this;

    yang_name = "load-path"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::~LoadPath()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_data() const
{
    return build_information.is_set
	|| version.is_set
	|| (package !=  nullptr && package->has_data());
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(build_information.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (package !=  nullptr && package->has_operation());
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (build_information.is_set || is_set(build_information.yfilter)) leaf_name_data.push_back(build_information.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "package")
    {
        if(package == nullptr)
        {
            package = std::make_shared<Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package>();
        }
        return package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(package != nullptr)
    {
        children["package"] = package;
    }

    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "build-information")
    {
        build_information = value;
        build_information.value_namespace = name_space;
        build_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "build-information")
    {
        build_information.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "package" || name == "build-information" || name == "version")
        return true;
    return false;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::Package()
    :
    device_name{YType::str, "device-name"},
    name{YType::str, "name"}
{

    yang_name = "package"; yang_parent_name = "load-path"; is_top_level_class = false; has_list_ancestor = true;
}

Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::~Package()
{
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_data() const
{
    return device_name.is_set
	|| name.is_set;
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_name.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_name.is_set || is_set(device_name.yfilter)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device-name")
    {
        device_name = value;
        device_name.value_namespace = name_space;
        device_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device-name")
    {
        device_name.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Install::SoftwareInventory::Requests::Requests_::Request::Inventories::Inventory::LoadPath::Package::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-name" || name == "name")
        return true;
    return false;
}


}
}

