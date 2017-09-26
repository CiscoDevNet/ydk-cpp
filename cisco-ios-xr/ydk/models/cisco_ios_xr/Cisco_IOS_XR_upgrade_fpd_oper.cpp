
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_upgrade_fpd_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_upgrade_fpd_oper {

Fpd_::Fpd_()
    :
    nodes(std::make_shared<Fpd_::Nodes>())
	,packages(std::make_shared<Fpd_::Packages>())
{
    nodes->parent = this;
    packages->parent = this;

    yang_name = "fpd"; yang_parent_name = "Cisco-IOS-XR-upgrade-fpd-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Fpd_::~Fpd_()
{
}

bool Fpd_::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (packages !=  nullptr && packages->has_data());
}

bool Fpd_::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (packages !=  nullptr && packages->has_operation());
}

std::string Fpd_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Fpd_::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<Fpd_::Packages>();
        }
        return packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(packages != nullptr)
    {
        children["packages"] = packages;
    }

    return children;
}

void Fpd_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fpd_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Fpd_::clone_ptr() const
{
    return std::make_shared<Fpd_>();
}

std::string Fpd_::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fpd_::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fpd_::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Fpd_::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Fpd_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes" || name == "packages")
        return true;
    return false;
}

Fpd_::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "fpd"; is_top_level_class = false; has_list_ancestor = false;
}

Fpd_::Nodes::~Nodes()
{
}

bool Fpd_::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd_::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fpd_::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Fpd_::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fpd_::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd_::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fpd_::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fpd_::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Fpd_::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    devices(std::make_shared<Fpd_::Nodes::Node::Devices>())
{
    devices->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Fpd_::Nodes::Node::~Node()
{
}

bool Fpd_::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (devices !=  nullptr && devices->has_data());
}

bool Fpd_::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (devices !=  nullptr && devices->has_operation());
}

std::string Fpd_::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Fpd_::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "devices")
    {
        if(devices == nullptr)
        {
            devices = std::make_shared<Fpd_::Nodes::Node::Devices>();
        }
        return devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(devices != nullptr)
    {
        children["devices"] = devices;
    }

    return children;
}

void Fpd_::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Fpd_::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Fpd_::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "devices" || name == "node-name")
        return true;
    return false;
}

Fpd_::Nodes::Node::Devices::Devices()
{

    yang_name = "devices"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Fpd_::Nodes::Node::Devices::~Devices()
{
}

bool Fpd_::Nodes::Node::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd_::Nodes::Node::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fpd_::Nodes::Node::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Nodes::Node::Devices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Nodes::Node::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        for(auto const & c : device)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fpd_::Nodes::Node::Devices::Device>();
        c->parent = this;
        device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Nodes::Node::Devices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd_::Nodes::Node::Devices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fpd_::Nodes::Node::Devices::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fpd_::Nodes::Node::Devices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Fpd_::Nodes::Node::Devices::Device::Device()
    :
    card_type{YType::str, "card-type"},
    fpd_type{YType::enumeration, "fpd-type"},
    hardware_version{YType::str, "hardware-version"},
    instance{YType::int32, "instance"},
    is_upgrade_downgrade{YType::boolean, "is-upgrade-downgrade"},
    software_version{YType::str, "software-version"},
    sub_type{YType::enumeration, "sub-type"}
{

    yang_name = "device"; yang_parent_name = "devices"; is_top_level_class = false; has_list_ancestor = true;
}

Fpd_::Nodes::Node::Devices::Device::~Device()
{
}

bool Fpd_::Nodes::Node::Devices::Device::has_data() const
{
    return card_type.is_set
	|| fpd_type.is_set
	|| hardware_version.is_set
	|| instance.is_set
	|| is_upgrade_downgrade.is_set
	|| software_version.is_set
	|| sub_type.is_set;
}

bool Fpd_::Nodes::Node::Devices::Device::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(fpd_type.yfilter)
	|| ydk::is_set(hardware_version.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(is_upgrade_downgrade.yfilter)
	|| ydk::is_set(software_version.yfilter)
	|| ydk::is_set(sub_type.yfilter);
}

std::string Fpd_::Nodes::Node::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Nodes::Node::Devices::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_type.is_set || is_set(fpd_type.yfilter)) leaf_name_data.push_back(fpd_type.get_name_leafdata());
    if (hardware_version.is_set || is_set(hardware_version.yfilter)) leaf_name_data.push_back(hardware_version.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_upgrade_downgrade.is_set || is_set(is_upgrade_downgrade.yfilter)) leaf_name_data.push_back(is_upgrade_downgrade.get_name_leafdata());
    if (software_version.is_set || is_set(software_version.yfilter)) leaf_name_data.push_back(software_version.get_name_leafdata());
    if (sub_type.is_set || is_set(sub_type.yfilter)) leaf_name_data.push_back(sub_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Nodes::Node::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Nodes::Node::Devices::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fpd_::Nodes::Node::Devices::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-type")
    {
        fpd_type = value;
        fpd_type.value_namespace = name_space;
        fpd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-version")
    {
        hardware_version = value;
        hardware_version.value_namespace = name_space;
        hardware_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-upgrade-downgrade")
    {
        is_upgrade_downgrade = value;
        is_upgrade_downgrade.value_namespace = name_space;
        is_upgrade_downgrade.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-version")
    {
        software_version = value;
        software_version.value_namespace = name_space;
        software_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-type")
    {
        sub_type = value;
        sub_type.value_namespace = name_space;
        sub_type.value_namespace_prefix = name_space_prefix;
    }
}

void Fpd_::Nodes::Node::Devices::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "fpd-type")
    {
        fpd_type.yfilter = yfilter;
    }
    if(value_path == "hardware-version")
    {
        hardware_version.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "is-upgrade-downgrade")
    {
        is_upgrade_downgrade.yfilter = yfilter;
    }
    if(value_path == "software-version")
    {
        software_version.yfilter = yfilter;
    }
    if(value_path == "sub-type")
    {
        sub_type.yfilter = yfilter;
    }
}

bool Fpd_::Nodes::Node::Devices::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-type" || name == "fpd-type" || name == "hardware-version" || name == "instance" || name == "is-upgrade-downgrade" || name == "software-version" || name == "sub-type")
        return true;
    return false;
}

Fpd_::Packages::Packages()
{

    yang_name = "packages"; yang_parent_name = "fpd"; is_top_level_class = false; has_list_ancestor = false;
}

Fpd_::Packages::~Packages()
{
}

bool Fpd_::Packages::has_data() const
{
    for (std::size_t index=0; index<all_package.size(); index++)
    {
        if(all_package[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd_::Packages::has_operation() const
{
    for (std::size_t index=0; index<all_package.size(); index++)
    {
        if(all_package[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Fpd_::Packages::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/" << get_segment_path();
    return path_buffer.str();
}

std::string Fpd_::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Packages::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-package")
    {
        for(auto const & c : all_package)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Fpd_::Packages::AllPackage>();
        c->parent = this;
        all_package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : all_package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd_::Packages::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Fpd_::Packages::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Fpd_::Packages::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-package")
        return true;
    return false;
}

Fpd_::Packages::AllPackage::AllPackage()
    :
    card_description{YType::str, "card-description"},
    card_type{YType::str, "card-type"},
    fpd_sub_type{YType::enumeration, "fpd-sub-type"},
    fpd_type{YType::enumeration, "fpd-type"},
    minimum_required_hardware_version{YType::str, "minimum-required-hardware-version"},
    minimum_required_software_version{YType::str, "minimum-required-software-version"},
    software_version{YType::str, "software-version"}
{

    yang_name = "all-package"; yang_parent_name = "packages"; is_top_level_class = false; has_list_ancestor = false;
}

Fpd_::Packages::AllPackage::~AllPackage()
{
}

bool Fpd_::Packages::AllPackage::has_data() const
{
    return card_description.is_set
	|| card_type.is_set
	|| fpd_sub_type.is_set
	|| fpd_type.is_set
	|| minimum_required_hardware_version.is_set
	|| minimum_required_software_version.is_set
	|| software_version.is_set;
}

bool Fpd_::Packages::AllPackage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_description.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(fpd_sub_type.yfilter)
	|| ydk::is_set(fpd_type.yfilter)
	|| ydk::is_set(minimum_required_hardware_version.yfilter)
	|| ydk::is_set(minimum_required_software_version.yfilter)
	|| ydk::is_set(software_version.yfilter);
}

std::string Fpd_::Packages::AllPackage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/packages/" << get_segment_path();
    return path_buffer.str();
}

std::string Fpd_::Packages::AllPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Fpd_::Packages::AllPackage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_description.is_set || is_set(card_description.yfilter)) leaf_name_data.push_back(card_description.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_sub_type.is_set || is_set(fpd_sub_type.yfilter)) leaf_name_data.push_back(fpd_sub_type.get_name_leafdata());
    if (fpd_type.is_set || is_set(fpd_type.yfilter)) leaf_name_data.push_back(fpd_type.get_name_leafdata());
    if (minimum_required_hardware_version.is_set || is_set(minimum_required_hardware_version.yfilter)) leaf_name_data.push_back(minimum_required_hardware_version.get_name_leafdata());
    if (minimum_required_software_version.is_set || is_set(minimum_required_software_version.yfilter)) leaf_name_data.push_back(minimum_required_software_version.get_name_leafdata());
    if (software_version.is_set || is_set(software_version.yfilter)) leaf_name_data.push_back(software_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Fpd_::Packages::AllPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd_::Packages::AllPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fpd_::Packages::AllPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-description")
    {
        card_description = value;
        card_description.value_namespace = name_space;
        card_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-sub-type")
    {
        fpd_sub_type = value;
        fpd_sub_type.value_namespace = name_space;
        fpd_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fpd-type")
    {
        fpd_type = value;
        fpd_type.value_namespace = name_space;
        fpd_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-required-hardware-version")
    {
        minimum_required_hardware_version = value;
        minimum_required_hardware_version.value_namespace = name_space;
        minimum_required_hardware_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-required-software-version")
    {
        minimum_required_software_version = value;
        minimum_required_software_version.value_namespace = name_space;
        minimum_required_software_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-version")
    {
        software_version = value;
        software_version.value_namespace = name_space;
        software_version.value_namespace_prefix = name_space_prefix;
    }
}

void Fpd_::Packages::AllPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-description")
    {
        card_description.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "fpd-sub-type")
    {
        fpd_sub_type.yfilter = yfilter;
    }
    if(value_path == "fpd-type")
    {
        fpd_type.yfilter = yfilter;
    }
    if(value_path == "minimum-required-hardware-version")
    {
        minimum_required_hardware_version.yfilter = yfilter;
    }
    if(value_path == "minimum-required-software-version")
    {
        minimum_required_software_version.yfilter = yfilter;
    }
    if(value_path == "software-version")
    {
        software_version.yfilter = yfilter;
    }
}

bool Fpd_::Packages::AllPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-description" || name == "card-type" || name == "fpd-sub-type" || name == "fpd-type" || name == "minimum-required-hardware-version" || name == "minimum-required-software-version" || name == "software-version")
        return true;
    return false;
}

const Enum::YLeaf FpdSub1::fpga1 {0, "fpga1"};
const Enum::YLeaf FpdSub1::rommon {1, "rommon"};
const Enum::YLeaf FpdSub1::rommona {2, "rommona"};
const Enum::YLeaf FpdSub1::fabric_loader {3, "fabric-loader"};
const Enum::YLeaf FpdSub1::fpga2 {4, "fpga2"};
const Enum::YLeaf FpdSub1::fpga3 {5, "fpga3"};
const Enum::YLeaf FpdSub1::fpga4 {6, "fpga4"};
const Enum::YLeaf FpdSub1::fpga5 {7, "fpga5"};
const Enum::YLeaf FpdSub1::fpga6 {8, "fpga6"};
const Enum::YLeaf FpdSub1::fpga7 {9, "fpga7"};
const Enum::YLeaf FpdSub1::fpga8 {10, "fpga8"};
const Enum::YLeaf FpdSub1::fpga9 {11, "fpga9"};
const Enum::YLeaf FpdSub1::fpga10 {12, "fpga10"};
const Enum::YLeaf FpdSub1::fpga11 {13, "fpga11"};
const Enum::YLeaf FpdSub1::fpga12 {14, "fpga12"};
const Enum::YLeaf FpdSub1::fpga13 {15, "fpga13"};
const Enum::YLeaf FpdSub1::fpga14 {16, "fpga14"};
const Enum::YLeaf FpdSub1::cpld1 {17, "cpld1"};
const Enum::YLeaf FpdSub1::cpld2 {18, "cpld2"};
const Enum::YLeaf FpdSub1::cpld3 {19, "cpld3"};
const Enum::YLeaf FpdSub1::cpld4 {20, "cpld4"};
const Enum::YLeaf FpdSub1::cpld5 {21, "cpld5"};
const Enum::YLeaf FpdSub1::cpld6 {22, "cpld6"};
const Enum::YLeaf FpdSub1::cbc {23, "cbc"};
const Enum::YLeaf FpdSub1::hsbi {24, "hsbi"};
const Enum::YLeaf FpdSub1::txpod {25, "txpod"};
const Enum::YLeaf FpdSub1::rxpod {26, "rxpod"};
const Enum::YLeaf FpdSub1::ibmc {27, "ibmc"};
const Enum::YLeaf FpdSub1::fsbl {28, "fsbl"};
const Enum::YLeaf FpdSub1::lnx {29, "lnx"};
const Enum::YLeaf FpdSub1::fpga15 {30, "fpga15"};
const Enum::YLeaf FpdSub1::fpga16 {31, "fpga16"};
const Enum::YLeaf FpdSub1::fc_fsbl {32, "fc-fsbl"};
const Enum::YLeaf FpdSub1::fc_lnx {33, "fc-lnx"};

const Enum::YLeaf Fpd::spa {0, "spa"};
const Enum::YLeaf Fpd::lc {1, "lc"};
const Enum::YLeaf Fpd::sam {2, "sam"};

const Enum::YLeaf FpdSub::fpga1 {0, "fpga1"};
const Enum::YLeaf FpdSub::rommon {1, "rommon"};
const Enum::YLeaf FpdSub::rommona {2, "rommona"};
const Enum::YLeaf FpdSub::fabldr {3, "fabldr"};
const Enum::YLeaf FpdSub::fpga2 {4, "fpga2"};
const Enum::YLeaf FpdSub::fpga3 {5, "fpga3"};
const Enum::YLeaf FpdSub::fpga4 {6, "fpga4"};
const Enum::YLeaf FpdSub::fpga5 {7, "fpga5"};
const Enum::YLeaf FpdSub::fpga6 {8, "fpga6"};
const Enum::YLeaf FpdSub::fpga7 {9, "fpga7"};
const Enum::YLeaf FpdSub::fpga8 {10, "fpga8"};
const Enum::YLeaf FpdSub::fpga9 {11, "fpga9"};
const Enum::YLeaf FpdSub::fpga10 {12, "fpga10"};
const Enum::YLeaf FpdSub::fpga11 {13, "fpga11"};
const Enum::YLeaf FpdSub::fpga12 {14, "fpga12"};
const Enum::YLeaf FpdSub::fpga13 {15, "fpga13"};
const Enum::YLeaf FpdSub::fpga14 {16, "fpga14"};
const Enum::YLeaf FpdSub::cpld1 {17, "cpld1"};
const Enum::YLeaf FpdSub::cpld2 {18, "cpld2"};
const Enum::YLeaf FpdSub::cpld3 {19, "cpld3"};
const Enum::YLeaf FpdSub::cpld4 {20, "cpld4"};
const Enum::YLeaf FpdSub::cpld5 {21, "cpld5"};
const Enum::YLeaf FpdSub::cpld6 {22, "cpld6"};
const Enum::YLeaf FpdSub::cbc {23, "cbc"};
const Enum::YLeaf FpdSub::hsbi {24, "hsbi"};
const Enum::YLeaf FpdSub::txpod {25, "txpod"};
const Enum::YLeaf FpdSub::rxpod {26, "rxpod"};
const Enum::YLeaf FpdSub::ibmc {27, "ibmc"};
const Enum::YLeaf FpdSub::fsbl {28, "fsbl"};
const Enum::YLeaf FpdSub::lnx {29, "lnx"};
const Enum::YLeaf FpdSub::fpga15 {30, "fpga15"};
const Enum::YLeaf FpdSub::fpga16 {31, "fpga16"};
const Enum::YLeaf FpdSub::fc_fsbl {32, "fc-fsbl"};
const Enum::YLeaf FpdSub::fc_lnx {33, "fc-lnx"};

const Enum::YLeaf Fpd1::spa {0, "spa"};
const Enum::YLeaf Fpd1::lc {1, "lc"};
const Enum::YLeaf Fpd1::sam {2, "sam"};


}
}

