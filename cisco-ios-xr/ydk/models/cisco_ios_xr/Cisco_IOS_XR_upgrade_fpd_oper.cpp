
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_upgrade_fpd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_upgrade_fpd_oper {

Fpd::Fpd()
    :
    nodes(std::make_shared<Fpd::Nodes>())
	,packages(std::make_shared<Fpd::Packages>())
{
    nodes->parent = this;

    packages->parent = this;

    yang_name = "fpd"; yang_parent_name = "Cisco-IOS-XR-upgrade-fpd-oper";
}

Fpd::~Fpd()
{
}

bool Fpd::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (packages !=  nullptr && packages->has_data());
}

bool Fpd::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (packages !=  nullptr && packages->has_operation());
}

std::string Fpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd";

    return path_buffer.str();

}

const EntityPath Fpd::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Fpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Fpd::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "packages")
    {
        if(packages == nullptr)
        {
            packages = std::make_shared<Fpd::Packages>();
        }
        return packages;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::get_children() const
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

void Fpd::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Fpd::clone_ptr() const
{
    return std::make_shared<Fpd>();
}

std::string Fpd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fpd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fpd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Fpd::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "fpd";
}

Fpd::Nodes::~Nodes()
{
}

bool Fpd::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fpd::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Fpd::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fpd::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Fpd::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    devices(std::make_shared<Fpd::Nodes::Node::Devices>())
{
    devices->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Fpd::Nodes::Node::~Node()
{
}

bool Fpd::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (devices !=  nullptr && devices->has_data());
}

bool Fpd::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (devices !=  nullptr && devices->has_operation());
}

std::string Fpd::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Fpd::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "devices")
    {
        if(devices == nullptr)
        {
            devices = std::make_shared<Fpd::Nodes::Node::Devices>();
        }
        return devices;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(devices != nullptr)
    {
        children["devices"] = devices;
    }

    return children;
}

void Fpd::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Fpd::Nodes::Node::Devices::Devices()
{
    yang_name = "devices"; yang_parent_name = "node";
}

Fpd::Nodes::Node::Devices::~Devices()
{
}

bool Fpd::Nodes::Node::Devices::has_data() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd::Nodes::Node::Devices::has_operation() const
{
    for (std::size_t index=0; index<device.size(); index++)
    {
        if(device[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fpd::Nodes::Node::Devices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "devices";

    return path_buffer.str();

}

const EntityPath Fpd::Nodes::Node::Devices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Devices' in Cisco_IOS_XR_upgrade_fpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Nodes::Node::Devices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fpd::Nodes::Node::Devices::Device>();
        c->parent = this;
        device.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Nodes::Node::Devices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd::Nodes::Node::Devices::set_value(const std::string & value_path, std::string value)
{
}

Fpd::Nodes::Node::Devices::Device::Device()
    :
    card_type{YType::str, "card-type"},
    fpd_type{YType::enumeration, "fpd-type"},
    hardware_version{YType::str, "hardware-version"},
    instance{YType::int32, "instance"},
    is_upgrade_downgrade{YType::boolean, "is-upgrade-downgrade"},
    software_version{YType::str, "software-version"},
    sub_type{YType::enumeration, "sub-type"}
{
    yang_name = "device"; yang_parent_name = "devices";
}

Fpd::Nodes::Node::Devices::Device::~Device()
{
}

bool Fpd::Nodes::Node::Devices::Device::has_data() const
{
    return card_type.is_set
	|| fpd_type.is_set
	|| hardware_version.is_set
	|| instance.is_set
	|| is_upgrade_downgrade.is_set
	|| software_version.is_set
	|| sub_type.is_set;
}

bool Fpd::Nodes::Node::Devices::Device::has_operation() const
{
    return is_set(operation)
	|| is_set(card_type.operation)
	|| is_set(fpd_type.operation)
	|| is_set(hardware_version.operation)
	|| is_set(instance.operation)
	|| is_set(is_upgrade_downgrade.operation)
	|| is_set(software_version.operation)
	|| is_set(sub_type.operation);
}

std::string Fpd::Nodes::Node::Devices::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";

    return path_buffer.str();

}

const EntityPath Fpd::Nodes::Node::Devices::Device::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Device' in Cisco_IOS_XR_upgrade_fpd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_type.is_set || is_set(fpd_type.operation)) leaf_name_data.push_back(fpd_type.get_name_leafdata());
    if (hardware_version.is_set || is_set(hardware_version.operation)) leaf_name_data.push_back(hardware_version.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_upgrade_downgrade.is_set || is_set(is_upgrade_downgrade.operation)) leaf_name_data.push_back(is_upgrade_downgrade.get_name_leafdata());
    if (software_version.is_set || is_set(software_version.operation)) leaf_name_data.push_back(software_version.get_name_leafdata());
    if (sub_type.is_set || is_set(sub_type.operation)) leaf_name_data.push_back(sub_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Nodes::Node::Devices::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Nodes::Node::Devices::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fpd::Nodes::Node::Devices::Device::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "fpd-type")
    {
        fpd_type = value;
    }
    if(value_path == "hardware-version")
    {
        hardware_version = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "is-upgrade-downgrade")
    {
        is_upgrade_downgrade = value;
    }
    if(value_path == "software-version")
    {
        software_version = value;
    }
    if(value_path == "sub-type")
    {
        sub_type = value;
    }
}

Fpd::Packages::Packages()
{
    yang_name = "packages"; yang_parent_name = "fpd";
}

Fpd::Packages::~Packages()
{
}

bool Fpd::Packages::has_data() const
{
    for (std::size_t index=0; index<all_package.size(); index++)
    {
        if(all_package[index]->has_data())
            return true;
    }
    return false;
}

bool Fpd::Packages::has_operation() const
{
    for (std::size_t index=0; index<all_package.size(); index++)
    {
        if(all_package[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fpd::Packages::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packages";

    return path_buffer.str();

}

const EntityPath Fpd::Packages::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Packages::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fpd::Packages::AllPackage>();
        c->parent = this;
        all_package.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Packages::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : all_package)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Fpd::Packages::set_value(const std::string & value_path, std::string value)
{
}

Fpd::Packages::AllPackage::AllPackage()
    :
    card_description{YType::str, "card-description"},
    card_type{YType::str, "card-type"},
    fpd_sub_type{YType::enumeration, "fpd-sub-type"},
    fpd_type{YType::enumeration, "fpd-type"},
    minimum_required_hardware_version{YType::str, "minimum-required-hardware-version"},
    minimum_required_software_version{YType::str, "minimum-required-software-version"},
    software_version{YType::str, "software-version"}
{
    yang_name = "all-package"; yang_parent_name = "packages";
}

Fpd::Packages::AllPackage::~AllPackage()
{
}

bool Fpd::Packages::AllPackage::has_data() const
{
    return card_description.is_set
	|| card_type.is_set
	|| fpd_sub_type.is_set
	|| fpd_type.is_set
	|| minimum_required_hardware_version.is_set
	|| minimum_required_software_version.is_set
	|| software_version.is_set;
}

bool Fpd::Packages::AllPackage::has_operation() const
{
    return is_set(operation)
	|| is_set(card_description.operation)
	|| is_set(card_type.operation)
	|| is_set(fpd_sub_type.operation)
	|| is_set(fpd_type.operation)
	|| is_set(minimum_required_hardware_version.operation)
	|| is_set(minimum_required_software_version.operation)
	|| is_set(software_version.operation);
}

std::string Fpd::Packages::AllPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-package";

    return path_buffer.str();

}

const EntityPath Fpd::Packages::AllPackage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-upgrade-fpd-oper:fpd/packages/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_description.is_set || is_set(card_description.operation)) leaf_name_data.push_back(card_description.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (fpd_sub_type.is_set || is_set(fpd_sub_type.operation)) leaf_name_data.push_back(fpd_sub_type.get_name_leafdata());
    if (fpd_type.is_set || is_set(fpd_type.operation)) leaf_name_data.push_back(fpd_type.get_name_leafdata());
    if (minimum_required_hardware_version.is_set || is_set(minimum_required_hardware_version.operation)) leaf_name_data.push_back(minimum_required_hardware_version.get_name_leafdata());
    if (minimum_required_software_version.is_set || is_set(minimum_required_software_version.operation)) leaf_name_data.push_back(minimum_required_software_version.get_name_leafdata());
    if (software_version.is_set || is_set(software_version.operation)) leaf_name_data.push_back(software_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fpd::Packages::AllPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Fpd::Packages::AllPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Fpd::Packages::AllPackage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-description")
    {
        card_description = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "fpd-sub-type")
    {
        fpd_sub_type = value;
    }
    if(value_path == "fpd-type")
    {
        fpd_type = value;
    }
    if(value_path == "minimum-required-hardware-version")
    {
        minimum_required_hardware_version = value;
    }
    if(value_path == "minimum-required-software-version")
    {
        minimum_required_software_version = value;
    }
    if(value_path == "software-version")
    {
        software_version = value;
    }
}

const Enum::YLeaf FpdSub1Enum::fpga1 {0, "fpga1"};
const Enum::YLeaf FpdSub1Enum::rommon {1, "rommon"};
const Enum::YLeaf FpdSub1Enum::rommona {2, "rommona"};
const Enum::YLeaf FpdSub1Enum::fabric_loader {3, "fabric-loader"};
const Enum::YLeaf FpdSub1Enum::fpga2 {4, "fpga2"};
const Enum::YLeaf FpdSub1Enum::fpga3 {5, "fpga3"};
const Enum::YLeaf FpdSub1Enum::fpga4 {6, "fpga4"};
const Enum::YLeaf FpdSub1Enum::fpga5 {7, "fpga5"};
const Enum::YLeaf FpdSub1Enum::fpga6 {8, "fpga6"};
const Enum::YLeaf FpdSub1Enum::fpga7 {9, "fpga7"};
const Enum::YLeaf FpdSub1Enum::fpga8 {10, "fpga8"};
const Enum::YLeaf FpdSub1Enum::fpga9 {11, "fpga9"};
const Enum::YLeaf FpdSub1Enum::fpga10 {12, "fpga10"};
const Enum::YLeaf FpdSub1Enum::fpga11 {13, "fpga11"};
const Enum::YLeaf FpdSub1Enum::fpga12 {14, "fpga12"};
const Enum::YLeaf FpdSub1Enum::fpga13 {15, "fpga13"};
const Enum::YLeaf FpdSub1Enum::fpga14 {16, "fpga14"};
const Enum::YLeaf FpdSub1Enum::cpld1 {17, "cpld1"};
const Enum::YLeaf FpdSub1Enum::cpld2 {18, "cpld2"};
const Enum::YLeaf FpdSub1Enum::cpld3 {19, "cpld3"};
const Enum::YLeaf FpdSub1Enum::cpld4 {20, "cpld4"};
const Enum::YLeaf FpdSub1Enum::cpld5 {21, "cpld5"};
const Enum::YLeaf FpdSub1Enum::cpld6 {22, "cpld6"};
const Enum::YLeaf FpdSub1Enum::cbc {23, "cbc"};
const Enum::YLeaf FpdSub1Enum::hsbi {24, "hsbi"};
const Enum::YLeaf FpdSub1Enum::txpod {25, "txpod"};
const Enum::YLeaf FpdSub1Enum::rxpod {26, "rxpod"};
const Enum::YLeaf FpdSub1Enum::ibmc {27, "ibmc"};
const Enum::YLeaf FpdSub1Enum::fsbl {28, "fsbl"};
const Enum::YLeaf FpdSub1Enum::lnx {29, "lnx"};
const Enum::YLeaf FpdSub1Enum::fpga15 {30, "fpga15"};
const Enum::YLeaf FpdSub1Enum::fpga16 {31, "fpga16"};
const Enum::YLeaf FpdSub1Enum::fc_fsbl {32, "fc-fsbl"};
const Enum::YLeaf FpdSub1Enum::fc_lnx {33, "fc-lnx"};

const Enum::YLeaf FpdEnum::spa {0, "spa"};
const Enum::YLeaf FpdEnum::lc {1, "lc"};
const Enum::YLeaf FpdEnum::sam {2, "sam"};

const Enum::YLeaf Fpd1Enum::spa {0, "spa"};
const Enum::YLeaf Fpd1Enum::lc {1, "lc"};
const Enum::YLeaf Fpd1Enum::sam {2, "sam"};

const Enum::YLeaf FpdSubEnum::fpga1 {0, "fpga1"};
const Enum::YLeaf FpdSubEnum::rommon {1, "rommon"};
const Enum::YLeaf FpdSubEnum::rommona {2, "rommona"};
const Enum::YLeaf FpdSubEnum::fabldr {3, "fabldr"};
const Enum::YLeaf FpdSubEnum::fpga2 {4, "fpga2"};
const Enum::YLeaf FpdSubEnum::fpga3 {5, "fpga3"};
const Enum::YLeaf FpdSubEnum::fpga4 {6, "fpga4"};
const Enum::YLeaf FpdSubEnum::fpga5 {7, "fpga5"};
const Enum::YLeaf FpdSubEnum::fpga6 {8, "fpga6"};
const Enum::YLeaf FpdSubEnum::fpga7 {9, "fpga7"};
const Enum::YLeaf FpdSubEnum::fpga8 {10, "fpga8"};
const Enum::YLeaf FpdSubEnum::fpga9 {11, "fpga9"};
const Enum::YLeaf FpdSubEnum::fpga10 {12, "fpga10"};
const Enum::YLeaf FpdSubEnum::fpga11 {13, "fpga11"};
const Enum::YLeaf FpdSubEnum::fpga12 {14, "fpga12"};
const Enum::YLeaf FpdSubEnum::fpga13 {15, "fpga13"};
const Enum::YLeaf FpdSubEnum::fpga14 {16, "fpga14"};
const Enum::YLeaf FpdSubEnum::cpld1 {17, "cpld1"};
const Enum::YLeaf FpdSubEnum::cpld2 {18, "cpld2"};
const Enum::YLeaf FpdSubEnum::cpld3 {19, "cpld3"};
const Enum::YLeaf FpdSubEnum::cpld4 {20, "cpld4"};
const Enum::YLeaf FpdSubEnum::cpld5 {21, "cpld5"};
const Enum::YLeaf FpdSubEnum::cpld6 {22, "cpld6"};
const Enum::YLeaf FpdSubEnum::cbc {23, "cbc"};
const Enum::YLeaf FpdSubEnum::hsbi {24, "hsbi"};
const Enum::YLeaf FpdSubEnum::txpod {25, "txpod"};
const Enum::YLeaf FpdSubEnum::rxpod {26, "rxpod"};
const Enum::YLeaf FpdSubEnum::ibmc {27, "ibmc"};
const Enum::YLeaf FpdSubEnum::fsbl {28, "fsbl"};
const Enum::YLeaf FpdSubEnum::lnx {29, "lnx"};
const Enum::YLeaf FpdSubEnum::fpga15 {30, "fpga15"};
const Enum::YLeaf FpdSubEnum::fpga16 {31, "fpga16"};
const Enum::YLeaf FpdSubEnum::fc_fsbl {32, "fc-fsbl"};
const Enum::YLeaf FpdSubEnum::fc_lnx {33, "fc-lnx"};


}
}

