
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_9.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configured_circuit_type{YType::enumeration, "configured-circuit-type"},
    mesh_group{YType::uint32, "mesh-group"},
    is_type{YType::enumeration, "is-type"},
    nsr_intf{YType::boolean, "nsr-intf"}
        ,
    configured_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>())
    , interface_status_and_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>())
{
    configured_status->parent = this;
    interface_status_and_data->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::~Interface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| configured_circuit_type.is_set
	|| mesh_group.is_set
	|| is_type.is_set
	|| nsr_intf.is_set
	|| (configured_status !=  nullptr && configured_status->has_data())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configured_circuit_type.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(is_type.yfilter)
	|| ydk::is_set(nsr_intf.yfilter)
	|| (configured_status !=  nullptr && configured_status->has_operation())
	|| (interface_status_and_data !=  nullptr && interface_status_and_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configured_circuit_type.is_set || is_set(configured_circuit_type.yfilter)) leaf_name_data.push_back(configured_circuit_type.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (is_type.is_set || is_set(is_type.yfilter)) leaf_name_data.push_back(is_type.get_name_leafdata());
    if (nsr_intf.is_set || is_set(nsr_intf.yfilter)) leaf_name_data.push_back(nsr_intf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-status")
    {
        if(configured_status == nullptr)
        {
            configured_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus>();
        }
        return configured_status;
    }

    if(child_yang_name == "interface-status-and-data")
    {
        if(interface_status_and_data == nullptr)
        {
            interface_status_and_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData>();
        }
        return interface_status_and_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(configured_status != nullptr)
    {
        _children["configured-status"] = configured_status;
    }

    if(interface_status_and_data != nullptr)
    {
        _children["interface-status-and-data"] = interface_status_and_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type = value;
        configured_circuit_type.value_namespace = name_space;
        configured_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-type")
    {
        is_type = value;
        is_type.value_namespace = name_space;
        is_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf = value;
        nsr_intf.value_namespace = name_space;
        nsr_intf.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configured-circuit-type")
    {
        configured_circuit_type.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "is-type")
    {
        is_type.yfilter = yfilter;
    }
    if(value_path == "nsr-intf")
    {
        nsr_intf.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-status" || name == "interface-status-and-data" || name == "interface-name" || name == "configured-circuit-type" || name == "mesh-group" || name == "is-type" || name == "nsr-intf")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::ConfiguredStatus()
    :
    adjacency_form_status{YType::boolean, "adjacency-form-status"},
    adv_prefix_status{YType::boolean, "adv-prefix-status"}
{

    yang_name = "configured-status"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::~ConfiguredStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_data() const
{
    if (is_presence_container) return true;
    return adjacency_form_status.is_set
	|| adv_prefix_status.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency_form_status.yfilter)
	|| ydk::is_set(adv_prefix_status.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_form_status.is_set || is_set(adjacency_form_status.yfilter)) leaf_name_data.push_back(adjacency_form_status.get_name_leafdata());
    if (adv_prefix_status.is_set || is_set(adv_prefix_status.yfilter)) leaf_name_data.push_back(adv_prefix_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status = value;
        adjacency_form_status.value_namespace = name_space;
        adjacency_form_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status = value;
        adv_prefix_status.value_namespace = name_space;
        adv_prefix_status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-form-status")
    {
        adjacency_form_status.yfilter = yfilter;
    }
    if(value_path == "adv-prefix-status")
    {
        adv_prefix_status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::ConfiguredStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::InterfaceStatusAndData()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>())
    , enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "interface-status-and-data"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::~InterfaceStatusAndData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-status-and-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        _children["enabled"] = enabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::Enabled()
    :
    interface_media_type{YType::enumeration, "interface-media-type"},
    enabled_circuit_type{YType::enumeration, "enabled-circuit-type"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    rsi_srlg_registered{YType::boolean, "rsi-srlg-registered"},
    bandwidth{YType::uint32, "bandwidth"}
        ,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>())
    , adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>())
    , p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData>())
    , bfd_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>())
    , clns_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>())
    , underlying_interface(this, {})
    , per_area_data(this, {})
    , per_topology_data(this, {})
    , per_address_family_data(this, {})
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    p2p_data->parent = this;
    bfd_data->parent = this;
    clns_data->parent = this;

    yang_name = "enabled"; yang_parent_name = "interface-status-and-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::~Enabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_address_family_data.len(); index++)
    {
        if(per_address_family_data[index]->has_data())
            return true;
    }
    return interface_media_type.is_set
	|| enabled_circuit_type.is_set
	|| local_circuit_number.is_set
	|| rsi_srlg_registered.is_set
	|| bandwidth.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (p2p_data !=  nullptr && p2p_data->has_data())
	|| (bfd_data !=  nullptr && bfd_data->has_data())
	|| (clns_data !=  nullptr && clns_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_operation() const
{
    for (std::size_t index=0; index<underlying_interface.len(); index++)
    {
        if(underlying_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topology_data.len(); index++)
    {
        if(per_topology_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_address_family_data.len(); index++)
    {
        if(per_address_family_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| ydk::is_set(enabled_circuit_type.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(rsi_srlg_registered.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (p2p_data !=  nullptr && p2p_data->has_operation())
	|| (bfd_data !=  nullptr && bfd_data->has_operation())
	|| (clns_data !=  nullptr && clns_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());
    if (enabled_circuit_type.is_set || is_set(enabled_circuit_type.yfilter)) leaf_name_data.push_back(enabled_circuit_type.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (rsi_srlg_registered.is_set || is_set(rsi_srlg_registered.yfilter)) leaf_name_data.push_back(rsi_srlg_registered.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "p2p-data")
    {
        if(p2p_data == nullptr)
        {
            p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData>();
        }
        return p2p_data;
    }

    if(child_yang_name == "bfd-data")
    {
        if(bfd_data == nullptr)
        {
            bfd_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData>();
        }
        return bfd_data;
    }

    if(child_yang_name == "clns-data")
    {
        if(clns_data == nullptr)
        {
            clns_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData>();
        }
        return clns_data;
    }

    if(child_yang_name == "underlying-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface>();
        ent_->parent = this;
        underlying_interface.append(ent_);
        return ent_;
    }

    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "per-topology-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData>();
        ent_->parent = this;
        per_topology_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "per-address-family-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData>();
        ent_->parent = this;
        per_address_family_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_form_status != nullptr)
    {
        _children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        _children["adv-prefix-status"] = adv_prefix_status;
    }

    if(p2p_data != nullptr)
    {
        _children["p2p-data"] = p2p_data;
    }

    if(bfd_data != nullptr)
    {
        _children["bfd-data"] = bfd_data;
    }

    if(clns_data != nullptr)
    {
        _children["clns-data"] = clns_data;
    }

    count_ = 0;
    for (auto ent_ : underlying_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : per_topology_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : per_address_family_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type = value;
        enabled_circuit_type.value_namespace = name_space;
        enabled_circuit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered = value;
        rsi_srlg_registered.value_namespace = name_space;
        rsi_srlg_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
    if(value_path == "enabled-circuit-type")
    {
        enabled_circuit_type.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "rsi-srlg-registered")
    {
        rsi_srlg_registered.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "p2p-data" || name == "bfd-data" || name == "clns-data" || name == "underlying-interface" || name == "per-area-data" || name == "per-topology-data" || name == "per-address-family-data" || name == "interface-media-type" || name == "enabled-circuit-type" || name == "local-circuit-number" || name == "rsi-srlg-registered" || name == "bandwidth")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::P2pData()
    :
    time_until_next_iih{YType::uint32, "time-until-next-iih"},
    retransmit_lsp_queue_size{YType::uint32, "retransmit-lsp-queue-size"},
    retransmit_lsp_interval{YType::uint32, "retransmit-lsp-interval"},
    extended_circuit_number{YType::uint32, "extended-circuit-number"}
{

    yang_name = "p2p-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::~P2pData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_data() const
{
    if (is_presence_container) return true;
    return time_until_next_iih.is_set
	|| retransmit_lsp_queue_size.is_set
	|| retransmit_lsp_interval.is_set
	|| extended_circuit_number.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter)
	|| ydk::is_set(retransmit_lsp_queue_size.yfilter)
	|| ydk::is_set(retransmit_lsp_interval.yfilter)
	|| ydk::is_set(extended_circuit_number.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());
    if (retransmit_lsp_queue_size.is_set || is_set(retransmit_lsp_queue_size.yfilter)) leaf_name_data.push_back(retransmit_lsp_queue_size.get_name_leafdata());
    if (retransmit_lsp_interval.is_set || is_set(retransmit_lsp_interval.yfilter)) leaf_name_data.push_back(retransmit_lsp_interval.get_name_leafdata());
    if (extended_circuit_number.is_set || is_set(extended_circuit_number.yfilter)) leaf_name_data.push_back(extended_circuit_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size = value;
        retransmit_lsp_queue_size.value_namespace = name_space;
        retransmit_lsp_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval = value;
        retransmit_lsp_interval.value_namespace = name_space;
        retransmit_lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number = value;
        extended_circuit_number.value_namespace = name_space;
        extended_circuit_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-queue-size")
    {
        retransmit_lsp_queue_size.yfilter = yfilter;
    }
    if(value_path == "retransmit-lsp-interval")
    {
        retransmit_lsp_interval.yfilter = yfilter;
    }
    if(value_path == "extended-circuit-number")
    {
        extended_circuit_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::P2pData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-until-next-iih" || name == "retransmit-lsp-queue-size" || name == "retransmit-lsp-interval" || name == "extended-circuit-number")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::BfdData()
    :
    enabled{YType::boolean, "enabled"},
    ipv6_enabled{YType::boolean, "ipv6-enabled"},
    interval{YType::uint32, "interval"},
    multiplier{YType::uint32, "multiplier"}
{

    yang_name = "bfd-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::~BfdData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_data() const
{
    if (is_presence_container) return true;
    return enabled.is_set
	|| ipv6_enabled.is_set
	|| interval.is_set
	|| multiplier.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(ipv6_enabled.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (ipv6_enabled.is_set || is_set(ipv6_enabled.yfilter)) leaf_name_data.push_back(ipv6_enabled.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled = value;
        ipv6_enabled.value_namespace = name_space;
        ipv6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "ipv6-enabled")
    {
        ipv6_enabled.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::BfdData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled" || name == "ipv6-enabled" || name == "interval" || name == "multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsData()
    :
    time_until_next_lsp{YType::uint32, "time-until-next-lsp"},
    lsp_transmit_requested_flag{YType::boolean, "lsp-transmit-requested-flag"},
    lsp_transmitted_flag{YType::boolean, "lsp-transmitted-flag"},
    lsp_txmitd_b2b_limit{YType::uint32, "lsp-txmitd-b2b-limit"},
    lsp_txmt_b2b_msecs{YType::uint32, "lsp-txmt-b2b-msecs"},
    last_lsp_level_transmitted{YType::enumeration, "last-lsp-level-transmitted"},
    last_lsp_id_transmitted{YType::str, "last-lsp-id-transmitted"}
        ,
    clns_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>())
    , mtu_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>())
    , snpa_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>())
    , media_specific_state(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>())
{
    clns_status->parent = this;
    mtu_info->parent = this;
    snpa_state->parent = this;
    media_specific_state->parent = this;

    yang_name = "clns-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::~ClnsData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_data() const
{
    if (is_presence_container) return true;
    return time_until_next_lsp.is_set
	|| lsp_transmit_requested_flag.is_set
	|| lsp_transmitted_flag.is_set
	|| lsp_txmitd_b2b_limit.is_set
	|| lsp_txmt_b2b_msecs.is_set
	|| last_lsp_level_transmitted.is_set
	|| last_lsp_id_transmitted.is_set
	|| (clns_status !=  nullptr && clns_status->has_data())
	|| (mtu_info !=  nullptr && mtu_info->has_data())
	|| (snpa_state !=  nullptr && snpa_state->has_data())
	|| (media_specific_state !=  nullptr && media_specific_state->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_until_next_lsp.yfilter)
	|| ydk::is_set(lsp_transmit_requested_flag.yfilter)
	|| ydk::is_set(lsp_transmitted_flag.yfilter)
	|| ydk::is_set(lsp_txmitd_b2b_limit.yfilter)
	|| ydk::is_set(lsp_txmt_b2b_msecs.yfilter)
	|| ydk::is_set(last_lsp_level_transmitted.yfilter)
	|| ydk::is_set(last_lsp_id_transmitted.yfilter)
	|| (clns_status !=  nullptr && clns_status->has_operation())
	|| (mtu_info !=  nullptr && mtu_info->has_operation())
	|| (snpa_state !=  nullptr && snpa_state->has_operation())
	|| (media_specific_state !=  nullptr && media_specific_state->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_until_next_lsp.is_set || is_set(time_until_next_lsp.yfilter)) leaf_name_data.push_back(time_until_next_lsp.get_name_leafdata());
    if (lsp_transmit_requested_flag.is_set || is_set(lsp_transmit_requested_flag.yfilter)) leaf_name_data.push_back(lsp_transmit_requested_flag.get_name_leafdata());
    if (lsp_transmitted_flag.is_set || is_set(lsp_transmitted_flag.yfilter)) leaf_name_data.push_back(lsp_transmitted_flag.get_name_leafdata());
    if (lsp_txmitd_b2b_limit.is_set || is_set(lsp_txmitd_b2b_limit.yfilter)) leaf_name_data.push_back(lsp_txmitd_b2b_limit.get_name_leafdata());
    if (lsp_txmt_b2b_msecs.is_set || is_set(lsp_txmt_b2b_msecs.yfilter)) leaf_name_data.push_back(lsp_txmt_b2b_msecs.get_name_leafdata());
    if (last_lsp_level_transmitted.is_set || is_set(last_lsp_level_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_level_transmitted.get_name_leafdata());
    if (last_lsp_id_transmitted.is_set || is_set(last_lsp_id_transmitted.yfilter)) leaf_name_data.push_back(last_lsp_id_transmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-status")
    {
        if(clns_status == nullptr)
        {
            clns_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus>();
        }
        return clns_status;
    }

    if(child_yang_name == "mtu-info")
    {
        if(mtu_info == nullptr)
        {
            mtu_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo>();
        }
        return mtu_info;
    }

    if(child_yang_name == "snpa-state")
    {
        if(snpa_state == nullptr)
        {
            snpa_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState>();
        }
        return snpa_state;
    }

    if(child_yang_name == "media-specific-state")
    {
        if(media_specific_state == nullptr)
        {
            media_specific_state = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState>();
        }
        return media_specific_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns_status != nullptr)
    {
        _children["clns-status"] = clns_status;
    }

    if(mtu_info != nullptr)
    {
        _children["mtu-info"] = mtu_info;
    }

    if(snpa_state != nullptr)
    {
        _children["snpa-state"] = snpa_state;
    }

    if(media_specific_state != nullptr)
    {
        _children["media-specific-state"] = media_specific_state;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp = value;
        time_until_next_lsp.value_namespace = name_space;
        time_until_next_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag = value;
        lsp_transmit_requested_flag.value_namespace = name_space;
        lsp_transmit_requested_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag = value;
        lsp_transmitted_flag.value_namespace = name_space;
        lsp_transmitted_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit = value;
        lsp_txmitd_b2b_limit.value_namespace = name_space;
        lsp_txmitd_b2b_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs = value;
        lsp_txmt_b2b_msecs.value_namespace = name_space;
        lsp_txmt_b2b_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted = value;
        last_lsp_level_transmitted.value_namespace = name_space;
        last_lsp_level_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted = value;
        last_lsp_id_transmitted.value_namespace = name_space;
        last_lsp_id_transmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-until-next-lsp")
    {
        time_until_next_lsp.yfilter = yfilter;
    }
    if(value_path == "lsp-transmit-requested-flag")
    {
        lsp_transmit_requested_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-transmitted-flag")
    {
        lsp_transmitted_flag.yfilter = yfilter;
    }
    if(value_path == "lsp-txmitd-b2b-limit")
    {
        lsp_txmitd_b2b_limit.yfilter = yfilter;
    }
    if(value_path == "lsp-txmt-b2b-msecs")
    {
        lsp_txmt_b2b_msecs.yfilter = yfilter;
    }
    if(value_path == "last-lsp-level-transmitted")
    {
        last_lsp_level_transmitted.yfilter = yfilter;
    }
    if(value_path == "last-lsp-id-transmitted")
    {
        last_lsp_id_transmitted.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-status" || name == "mtu-info" || name == "snpa-state" || name == "media-specific-state" || name == "time-until-next-lsp" || name == "lsp-transmit-requested-flag" || name == "lsp-transmitted-flag" || name == "lsp-txmitd-b2b-limit" || name == "lsp-txmt-b2b-msecs" || name == "last-lsp-level-transmitted" || name == "last-lsp-id-transmitted")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsStatus()
    :
    status{YType::enumeration, "status"}
        ,
    clns_down_info(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>())
{
    clns_down_info->parent = this;

    yang_name = "clns-status"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::~ClnsStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (clns_down_info !=  nullptr && clns_down_info->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (clns_down_info !=  nullptr && clns_down_info->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-down-info")
    {
        if(clns_down_info == nullptr)
        {
            clns_down_info = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo>();
        }
        return clns_down_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns_down_info != nullptr)
    {
        _children["clns-down-info"] = clns_down_info;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-down-info" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::ClnsDownInfo()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "clns-down-info"; yang_parent_name = "clns-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::~ClnsDownInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-down-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::ClnsStatus::ClnsDownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::MtuInfo()
    :
    status{YType::enumeration, "status"},
    mtu{YType::uint32, "mtu"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>())
{
    invalid->parent = this;

    yang_name = "mtu-info"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::~MtuInfo()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| mtu.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalid != nullptr)
    {
        _children["invalid"] = invalid;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status" || name == "mtu")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "mtu-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MtuInfo::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::SnpaState()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>())
    , known(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>())
{
    unknown->parent = this;
    known->parent = this;

    yang_name = "snpa-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::~SnpaState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (known !=  nullptr && known->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (known !=  nullptr && known->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snpa-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "known")
    {
        if(known == nullptr)
        {
            known = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known>();
        }
        return known;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unknown != nullptr)
    {
        _children["unknown"] = unknown;
    }

    if(known != nullptr)
    {
        _children["known"] = known;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "known" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::Known()
    :
    snpa{YType::str, "snpa"}
{

    yang_name = "known"; yang_parent_name = "snpa-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::~Known()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_data() const
{
    if (is_presence_container) return true;
    return snpa.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snpa.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snpa.is_set || is_set(snpa.yfilter)) leaf_name_data.push_back(snpa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snpa")
    {
        snpa = value;
        snpa.value_namespace = name_space;
        snpa.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snpa")
    {
        snpa.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::SnpaState::Known::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snpa")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::MediaSpecificState()
    :
    clns_media_type{YType::enumeration, "clns-media-type"}
        ,
    clns_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>())
    , clns_p2p_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData>())
{
    clns_lan_data->parent = this;
    clns_p2p_data->parent = this;

    yang_name = "media-specific-state"; yang_parent_name = "clns-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::~MediaSpecificState()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_data() const
{
    if (is_presence_container) return true;
    return clns_media_type.is_set
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_data())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clns_media_type.yfilter)
	|| (clns_lan_data !=  nullptr && clns_lan_data->has_operation())
	|| (clns_p2p_data !=  nullptr && clns_p2p_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-specific-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clns_media_type.is_set || is_set(clns_media_type.yfilter)) leaf_name_data.push_back(clns_media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns-lan-data")
    {
        if(clns_lan_data == nullptr)
        {
            clns_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData>();
        }
        return clns_lan_data;
    }

    if(child_yang_name == "clns-p2p-data")
    {
        if(clns_p2p_data == nullptr)
        {
            clns_p2p_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData>();
        }
        return clns_p2p_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clns_lan_data != nullptr)
    {
        _children["clns-lan-data"] = clns_lan_data;
    }

    if(clns_p2p_data != nullptr)
    {
        _children["clns-p2p-data"] = clns_p2p_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type = value;
        clns_media_type.value_namespace = name_space;
        clns_media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clns-media-type")
    {
        clns_media_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns-lan-data" || name == "clns-p2p-data" || name == "clns-media-type")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::ClnsLanData()
    :
    per_area_data(this, {})
{

    yang_name = "clns-lan-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::~ClnsLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-area-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
        ,
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "clns-lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_status != nullptr)
    {
        _children["multicast-status"] = multicast_status;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalid != nullptr)
    {
        _children["invalid"] = invalid;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsLanData::PerAreaData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::ClnsP2pData()
    :
    p2p_over_lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData>())
{
    p2p_over_lan_data->parent = this;

    yang_name = "clns-p2p-data"; yang_parent_name = "media-specific-state"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::~ClnsP2pData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_data() const
{
    if (is_presence_container) return true;
    return (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_operation() const
{
    return is_set(yfilter)
	|| (p2p_over_lan_data !=  nullptr && p2p_over_lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns-p2p-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-over-lan-data")
    {
        if(p2p_over_lan_data == nullptr)
        {
            p2p_over_lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData>();
        }
        return p2p_over_lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2p_over_lan_data != nullptr)
    {
        _children["p2p-over-lan-data"] = p2p_over_lan_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-over-lan-data")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::P2pOverLanData()
    :
    multicast_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus>())
{
    multicast_status->parent = this;

    yang_name = "p2p-over-lan-data"; yang_parent_name = "clns-p2p-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::~P2pOverLanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_status !=  nullptr && multicast_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_status !=  nullptr && multicast_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-over-lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-status")
    {
        if(multicast_status == nullptr)
        {
            multicast_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus>();
        }
        return multicast_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_status != nullptr)
    {
        _children["multicast-status"] = multicast_status;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::MulticastStatus()
    :
    status{YType::enumeration, "status"}
        ,
    invalid(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid>())
{
    invalid->parent = this;

    yang_name = "multicast-status"; yang_parent_name = "p2p-over-lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::~MulticastStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (invalid !=  nullptr && invalid->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (invalid !=  nullptr && invalid->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalid")
    {
        if(invalid == nullptr)
        {
            invalid = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid>();
        }
        return invalid;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(invalid != nullptr)
    {
        _children["invalid"] = invalid;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::Invalid()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "invalid"; yang_parent_name = "multicast-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::~Invalid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::ClnsData::MediaSpecificState::ClnsP2pData::P2pOverLanData::MulticastStatus::Invalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::UnderlyingInterface()
    :
    interface_index{YType::uint32, "interface-index"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "underlying-interface"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::~UnderlyingInterface()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_index.is_set
	|| interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_index.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "underlying-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.yfilter)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
        interface_index.value_namespace = name_space;
        interface_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-index")
    {
        interface_index.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::UnderlyingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-index" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"},
    adjacency_count{YType::uint32, "adjacency-count"},
    lsp_pacing_interval{YType::uint32, "lsp-pacing-interval"},
    psnp_transmit_queue_size{YType::uint32, "psnp-transmit-queue-size"},
    hello_interval{YType::uint32, "hello-interval"},
    hello_multiplier{YType::uint32, "hello-multiplier"}
        ,
    lan_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>())
{
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| adjacency_count.is_set
	|| lsp_pacing_interval.is_set
	|| psnp_transmit_queue_size.is_set
	|| hello_interval.is_set
	|| hello_multiplier.is_set
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(adjacency_count.yfilter)
	|| ydk::is_set(lsp_pacing_interval.yfilter)
	|| ydk::is_set(psnp_transmit_queue_size.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hello_multiplier.yfilter)
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (adjacency_count.is_set || is_set(adjacency_count.yfilter)) leaf_name_data.push_back(adjacency_count.get_name_leafdata());
    if (lsp_pacing_interval.is_set || is_set(lsp_pacing_interval.yfilter)) leaf_name_data.push_back(lsp_pacing_interval.get_name_leafdata());
    if (psnp_transmit_queue_size.is_set || is_set(psnp_transmit_queue_size.yfilter)) leaf_name_data.push_back(psnp_transmit_queue_size.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hello_multiplier.is_set || is_set(hello_multiplier.yfilter)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lan_data != nullptr)
    {
        _children["lan-data"] = lan_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-count")
    {
        adjacency_count = value;
        adjacency_count.value_namespace = name_space;
        adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval = value;
        lsp_pacing_interval.value_namespace = name_space;
        lsp_pacing_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size = value;
        psnp_transmit_queue_size.value_namespace = name_space;
        psnp_transmit_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
        hello_multiplier.value_namespace = name_space;
        hello_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "adjacency-count")
    {
        adjacency_count.yfilter = yfilter;
    }
    if(value_path == "lsp-pacing-interval")
    {
        lsp_pacing_interval.yfilter = yfilter;
    }
    if(value_path == "psnp-transmit-queue-size")
    {
        psnp_transmit_queue_size.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hello-multiplier")
    {
        hello_multiplier.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lan-data" || name == "level" || name == "adjacency-count" || name == "lsp-pacing-interval" || name == "psnp-transmit-queue-size" || name == "hello-interval" || name == "hello-multiplier")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::LanData()
    :
    circuit_lan_id{YType::str, "circuit-lan-id"},
    time_until_next_iih{YType::uint32, "time-until-next-iih"},
    interface_priority{YType::uint8, "interface-priority"},
    dispriority{YType::uint8, "dispriority"},
    are_we_dis{YType::boolean, "are-we-dis"}
{

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_data() const
{
    if (is_presence_container) return true;
    return circuit_lan_id.is_set
	|| time_until_next_iih.is_set
	|| interface_priority.is_set
	|| dispriority.is_set
	|| are_we_dis.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(circuit_lan_id.yfilter)
	|| ydk::is_set(time_until_next_iih.yfilter)
	|| ydk::is_set(interface_priority.yfilter)
	|| ydk::is_set(dispriority.yfilter)
	|| ydk::is_set(are_we_dis.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_lan_id.is_set || is_set(circuit_lan_id.yfilter)) leaf_name_data.push_back(circuit_lan_id.get_name_leafdata());
    if (time_until_next_iih.is_set || is_set(time_until_next_iih.yfilter)) leaf_name_data.push_back(time_until_next_iih.get_name_leafdata());
    if (interface_priority.is_set || is_set(interface_priority.yfilter)) leaf_name_data.push_back(interface_priority.get_name_leafdata());
    if (dispriority.is_set || is_set(dispriority.yfilter)) leaf_name_data.push_back(dispriority.get_name_leafdata());
    if (are_we_dis.is_set || is_set(are_we_dis.yfilter)) leaf_name_data.push_back(are_we_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id = value;
        circuit_lan_id.value_namespace = name_space;
        circuit_lan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih = value;
        time_until_next_iih.value_namespace = name_space;
        time_until_next_iih.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-priority")
    {
        interface_priority = value;
        interface_priority.value_namespace = name_space;
        interface_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dispriority")
    {
        dispriority = value;
        dispriority.value_namespace = name_space;
        dispriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dis")
    {
        are_we_dis = value;
        are_we_dis.value_namespace = name_space;
        are_we_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "circuit-lan-id")
    {
        circuit_lan_id.yfilter = yfilter;
    }
    if(value_path == "time-until-next-iih")
    {
        time_until_next_iih.yfilter = yfilter;
    }
    if(value_path == "interface-priority")
    {
        interface_priority.yfilter = yfilter;
    }
    if(value_path == "dispriority")
    {
        dispriority.yfilter = yfilter;
    }
    if(value_path == "are-we-dis")
    {
        are_we_dis.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-lan-id" || name == "time-until-next-iih" || name == "interface-priority" || name == "dispriority" || name == "are-we-dis")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::PerTopologyData()
    :
    topology_id(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>())
    , status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>())
{
    topology_id->parent = this;
    status->parent = this;

    yang_name = "per-topology-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::~PerTopologyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_data() const
{
    if (is_presence_container) return true;
    return (topology_id !=  nullptr && topology_id->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_operation() const
{
    return is_set(yfilter)
	|| (topology_id !=  nullptr && topology_id->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topology-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-id")
    {
        if(topology_id == nullptr)
        {
            topology_id = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId>();
        }
        return topology_id;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(topology_id != nullptr)
    {
        _children["topology-id"] = topology_id;
    }

    if(status != nullptr)
    {
        _children["status"] = status;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-id" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::TopologyId()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "topology-id"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::~TopologyId()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::TopologyId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Status()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>())
    , enabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>())
{
    disabled->parent = this;
    enabled->parent = this;

    yang_name = "status"; yang_parent_name = "per-topology-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::~Status()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (enabled !=  nullptr && enabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (enabled !=  nullptr && enabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "enabled")
    {
        if(enabled == nullptr)
        {
            enabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_>();
        }
        return enabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    if(enabled != nullptr)
    {
        _children["enabled"] = enabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Enabled_()
    :
    level1_metric{YType::uint32, "level1-metric"},
    level2_metric{YType::uint32, "level2-metric"},
    level1_weight{YType::uint32, "level1-weight"},
    level2_weight{YType::uint32, "level2-weight"},
    max_label_supported{YType::uint8, "max-label-supported"},
    max_bkp_label_supported{YType::uint8, "max-bkp-label-supported"},
    max_srte_label_supported{YType::uint8, "max-srte-label-supported"},
    max_srat_label_supported{YType::uint8, "max-srat-label-supported"},
    level1ldp_sync_enabled{YType::boolean, "level1ldp-sync-enabled"},
    level2ldp_sync_enabled{YType::boolean, "level2ldp-sync-enabled"},
    ldp_sync_status{YType::boolean, "ldp-sync-status"},
    ld_pv6_sync_status{YType::boolean, "ld-pv6-sync-status"},
    level1_offset_metric{YType::uint32, "level1-offset-metric"},
    level2_offset_metric{YType::uint32, "level2-offset-metric"},
    level1_lkgp_configured{YType::boolean, "level1-lkgp-configured"},
    level2_lkgp_configured{YType::boolean, "level2-lkgp-configured"},
    level1pp_metric{YType::uint32, "level1pp-metric"},
    level2pp_metric{YType::uint32, "level2pp-metric"},
    level1pp_configured{YType::boolean, "level1pp-configured"},
    level2pp_configured{YType::boolean, "level2pp-configured"},
    link_group_name{YType::str, "link-group-name"}
        ,
    adjacency_form_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>())
    , adv_prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>())
    , level1_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>())
    , level2_frr(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>())
    , manual_adj_sid(this, {})
{
    adjacency_form_status->parent = this;
    adv_prefix_status->parent = this;
    level1_frr->parent = this;
    level2_frr->parent = this;

    yang_name = "enabled"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::~Enabled_()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_data())
            return true;
    }
    return level1_metric.is_set
	|| level2_metric.is_set
	|| level1_weight.is_set
	|| level2_weight.is_set
	|| max_label_supported.is_set
	|| max_bkp_label_supported.is_set
	|| max_srte_label_supported.is_set
	|| max_srat_label_supported.is_set
	|| level1ldp_sync_enabled.is_set
	|| level2ldp_sync_enabled.is_set
	|| ldp_sync_status.is_set
	|| ld_pv6_sync_status.is_set
	|| level1_offset_metric.is_set
	|| level2_offset_metric.is_set
	|| level1_lkgp_configured.is_set
	|| level2_lkgp_configured.is_set
	|| level1pp_metric.is_set
	|| level2pp_metric.is_set
	|| level1pp_configured.is_set
	|| level2pp_configured.is_set
	|| link_group_name.is_set
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_data())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_data())
	|| (level1_frr !=  nullptr && level1_frr->has_data())
	|| (level2_frr !=  nullptr && level2_frr->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_operation() const
{
    for (std::size_t index=0; index<manual_adj_sid.len(); index++)
    {
        if(manual_adj_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level1_metric.yfilter)
	|| ydk::is_set(level2_metric.yfilter)
	|| ydk::is_set(level1_weight.yfilter)
	|| ydk::is_set(level2_weight.yfilter)
	|| ydk::is_set(max_label_supported.yfilter)
	|| ydk::is_set(max_bkp_label_supported.yfilter)
	|| ydk::is_set(max_srte_label_supported.yfilter)
	|| ydk::is_set(max_srat_label_supported.yfilter)
	|| ydk::is_set(level1ldp_sync_enabled.yfilter)
	|| ydk::is_set(level2ldp_sync_enabled.yfilter)
	|| ydk::is_set(ldp_sync_status.yfilter)
	|| ydk::is_set(ld_pv6_sync_status.yfilter)
	|| ydk::is_set(level1_offset_metric.yfilter)
	|| ydk::is_set(level2_offset_metric.yfilter)
	|| ydk::is_set(level1_lkgp_configured.yfilter)
	|| ydk::is_set(level2_lkgp_configured.yfilter)
	|| ydk::is_set(level1pp_metric.yfilter)
	|| ydk::is_set(level2pp_metric.yfilter)
	|| ydk::is_set(level1pp_configured.yfilter)
	|| ydk::is_set(level2pp_configured.yfilter)
	|| ydk::is_set(link_group_name.yfilter)
	|| (adjacency_form_status !=  nullptr && adjacency_form_status->has_operation())
	|| (adv_prefix_status !=  nullptr && adv_prefix_status->has_operation())
	|| (level1_frr !=  nullptr && level1_frr->has_operation())
	|| (level2_frr !=  nullptr && level2_frr->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level1_metric.is_set || is_set(level1_metric.yfilter)) leaf_name_data.push_back(level1_metric.get_name_leafdata());
    if (level2_metric.is_set || is_set(level2_metric.yfilter)) leaf_name_data.push_back(level2_metric.get_name_leafdata());
    if (level1_weight.is_set || is_set(level1_weight.yfilter)) leaf_name_data.push_back(level1_weight.get_name_leafdata());
    if (level2_weight.is_set || is_set(level2_weight.yfilter)) leaf_name_data.push_back(level2_weight.get_name_leafdata());
    if (max_label_supported.is_set || is_set(max_label_supported.yfilter)) leaf_name_data.push_back(max_label_supported.get_name_leafdata());
    if (max_bkp_label_supported.is_set || is_set(max_bkp_label_supported.yfilter)) leaf_name_data.push_back(max_bkp_label_supported.get_name_leafdata());
    if (max_srte_label_supported.is_set || is_set(max_srte_label_supported.yfilter)) leaf_name_data.push_back(max_srte_label_supported.get_name_leafdata());
    if (max_srat_label_supported.is_set || is_set(max_srat_label_supported.yfilter)) leaf_name_data.push_back(max_srat_label_supported.get_name_leafdata());
    if (level1ldp_sync_enabled.is_set || is_set(level1ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level1ldp_sync_enabled.get_name_leafdata());
    if (level2ldp_sync_enabled.is_set || is_set(level2ldp_sync_enabled.yfilter)) leaf_name_data.push_back(level2ldp_sync_enabled.get_name_leafdata());
    if (ldp_sync_status.is_set || is_set(ldp_sync_status.yfilter)) leaf_name_data.push_back(ldp_sync_status.get_name_leafdata());
    if (ld_pv6_sync_status.is_set || is_set(ld_pv6_sync_status.yfilter)) leaf_name_data.push_back(ld_pv6_sync_status.get_name_leafdata());
    if (level1_offset_metric.is_set || is_set(level1_offset_metric.yfilter)) leaf_name_data.push_back(level1_offset_metric.get_name_leafdata());
    if (level2_offset_metric.is_set || is_set(level2_offset_metric.yfilter)) leaf_name_data.push_back(level2_offset_metric.get_name_leafdata());
    if (level1_lkgp_configured.is_set || is_set(level1_lkgp_configured.yfilter)) leaf_name_data.push_back(level1_lkgp_configured.get_name_leafdata());
    if (level2_lkgp_configured.is_set || is_set(level2_lkgp_configured.yfilter)) leaf_name_data.push_back(level2_lkgp_configured.get_name_leafdata());
    if (level1pp_metric.is_set || is_set(level1pp_metric.yfilter)) leaf_name_data.push_back(level1pp_metric.get_name_leafdata());
    if (level2pp_metric.is_set || is_set(level2pp_metric.yfilter)) leaf_name_data.push_back(level2pp_metric.get_name_leafdata());
    if (level1pp_configured.is_set || is_set(level1pp_configured.yfilter)) leaf_name_data.push_back(level1pp_configured.get_name_leafdata());
    if (level2pp_configured.is_set || is_set(level2pp_configured.yfilter)) leaf_name_data.push_back(level2pp_configured.get_name_leafdata());
    if (link_group_name.is_set || is_set(link_group_name.yfilter)) leaf_name_data.push_back(link_group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-form-status")
    {
        if(adjacency_form_status == nullptr)
        {
            adjacency_form_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus>();
        }
        return adjacency_form_status;
    }

    if(child_yang_name == "adv-prefix-status")
    {
        if(adv_prefix_status == nullptr)
        {
            adv_prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus>();
        }
        return adv_prefix_status;
    }

    if(child_yang_name == "level1-frr")
    {
        if(level1_frr == nullptr)
        {
            level1_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr>();
        }
        return level1_frr;
    }

    if(child_yang_name == "level2-frr")
    {
        if(level2_frr == nullptr)
        {
            level2_frr = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr>();
        }
        return level2_frr;
    }

    if(child_yang_name == "manual-adj-sid")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid>();
        ent_->parent = this;
        manual_adj_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_form_status != nullptr)
    {
        _children["adjacency-form-status"] = adjacency_form_status;
    }

    if(adv_prefix_status != nullptr)
    {
        _children["adv-prefix-status"] = adv_prefix_status;
    }

    if(level1_frr != nullptr)
    {
        _children["level1-frr"] = level1_frr;
    }

    if(level2_frr != nullptr)
    {
        _children["level2-frr"] = level2_frr;
    }

    count_ = 0;
    for (auto ent_ : manual_adj_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level1-metric")
    {
        level1_metric = value;
        level1_metric.value_namespace = name_space;
        level1_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-metric")
    {
        level2_metric = value;
        level2_metric.value_namespace = name_space;
        level2_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-weight")
    {
        level1_weight = value;
        level1_weight.value_namespace = name_space;
        level1_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-weight")
    {
        level2_weight = value;
        level2_weight.value_namespace = name_space;
        level2_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported = value;
        max_label_supported.value_namespace = name_space;
        max_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported = value;
        max_bkp_label_supported.value_namespace = name_space;
        max_bkp_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported = value;
        max_srte_label_supported.value_namespace = name_space;
        max_srte_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-srat-label-supported")
    {
        max_srat_label_supported = value;
        max_srat_label_supported.value_namespace = name_space;
        max_srat_label_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled = value;
        level1ldp_sync_enabled.value_namespace = name_space;
        level1ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled = value;
        level2ldp_sync_enabled.value_namespace = name_space;
        level2ldp_sync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status = value;
        ldp_sync_status.value_namespace = name_space;
        ldp_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status = value;
        ld_pv6_sync_status.value_namespace = name_space;
        ld_pv6_sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric = value;
        level1_offset_metric.value_namespace = name_space;
        level1_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric = value;
        level2_offset_metric.value_namespace = name_space;
        level2_offset_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured = value;
        level1_lkgp_configured.value_namespace = name_space;
        level1_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured = value;
        level2_lkgp_configured.value_namespace = name_space;
        level2_lkgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric = value;
        level1pp_metric.value_namespace = name_space;
        level1pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric = value;
        level2pp_metric.value_namespace = name_space;
        level2pp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured = value;
        level1pp_configured.value_namespace = name_space;
        level1pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured = value;
        level2pp_configured.value_namespace = name_space;
        level2pp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-group-name")
    {
        link_group_name = value;
        link_group_name.value_namespace = name_space;
        link_group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level1-metric")
    {
        level1_metric.yfilter = yfilter;
    }
    if(value_path == "level2-metric")
    {
        level2_metric.yfilter = yfilter;
    }
    if(value_path == "level1-weight")
    {
        level1_weight.yfilter = yfilter;
    }
    if(value_path == "level2-weight")
    {
        level2_weight.yfilter = yfilter;
    }
    if(value_path == "max-label-supported")
    {
        max_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-bkp-label-supported")
    {
        max_bkp_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-srte-label-supported")
    {
        max_srte_label_supported.yfilter = yfilter;
    }
    if(value_path == "max-srat-label-supported")
    {
        max_srat_label_supported.yfilter = yfilter;
    }
    if(value_path == "level1ldp-sync-enabled")
    {
        level1ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "level2ldp-sync-enabled")
    {
        level2ldp_sync_enabled.yfilter = yfilter;
    }
    if(value_path == "ldp-sync-status")
    {
        ldp_sync_status.yfilter = yfilter;
    }
    if(value_path == "ld-pv6-sync-status")
    {
        ld_pv6_sync_status.yfilter = yfilter;
    }
    if(value_path == "level1-offset-metric")
    {
        level1_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level2-offset-metric")
    {
        level2_offset_metric.yfilter = yfilter;
    }
    if(value_path == "level1-lkgp-configured")
    {
        level1_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level2-lkgp-configured")
    {
        level2_lkgp_configured.yfilter = yfilter;
    }
    if(value_path == "level1pp-metric")
    {
        level1pp_metric.yfilter = yfilter;
    }
    if(value_path == "level2pp-metric")
    {
        level2pp_metric.yfilter = yfilter;
    }
    if(value_path == "level1pp-configured")
    {
        level1pp_configured.yfilter = yfilter;
    }
    if(value_path == "level2pp-configured")
    {
        level2pp_configured.yfilter = yfilter;
    }
    if(value_path == "link-group-name")
    {
        link_group_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-form-status" || name == "adv-prefix-status" || name == "level1-frr" || name == "level2-frr" || name == "manual-adj-sid" || name == "level1-metric" || name == "level2-metric" || name == "level1-weight" || name == "level2-weight" || name == "max-label-supported" || name == "max-bkp-label-supported" || name == "max-srte-label-supported" || name == "max-srat-label-supported" || name == "level1ldp-sync-enabled" || name == "level2ldp-sync-enabled" || name == "ldp-sync-status" || name == "ld-pv6-sync-status" || name == "level1-offset-metric" || name == "level2-offset-metric" || name == "level1-lkgp-configured" || name == "level2-lkgp-configured" || name == "level1pp-metric" || name == "level2pp-metric" || name == "level1pp-configured" || name == "level2pp-configured" || name == "link-group-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::AdjacencyFormStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adjacency-form-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::~AdjacencyFormStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-form-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adjacency-form-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdjacencyFormStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::AdvPrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "adv-prefix-status"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::~AdvPrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adv-prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "adv-prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::AdvPrefixStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::Level1Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"}
        ,
    frr_tie_breaker(this, {})
{

    yang_name = "level1-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::~Level1Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set
	|| is_tie_breakers_configured.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker>();
        ent_->parent = this;
        frr_tie_breaker.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_tie_breaker.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker" || name == "is-tie-breakers-configured")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::FrrTieBreaker()
    :
    tie_breaker{YType::enumeration, "tie-breaker"},
    index_{YType::uint8, "index"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level1-frr"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_data() const
{
    if (is_presence_container) return true;
    return tie_breaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tie_breaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level1Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tie-breaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::Level2Frr()
    :
    frr_type{YType::enumeration, "frr-type"},
    is_frr{YType::boolean, "is-frr"},
    is_remote_lfa{YType::boolean, "is-remote-lfa"},
    is_ti_lfa{YType::boolean, "is-ti-lfa"},
    ti_lfa_node_tie_breaker_index{YType::uint8, "ti-lfa-node-tie-breaker-index"},
    ti_lfa_srlg_tie_breaker{YType::uint8, "ti-lfa-srlg-tie-breaker"},
    is_tie_breakers_configured{YType::boolean, "is-tie-breakers-configured"}
        ,
    frr_tie_breaker(this, {})
{

    yang_name = "level2-frr"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::~Level2Frr()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_data())
            return true;
    }
    return frr_type.is_set
	|| is_frr.is_set
	|| is_remote_lfa.is_set
	|| is_ti_lfa.is_set
	|| ti_lfa_node_tie_breaker_index.is_set
	|| ti_lfa_srlg_tie_breaker.is_set
	|| is_tie_breakers_configured.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_operation() const
{
    for (std::size_t index=0; index<frr_tie_breaker.len(); index++)
    {
        if(frr_tie_breaker[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(frr_type.yfilter)
	|| ydk::is_set(is_frr.yfilter)
	|| ydk::is_set(is_remote_lfa.yfilter)
	|| ydk::is_set(is_ti_lfa.yfilter)
	|| ydk::is_set(ti_lfa_node_tie_breaker_index.yfilter)
	|| ydk::is_set(ti_lfa_srlg_tie_breaker.yfilter)
	|| ydk::is_set(is_tie_breakers_configured.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-frr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_type.is_set || is_set(frr_type.yfilter)) leaf_name_data.push_back(frr_type.get_name_leafdata());
    if (is_frr.is_set || is_set(is_frr.yfilter)) leaf_name_data.push_back(is_frr.get_name_leafdata());
    if (is_remote_lfa.is_set || is_set(is_remote_lfa.yfilter)) leaf_name_data.push_back(is_remote_lfa.get_name_leafdata());
    if (is_ti_lfa.is_set || is_set(is_ti_lfa.yfilter)) leaf_name_data.push_back(is_ti_lfa.get_name_leafdata());
    if (ti_lfa_node_tie_breaker_index.is_set || is_set(ti_lfa_node_tie_breaker_index.yfilter)) leaf_name_data.push_back(ti_lfa_node_tie_breaker_index.get_name_leafdata());
    if (ti_lfa_srlg_tie_breaker.is_set || is_set(ti_lfa_srlg_tie_breaker.yfilter)) leaf_name_data.push_back(ti_lfa_srlg_tie_breaker.get_name_leafdata());
    if (is_tie_breakers_configured.is_set || is_set(is_tie_breakers_configured.yfilter)) leaf_name_data.push_back(is_tie_breakers_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-tie-breaker")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker>();
        ent_->parent = this;
        frr_tie_breaker.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : frr_tie_breaker.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frr-type")
    {
        frr_type = value;
        frr_type.value_namespace = name_space;
        frr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr")
    {
        is_frr = value;
        is_frr.value_namespace = name_space;
        is_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa = value;
        is_remote_lfa.value_namespace = name_space;
        is_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa = value;
        is_ti_lfa.value_namespace = name_space;
        is_ti_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index = value;
        ti_lfa_node_tie_breaker_index.value_namespace = name_space;
        ti_lfa_node_tie_breaker_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker = value;
        ti_lfa_srlg_tie_breaker.value_namespace = name_space;
        ti_lfa_srlg_tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured = value;
        is_tie_breakers_configured.value_namespace = name_space;
        is_tie_breakers_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frr-type")
    {
        frr_type.yfilter = yfilter;
    }
    if(value_path == "is-frr")
    {
        is_frr.yfilter = yfilter;
    }
    if(value_path == "is-remote-lfa")
    {
        is_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "is-ti-lfa")
    {
        is_ti_lfa.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-node-tie-breaker-index")
    {
        ti_lfa_node_tie_breaker_index.yfilter = yfilter;
    }
    if(value_path == "ti-lfa-srlg-tie-breaker")
    {
        ti_lfa_srlg_tie_breaker.yfilter = yfilter;
    }
    if(value_path == "is-tie-breakers-configured")
    {
        is_tie_breakers_configured.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frr-tie-breaker" || name == "frr-type" || name == "is-frr" || name == "is-remote-lfa" || name == "is-ti-lfa" || name == "ti-lfa-node-tie-breaker-index" || name == "ti-lfa-srlg-tie-breaker" || name == "is-tie-breakers-configured")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::FrrTieBreaker()
    :
    tie_breaker{YType::enumeration, "tie-breaker"},
    index_{YType::uint8, "index"}
{

    yang_name = "frr-tie-breaker"; yang_parent_name = "level2-frr"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::~FrrTieBreaker()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_data() const
{
    if (is_presence_container) return true;
    return tie_breaker.is_set
	|| index_.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tie_breaker.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-tie-breaker";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tie_breaker.is_set || is_set(tie_breaker.yfilter)) leaf_name_data.push_back(tie_breaker.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker = value;
        tie_breaker.value_namespace = name_space;
        tie_breaker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tie-breaker")
    {
        tie_breaker.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::Level2Frr::FrrTieBreaker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tie-breaker" || name == "index")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::ManualAdjSid()
    :
    manual_adjacency_sid_label{YType::uint32, "manual-adjacency-sid-label"},
    manual_adjacency_sid_index{YType::uint32, "manual-adjacency-sid-index"},
    manual_adjacency_sid_type{YType::uint8, "manual-adjacency-sid-type"},
    sid_protected{YType::boolean, "sid-protected"},
    sid_active{YType::boolean, "sid-active"}
{

    yang_name = "manual-adj-sid"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::~ManualAdjSid()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_data() const
{
    if (is_presence_container) return true;
    return manual_adjacency_sid_label.is_set
	|| manual_adjacency_sid_index.is_set
	|| manual_adjacency_sid_type.is_set
	|| sid_protected.is_set
	|| sid_active.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(manual_adjacency_sid_label.yfilter)
	|| ydk::is_set(manual_adjacency_sid_index.yfilter)
	|| ydk::is_set(manual_adjacency_sid_type.yfilter)
	|| ydk::is_set(sid_protected.yfilter)
	|| ydk::is_set(sid_active.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-adj-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (manual_adjacency_sid_label.is_set || is_set(manual_adjacency_sid_label.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_label.get_name_leafdata());
    if (manual_adjacency_sid_index.is_set || is_set(manual_adjacency_sid_index.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_index.get_name_leafdata());
    if (manual_adjacency_sid_type.is_set || is_set(manual_adjacency_sid_type.yfilter)) leaf_name_data.push_back(manual_adjacency_sid_type.get_name_leafdata());
    if (sid_protected.is_set || is_set(sid_protected.yfilter)) leaf_name_data.push_back(sid_protected.get_name_leafdata());
    if (sid_active.is_set || is_set(sid_active.yfilter)) leaf_name_data.push_back(sid_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label = value;
        manual_adjacency_sid_label.value_namespace = name_space;
        manual_adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index = value;
        manual_adjacency_sid_index.value_namespace = name_space;
        manual_adjacency_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type = value;
        manual_adjacency_sid_type.value_namespace = name_space;
        manual_adjacency_sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-protected")
    {
        sid_protected = value;
        sid_protected.value_namespace = name_space;
        sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-active")
    {
        sid_active = value;
        sid_active.value_namespace = name_space;
        sid_active.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "manual-adjacency-sid-label")
    {
        manual_adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-index")
    {
        manual_adjacency_sid_index.yfilter = yfilter;
    }
    if(value_path == "manual-adjacency-sid-type")
    {
        manual_adjacency_sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-protected")
    {
        sid_protected.yfilter = yfilter;
    }
    if(value_path == "sid-active")
    {
        sid_active.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerTopologyData::Status::Enabled_::ManualAdjSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-adjacency-sid-label" || name == "manual-adjacency-sid-index" || name == "manual-adjacency-sid-type" || name == "sid-protected" || name == "sid-active")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::PerAddressFamilyData()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    af_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>())
{
    af_status->parent = this;

    yang_name = "per-address-family-data"; yang_parent_name = "enabled"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::~PerAddressFamilyData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (af_status !=  nullptr && af_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (af_status !=  nullptr && af_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-address-family-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-status")
    {
        if(af_status == nullptr)
        {
            af_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus>();
        }
        return af_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(af_status != nullptr)
    {
        _children["af-status"] = af_status;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-status" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>())
    , af_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>())
{
    disabled->parent = this;
    af_data->parent = this;

    yang_name = "af-status"; yang_parent_name = "per-address-family-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::~AfStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data())
	|| (af_data !=  nullptr && af_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation())
	|| (af_data !=  nullptr && af_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled>();
        }
        return disabled;
    }

    if(child_yang_name == "af-data")
    {
        if(af_data == nullptr)
        {
            af_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData>();
        }
        return af_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    if(af_data != nullptr)
    {
        _children["af-data"] = af_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "af-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::AfData()
    :
    protocol_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>())
    , forwarding_address_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>())
    , prefix_status(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>())
{
    protocol_status->parent = this;
    forwarding_address_status->parent = this;
    prefix_status->parent = this;

    yang_name = "af-data"; yang_parent_name = "af-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::~AfData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_status !=  nullptr && protocol_status->has_data())
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_data())
	|| (prefix_status !=  nullptr && prefix_status->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_status !=  nullptr && protocol_status->has_operation())
	|| (forwarding_address_status !=  nullptr && forwarding_address_status->has_operation())
	|| (prefix_status !=  nullptr && prefix_status->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-status")
    {
        if(protocol_status == nullptr)
        {
            protocol_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus>();
        }
        return protocol_status;
    }

    if(child_yang_name == "forwarding-address-status")
    {
        if(forwarding_address_status == nullptr)
        {
            forwarding_address_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus>();
        }
        return forwarding_address_status;
    }

    if(child_yang_name == "prefix-status")
    {
        if(prefix_status == nullptr)
        {
            prefix_status = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus>();
        }
        return prefix_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_status != nullptr)
    {
        _children["protocol-status"] = protocol_status;
    }

    if(forwarding_address_status != nullptr)
    {
        _children["forwarding-address-status"] = forwarding_address_status;
    }

    if(prefix_status != nullptr)
    {
        _children["prefix-status"] = prefix_status;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-status" || name == "forwarding-address-status" || name == "prefix-status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::ProtocolStatus()
    :
    status{YType::enumeration, "status"}
        ,
    disabled(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>())
{
    disabled->parent = this;

    yang_name = "protocol-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::~ProtocolStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (disabled !=  nullptr && disabled->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (disabled !=  nullptr && disabled->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disabled")
    {
        if(disabled == nullptr)
        {
            disabled = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled>();
        }
        return disabled;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disabled != nullptr)
    {
        _children["disabled"] = disabled;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::Disabled()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "disabled"; yang_parent_name = "protocol-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::~Disabled()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disabled";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ProtocolStatus::Disabled::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressStatus()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>())
    , forwarding_address_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>())
{
    unknown->parent = this;
    forwarding_address_data->parent = this;

    yang_name = "forwarding-address-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::~ForwardingAddressStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (forwarding_address_data !=  nullptr && forwarding_address_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "forwarding-address-data")
    {
        if(forwarding_address_data == nullptr)
        {
            forwarding_address_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData>();
        }
        return forwarding_address_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unknown != nullptr)
    {
        _children["unknown"] = unknown;
    }

    if(forwarding_address_data != nullptr)
    {
        _children["forwarding-address-data"] = forwarding_address_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "forwarding-address-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddressData()
    :
    unnumbered_interface_name{YType::str, "unnumbered-interface-name"}
        ,
    forwarding_address(this, {})
{

    yang_name = "forwarding-address-data"; yang_parent_name = "forwarding-address-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::~ForwardingAddressData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<forwarding_address.len(); index++)
    {
        if(forwarding_address[index]->has_data())
            return true;
    }
    return unnumbered_interface_name.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_operation() const
{
    for (std::size_t index=0; index<forwarding_address.len(); index++)
    {
        if(forwarding_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(unnumbered_interface_name.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.yfilter)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress>();
        ent_->parent = this;
        forwarding_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : forwarding_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
        unnumbered_interface_name.value_namespace = name_space;
        unnumbered_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-address" || name == "unnumbered-interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::ForwardingAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "forwarding-address"; yang_parent_name = "forwarding-address-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::~ForwardingAddress()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::ForwardingAddressStatus::ForwardingAddressData::ForwardingAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixStatus()
    :
    status{YType::enumeration, "status"}
        ,
    unknown(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>())
    , prefix_data(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>())
{
    unknown->parent = this;
    prefix_data->parent = this;

    yang_name = "prefix-status"; yang_parent_name = "af-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::~PrefixStatus()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_data() const
{
    if (is_presence_container) return true;
    return status.is_set
	|| (unknown !=  nullptr && unknown->has_data())
	|| (prefix_data !=  nullptr && prefix_data->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter)
	|| (unknown !=  nullptr && unknown->has_operation())
	|| (prefix_data !=  nullptr && prefix_data->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unknown")
    {
        if(unknown == nullptr)
        {
            unknown = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown>();
        }
        return unknown;
    }

    if(child_yang_name == "prefix-data")
    {
        if(prefix_data == nullptr)
        {
            prefix_data = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData>();
        }
        return prefix_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(unknown != nullptr)
    {
        _children["unknown"] = unknown;
    }

    if(prefix_data != nullptr)
    {
        _children["prefix-data"] = prefix_data;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown" || name == "prefix-data" || name == "status")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::Unknown()
    :
    reason_code{YType::enumeration, "reason-code"}
{

    yang_name = "unknown"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::~Unknown()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_data() const
{
    if (is_presence_container) return true;
    return reason_code.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason_code.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason_code.is_set || is_set(reason_code.yfilter)) leaf_name_data.push_back(reason_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason-code")
    {
        reason_code = value;
        reason_code.value_namespace = name_space;
        reason_code.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason-code")
    {
        reason_code.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::Unknown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason-code")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::PrefixData()
    :
    is_unnumbered{YType::boolean, "is-unnumbered"}
        ,
    prefix(this, {})
{

    yang_name = "prefix-data"; yang_parent_name = "prefix-status"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::~PrefixData()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_data())
            return true;
    }
    return is_unnumbered.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_operation() const
{
    for (std::size_t index=0; index<prefix.len(); index++)
    {
        if(prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_unnumbered.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_unnumbered.is_set || is_set(is_unnumbered.yfilter)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix>();
        ent_->parent = this;
        prefix.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
        is_unnumbered.value_namespace = name_space;
        is_unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-unnumbered")
    {
        is_unnumbered.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "is-unnumbered")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>())
    , ipv6(std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "prefix"; yang_parent_name = "prefix-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::~Prefix()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Interfaces::Interface::InterfaceStatusAndData::Enabled::PerAddressFamilyData::AfStatus::AfData::PrefixStatus::PrefixData::Prefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacencies()
    :
    checkpoint_adjacency(this, {})
{

    yang_name = "checkpoint-adjacencies"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::~CheckpointAdjacencies()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_adjacency.len(); index++)
    {
        if(checkpoint_adjacency[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency.len(); index++)
    {
        if(checkpoint_adjacency[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacencies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointAdjacencies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency>();
        ent_->parent = this;
        checkpoint_adjacency.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointAdjacencies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : checkpoint_adjacency.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointAdjacencies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacency()
    :
    level{YType::enumeration, "level"},
    system_id{YType::str, "system-id"},
    interface_name{YType::str, "interface-name"},
    checkpoint_adjacency_object_id{YType::uint32, "checkpoint-adjacency-object-id"},
    checkpoint_adjacency_system_id{YType::str, "checkpoint-adjacency-system-id"},
    checkpoint_adjacency_snpa{YType::str, "checkpoint-adjacency-snpa"},
    checkpoint_adjacency_interface{YType::str, "checkpoint-adjacency-interface"},
    checkpoint_adjacency_level{YType::enumeration, "checkpoint-adjacency-level"},
    checkpoint_adjacency_holdtime{YType::uint16, "checkpoint-adjacency-holdtime"},
    checkpoint_adjacency_lan_priority{YType::uint8, "checkpoint-adjacency-lan-priority"},
    checkpoint_adjacency_circuit_number{YType::uint8, "checkpoint-adjacency-circuit-number"}
        ,
    checkpoint_adjacency_per_address_family_next_hop(this, {})
{

    yang_name = "checkpoint-adjacency"; yang_parent_name = "checkpoint-adjacencies"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::~CheckpointAdjacency()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.len(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_data())
            return true;
    }
    return level.is_set
	|| system_id.is_set
	|| interface_name.is_set
	|| checkpoint_adjacency_object_id.is_set
	|| checkpoint_adjacency_system_id.is_set
	|| checkpoint_adjacency_snpa.is_set
	|| checkpoint_adjacency_interface.is_set
	|| checkpoint_adjacency_level.is_set
	|| checkpoint_adjacency_holdtime.is_set
	|| checkpoint_adjacency_lan_priority.is_set
	|| checkpoint_adjacency_circuit_number.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_adjacency_per_address_family_next_hop.len(); index++)
    {
        if(checkpoint_adjacency_per_address_family_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_adjacency_object_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_system_id.yfilter)
	|| ydk::is_set(checkpoint_adjacency_snpa.yfilter)
	|| ydk::is_set(checkpoint_adjacency_interface.yfilter)
	|| ydk::is_set(checkpoint_adjacency_level.yfilter)
	|| ydk::is_set(checkpoint_adjacency_holdtime.yfilter)
	|| ydk::is_set(checkpoint_adjacency_lan_priority.yfilter)
	|| ydk::is_set(checkpoint_adjacency_circuit_number.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_adjacency_object_id.is_set || is_set(checkpoint_adjacency_object_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_object_id.get_name_leafdata());
    if (checkpoint_adjacency_system_id.is_set || is_set(checkpoint_adjacency_system_id.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_system_id.get_name_leafdata());
    if (checkpoint_adjacency_snpa.is_set || is_set(checkpoint_adjacency_snpa.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_snpa.get_name_leafdata());
    if (checkpoint_adjacency_interface.is_set || is_set(checkpoint_adjacency_interface.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_interface.get_name_leafdata());
    if (checkpoint_adjacency_level.is_set || is_set(checkpoint_adjacency_level.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_level.get_name_leafdata());
    if (checkpoint_adjacency_holdtime.is_set || is_set(checkpoint_adjacency_holdtime.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_holdtime.get_name_leafdata());
    if (checkpoint_adjacency_lan_priority.is_set || is_set(checkpoint_adjacency_lan_priority.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_lan_priority.get_name_leafdata());
    if (checkpoint_adjacency_circuit_number.is_set || is_set(checkpoint_adjacency_circuit_number.yfilter)) leaf_name_data.push_back(checkpoint_adjacency_circuit_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-adjacency-per-address-family-next-hop")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop>();
        ent_->parent = this;
        checkpoint_adjacency_per_address_family_next_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : checkpoint_adjacency_per_address_family_next_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id = value;
        checkpoint_adjacency_object_id.value_namespace = name_space;
        checkpoint_adjacency_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id = value;
        checkpoint_adjacency_system_id.value_namespace = name_space;
        checkpoint_adjacency_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa = value;
        checkpoint_adjacency_snpa.value_namespace = name_space;
        checkpoint_adjacency_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface = value;
        checkpoint_adjacency_interface.value_namespace = name_space;
        checkpoint_adjacency_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level = value;
        checkpoint_adjacency_level.value_namespace = name_space;
        checkpoint_adjacency_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime = value;
        checkpoint_adjacency_holdtime.value_namespace = name_space;
        checkpoint_adjacency_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority = value;
        checkpoint_adjacency_lan_priority.value_namespace = name_space;
        checkpoint_adjacency_lan_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number = value;
        checkpoint_adjacency_circuit_number.value_namespace = name_space;
        checkpoint_adjacency_circuit_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-object-id")
    {
        checkpoint_adjacency_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-system-id")
    {
        checkpoint_adjacency_system_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-snpa")
    {
        checkpoint_adjacency_snpa.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-interface")
    {
        checkpoint_adjacency_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-level")
    {
        checkpoint_adjacency_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-holdtime")
    {
        checkpoint_adjacency_holdtime.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-lan-priority")
    {
        checkpoint_adjacency_lan_priority.yfilter = yfilter;
    }
    if(value_path == "checkpoint-adjacency-circuit-number")
    {
        checkpoint_adjacency_circuit_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-adjacency-per-address-family-next-hop" || name == "level" || name == "system-id" || name == "interface-name" || name == "checkpoint-adjacency-object-id" || name == "checkpoint-adjacency-system-id" || name == "checkpoint-adjacency-snpa" || name == "checkpoint-adjacency-interface" || name == "checkpoint-adjacency-level" || name == "checkpoint-adjacency-holdtime" || name == "checkpoint-adjacency-lan-priority" || name == "checkpoint-adjacency-circuit-number")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::CheckpointAdjacencyPerAddressFamilyNextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "checkpoint-adjacency-per-address-family-next-hop"; yang_parent_name = "checkpoint-adjacency"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::~CheckpointAdjacencyPerAddressFamilyNextHop()
{
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-adjacency-per-address-family-next-hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointAdjacencies::CheckpointAdjacency::CheckpointAdjacencyPerAddressFamilyNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgos()
    :
    flex_algo(this, {"flex_alg"})
{

    yang_name = "flex-algos"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::~FlexAlgos()
{
}

bool Isis::Instances::Instance::FlexAlgos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flex_algo.len(); index++)
    {
        if(flex_algo[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::FlexAlgos::has_operation() const
{
    for (std::size_t index=0; index<flex_algo.len(); index++)
    {
        if(flex_algo[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::FlexAlgos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-algos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::FlexAlgos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-algo")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::FlexAlgos::FlexAlgo>();
        ent_->parent = this;
        flex_algo.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::FlexAlgos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flex_algo.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::FlexAlgos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::FlexAlgos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::FlexAlgos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-algo")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::FlexAlgo()
    :
    flex_alg{YType::uint32, "flex-alg"},
    number{YType::uint32, "number"},
    local_priority{YType::uint32, "local-priority"}
        ,
    area(this, {})
{

    yang_name = "flex-algo"; yang_parent_name = "flex-algos"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::~FlexAlgo()
{
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return flex_alg.is_set
	|| number.is_set
	|| local_priority.is_set;
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_operation() const
{
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flex_alg.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(local_priority.yfilter);
}

std::string Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex-algo";
    ADD_KEY_TOKEN(flex_alg, "flex-alg");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flex_alg.is_set || is_set(flex_alg.yfilter)) leaf_name_data.push_back(flex_alg.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (local_priority.is_set || is_set(local_priority.yfilter)) leaf_name_data.push_back(local_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::FlexAlgos::FlexAlgo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flex-alg")
    {
        flex_alg = value;
        flex_alg.value_namespace = name_space;
        flex_alg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-priority")
    {
        local_priority = value;
        local_priority.value_namespace = name_space;
        local_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flex-alg")
    {
        flex_alg.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "local-priority")
    {
        local_priority.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area" || name == "flex-alg" || name == "number" || name == "local-priority")
        return true;
    return false;
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::Area()
    :
    level{YType::enumeration, "level"},
    disabled{YType::boolean, "disabled"},
    definition_prioroty{YType::uint32, "definition-prioroty"},
    definition_local{YType::boolean, "definition-local"},
    definition_equal_local{YType::boolean, "definition-equal-local"},
    definition_node_id{YType::str, "definition-node-id"}
{

    yang_name = "area"; yang_parent_name = "flex-algo"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::~Area()
{
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| disabled.is_set
	|| definition_prioroty.is_set
	|| definition_local.is_set
	|| definition_equal_local.is_set
	|| definition_node_id.is_set;
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(definition_prioroty.yfilter)
	|| ydk::is_set(definition_local.yfilter)
	|| ydk::is_set(definition_equal_local.yfilter)
	|| ydk::is_set(definition_node_id.yfilter);
}

std::string Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (definition_prioroty.is_set || is_set(definition_prioroty.yfilter)) leaf_name_data.push_back(definition_prioroty.get_name_leafdata());
    if (definition_local.is_set || is_set(definition_local.yfilter)) leaf_name_data.push_back(definition_local.get_name_leafdata());
    if (definition_equal_local.is_set || is_set(definition_equal_local.yfilter)) leaf_name_data.push_back(definition_equal_local.get_name_leafdata());
    if (definition_node_id.is_set || is_set(definition_node_id.yfilter)) leaf_name_data.push_back(definition_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "definition-prioroty")
    {
        definition_prioroty = value;
        definition_prioroty.value_namespace = name_space;
        definition_prioroty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "definition-local")
    {
        definition_local = value;
        definition_local.value_namespace = name_space;
        definition_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "definition-equal-local")
    {
        definition_equal_local = value;
        definition_equal_local.value_namespace = name_space;
        definition_equal_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "definition-node-id")
    {
        definition_node_id = value;
        definition_node_id.value_namespace = name_space;
        definition_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "definition-prioroty")
    {
        definition_prioroty.yfilter = yfilter;
    }
    if(value_path == "definition-local")
    {
        definition_local.yfilter = yfilter;
    }
    if(value_path == "definition-equal-local")
    {
        definition_equal_local.yfilter = yfilter;
    }
    if(value_path == "definition-node-id")
    {
        definition_node_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::FlexAlgos::FlexAlgo::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "disabled" || name == "definition-prioroty" || name == "definition-local" || name == "definition-equal-local" || name == "definition-node-id")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Srms()
    :
    policy(std::make_shared<Isis::Instances::Instance::Srms::Policy>())
{
    policy->parent = this;

    yang_name = "srms"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::~Srms()
{
}

bool Isis::Instances::Instance::Srms::has_data() const
{
    if (is_presence_container) return true;
    return (policy !=  nullptr && policy->has_data());
}

bool Isis::Instances::Instance::Srms::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Isis::Instances::Instance::Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srms";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Isis::Instances::Instance::Srms::Policy>();
        }
        return policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::Policy()
    :
    policy_ipv4(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>())
    , policy_ipv6(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    policy_ipv6->parent = this;

    yang_name = "policy"; yang_parent_name = "srms"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::~Policy()
{
}

bool Isis::Instances::Instance::Srms::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 == nullptr)
        {
            policy_ipv4 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4>();
        }
        return policy_ipv4;
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 == nullptr)
        {
            policy_ipv6 = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6>();
        }
        return policy_ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4 != nullptr)
    {
        _children["policy-ipv4"] = policy_ipv4;
    }

    if(policy_ipv6 != nullptr)
    {
        _children["policy-ipv6"] = policy_ipv6;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4" || name == "policy-ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
    , policy_ipv4_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    policy_ipv4_backup->parent = this;

    yang_name = "policy-ipv4"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active == nullptr)
        {
            policy_ipv4_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
        }
        return policy_ipv4_active;
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup == nullptr)
        {
            policy_ipv4_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
        }
        return policy_ipv4_backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv4_active != nullptr)
    {
        _children["policy-ipv4-active"] = policy_ipv4_active;
    }

    if(policy_ipv4_backup != nullptr)
    {
        _children["policy-ipv4-backup"] = policy_ipv4_backup;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv4-active" || name == "policy-ipv4-backup")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_backup(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
    , policy_ipv6_active(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
{
    policy_ipv6_backup->parent = this;
    policy_ipv6_active->parent = this;

    yang_name = "policy-ipv6"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_data() const
{
    if (is_presence_container) return true;
    return (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(yfilter)
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation())
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup == nullptr)
        {
            policy_ipv6_backup = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
        }
        return policy_ipv6_backup;
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active == nullptr)
        {
            policy_ipv6_active = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
        }
        return policy_ipv6_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(policy_ipv6_backup != nullptr)
    {
        _children["policy-ipv6-backup"] = policy_ipv6_backup;
    }

    if(policy_ipv6_active != nullptr)
    {
        _children["policy-ipv6-active"] = policy_ipv6_active;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-ipv6-backup" || name == "policy-ipv6-active")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
    :
    policy_mi(this, {"mi_id"})
{

    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.len(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-mi")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        ent_->parent = this;
        policy_mi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy_mi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-mi")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    mi_id{YType::str, "mi-id"},
    src{YType::enumeration, "src"},
    router{YType::str, "router"},
    area{YType::str, "area"},
    prefix{YType::uint8, "prefix"},
    sid_start{YType::uint32, "sid-start"},
    sid_count{YType::uint32, "sid-count"},
    last_prefix{YType::str, "last-prefix"},
    last_sid_index{YType::uint32, "last-sid-index"},
    flag_attached{YType::enumeration, "flag-attached"}
        ,
    addr(std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    if (is_presence_container) return true;
    return mi_id.is_set
	|| src.is_set
	|| router.is_set
	|| area.is_set
	|| prefix.is_set
	|| sid_start.is_set
	|| sid_count.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| flag_attached.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mi_id.yfilter)
	|| ydk::is_set(src.yfilter)
	|| ydk::is_set(router.yfilter)
	|| ydk::is_set(area.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(sid_start.yfilter)
	|| ydk::is_set(sid_count.yfilter)
	|| ydk::is_set(last_prefix.yfilter)
	|| ydk::is_set(last_sid_index.yfilter)
	|| ydk::is_set(flag_attached.yfilter)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi";
    ADD_KEY_TOKEN(mi_id, "mi-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.yfilter)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (src.is_set || is_set(src.yfilter)) leaf_name_data.push_back(src.get_name_leafdata());
    if (router.is_set || is_set(router.yfilter)) leaf_name_data.push_back(router.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.yfilter)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.yfilter)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.yfilter)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.yfilter)) leaf_name_data.push_back(flag_attached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addr")
    {
        if(addr == nullptr)
        {
            addr = std::make_shared<Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
        }
        return addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addr != nullptr)
    {
        _children["addr"] = addr;
    }

    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
        mi_id.value_namespace = name_space;
        mi_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src")
    {
        src = value;
        src.value_namespace = name_space;
        src.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router")
    {
        router = value;
        router.value_namespace = name_space;
        router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
        sid_start.value_namespace = name_space;
        sid_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
        last_prefix.value_namespace = name_space;
        last_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
        last_sid_index.value_namespace = name_space;
        last_sid_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
        flag_attached.value_namespace = name_space;
        flag_attached.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mi-id")
    {
        mi_id.yfilter = yfilter;
    }
    if(value_path == "src")
    {
        src.yfilter = yfilter;
    }
    if(value_path == "router")
    {
        router.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "sid-start")
    {
        sid_start.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
    if(value_path == "last-prefix")
    {
        last_prefix.yfilter = yfilter;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index.yfilter = yfilter;
    }
    if(value_path == "flag-attached")
    {
        flag_attached.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "mi-id" || name == "src" || name == "router" || name == "area" || name == "prefix" || name == "sid-start" || name == "sid-count" || name == "last-prefix" || name == "last-sid-index" || name == "flag-attached")
        return true;
    return false;
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    af{YType::enumeration, "af"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "addr"; yang_parent_name = "policy-mi"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::ErrorLog()
    :
    log_entry(this, {})
{

    yang_name = "error-log"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::~ErrorLog()
{
}

bool Isis::Instances::Instance::ErrorLog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::ErrorLog::has_operation() const
{
    for (std::size_t index=0; index<log_entry.len(); index++)
    {
        if(log_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::ErrorLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry>();
        ent_->parent = this;
        log_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::ErrorLog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : log_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::ErrorLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-entry")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::LogEntry()
    :
    error_log_level{YType::enumeration, "error-log-level"},
    error_code{YType::uint32, "error-code"},
    error_reason{YType::str, "error-reason"}
        ,
    generic_data(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>())
{
    generic_data->parent = this;

    yang_name = "log-entry"; yang_parent_name = "error-log"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::~LogEntry()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_data() const
{
    if (is_presence_container) return true;
    return error_log_level.is_set
	|| error_code.is_set
	|| error_reason.is_set
	|| (generic_data !=  nullptr && generic_data->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_log_level.yfilter)
	|| ydk::is_set(error_code.yfilter)
	|| ydk::is_set(error_reason.yfilter)
	|| (generic_data !=  nullptr && generic_data->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_log_level.is_set || is_set(error_log_level.yfilter)) leaf_name_data.push_back(error_log_level.get_name_leafdata());
    if (error_code.is_set || is_set(error_code.yfilter)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_reason.is_set || is_set(error_reason.yfilter)) leaf_name_data.push_back(error_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::ErrorLog::LogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-data")
    {
        if(generic_data == nullptr)
        {
            generic_data = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData>();
        }
        return generic_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(generic_data != nullptr)
    {
        _children["generic-data"] = generic_data;
    }

    return _children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-log-level")
    {
        error_log_level = value;
        error_log_level.value_namespace = name_space;
        error_log_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-code")
    {
        error_code = value;
        error_code.value_namespace = name_space;
        error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-reason")
    {
        error_reason = value;
        error_reason.value_namespace = name_space;
        error_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-log-level")
    {
        error_log_level.yfilter = yfilter;
    }
    if(value_path == "error-code")
    {
        error_code.yfilter = yfilter;
    }
    if(value_path == "error-reason")
    {
        error_reason.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-data" || name == "error-log-level" || name == "error-code" || name == "error-reason")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::GenericData()
    :
    timestamp(std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>())
{
    timestamp->parent = this;

    yang_name = "generic-data"; yang_parent_name = "log-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::~GenericData()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_data() const
{
    if (is_presence_container) return true;
    return (timestamp !=  nullptr && timestamp->has_data());
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_operation() const
{
    return is_set(yfilter)
	|| (timestamp !=  nullptr && timestamp->has_operation());
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timestamp")
    {
        if(timestamp == nullptr)
        {
            timestamp = std::make_shared<Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp>();
        }
        return timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(timestamp != nullptr)
    {
        _children["timestamp"] = timestamp;
    }

    return _children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timestamp")
        return true;
    return false;
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::Timestamp()
    :
    seconds{YType::uint32, "seconds"},
    nano_seconds{YType::uint32, "nano-seconds"}
{

    yang_name = "timestamp"; yang_parent_name = "generic-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::~Timestamp()
{
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nano_seconds.is_set;
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nano_seconds.yfilter);
}

std::string Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nano_seconds.is_set || is_set(nano_seconds.yfilter)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
        nano_seconds.value_namespace = name_space;
        nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nano-seconds")
    {
        nano_seconds.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::ErrorLog::LogEntry::GenericData::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nano-seconds")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterfaces()
    :
    checkpoint_interface(this, {"interface_name"})
{

    yang_name = "checkpoint-interfaces"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointInterfaces::~CheckpointInterfaces()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_interface.len(); index++)
    {
        if(checkpoint_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_interface.len(); index++)
    {
        if(checkpoint_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-interface")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface>();
        ent_->parent = this;
        checkpoint_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : checkpoint_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::CheckpointInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-interface")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::CheckpointInterface()
    :
    interface_name{YType::str, "interface-name"},
    checkpoint_object_id{YType::uint32, "checkpoint-object-id"},
    interface_name_xr{YType::str, "interface-name-xr"},
    checkpoint_interface_handle{YType::str, "checkpoint-interface-handle"},
    local_circuit_number{YType::uint8, "local-circuit-number"},
    dis_areas{YType::enumeration, "dis-areas"},
    has_adjacency{YType::boolean, "has-adjacency"},
    local_snpa{YType::str, "local-snpa"},
    has_joined_mcast_group{YType::boolean, "has-joined-mcast-group"},
    has_achieved_ldp_sync{YType::boolean, "has-achieved-ldp-sync"},
    has_achieved_ld_pv6_sync{YType::boolean, "has-achieved-ld-pv6-sync"}
{

    yang_name = "checkpoint-interface"; yang_parent_name = "checkpoint-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::~CheckpointInterface()
{
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| checkpoint_object_id.is_set
	|| interface_name_xr.is_set
	|| checkpoint_interface_handle.is_set
	|| local_circuit_number.is_set
	|| dis_areas.is_set
	|| has_adjacency.is_set
	|| local_snpa.is_set
	|| has_joined_mcast_group.is_set
	|| has_achieved_ldp_sync.is_set
	|| has_achieved_ld_pv6_sync.is_set;
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_object_id.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(checkpoint_interface_handle.yfilter)
	|| ydk::is_set(local_circuit_number.yfilter)
	|| ydk::is_set(dis_areas.yfilter)
	|| ydk::is_set(has_adjacency.yfilter)
	|| ydk::is_set(local_snpa.yfilter)
	|| ydk::is_set(has_joined_mcast_group.yfilter)
	|| ydk::is_set(has_achieved_ldp_sync.yfilter)
	|| ydk::is_set(has_achieved_ld_pv6_sync.yfilter);
}

std::string Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_object_id.is_set || is_set(checkpoint_object_id.yfilter)) leaf_name_data.push_back(checkpoint_object_id.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (checkpoint_interface_handle.is_set || is_set(checkpoint_interface_handle.yfilter)) leaf_name_data.push_back(checkpoint_interface_handle.get_name_leafdata());
    if (local_circuit_number.is_set || is_set(local_circuit_number.yfilter)) leaf_name_data.push_back(local_circuit_number.get_name_leafdata());
    if (dis_areas.is_set || is_set(dis_areas.yfilter)) leaf_name_data.push_back(dis_areas.get_name_leafdata());
    if (has_adjacency.is_set || is_set(has_adjacency.yfilter)) leaf_name_data.push_back(has_adjacency.get_name_leafdata());
    if (local_snpa.is_set || is_set(local_snpa.yfilter)) leaf_name_data.push_back(local_snpa.get_name_leafdata());
    if (has_joined_mcast_group.is_set || is_set(has_joined_mcast_group.yfilter)) leaf_name_data.push_back(has_joined_mcast_group.get_name_leafdata());
    if (has_achieved_ldp_sync.is_set || is_set(has_achieved_ldp_sync.yfilter)) leaf_name_data.push_back(has_achieved_ldp_sync.get_name_leafdata());
    if (has_achieved_ld_pv6_sync.is_set || is_set(has_achieved_ld_pv6_sync.yfilter)) leaf_name_data.push_back(has_achieved_ld_pv6_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id = value;
        checkpoint_object_id.value_namespace = name_space;
        checkpoint_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle = value;
        checkpoint_interface_handle.value_namespace = name_space;
        checkpoint_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number = value;
        local_circuit_number.value_namespace = name_space;
        local_circuit_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-areas")
    {
        dis_areas = value;
        dis_areas.value_namespace = name_space;
        dis_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency = value;
        has_adjacency.value_namespace = name_space;
        has_adjacency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-snpa")
    {
        local_snpa = value;
        local_snpa.value_namespace = name_space;
        local_snpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group = value;
        has_joined_mcast_group.value_namespace = name_space;
        has_joined_mcast_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync = value;
        has_achieved_ldp_sync.value_namespace = name_space;
        has_achieved_ldp_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync = value;
        has_achieved_ld_pv6_sync.value_namespace = name_space;
        has_achieved_ld_pv6_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-object-id")
    {
        checkpoint_object_id.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "checkpoint-interface-handle")
    {
        checkpoint_interface_handle.yfilter = yfilter;
    }
    if(value_path == "local-circuit-number")
    {
        local_circuit_number.yfilter = yfilter;
    }
    if(value_path == "dis-areas")
    {
        dis_areas.yfilter = yfilter;
    }
    if(value_path == "has-adjacency")
    {
        has_adjacency.yfilter = yfilter;
    }
    if(value_path == "local-snpa")
    {
        local_snpa.yfilter = yfilter;
    }
    if(value_path == "has-joined-mcast-group")
    {
        has_joined_mcast_group.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ldp-sync")
    {
        has_achieved_ldp_sync.yfilter = yfilter;
    }
    if(value_path == "has-achieved-ld-pv6-sync")
    {
        has_achieved_ld_pv6_sync.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointInterfaces::CheckpointInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "checkpoint-object-id" || name == "interface-name-xr" || name == "checkpoint-interface-handle" || name == "local-circuit-number" || name == "dis-areas" || name == "has-adjacency" || name == "local-snpa" || name == "has-joined-mcast-group" || name == "has-achieved-ldp-sync" || name == "has-achieved-ld-pv6-sync")
        return true;
    return false;
}

Isis::Instances::Instance::SrLabels::SrLabels()
    :
    sr_label(this, {"label"})
{

    yang_name = "sr-labels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrLabels::~SrLabels()
{
}

bool Isis::Instances::Instance::SrLabels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sr_label.len(); index++)
    {
        if(sr_label[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::SrLabels::has_operation() const
{
    for (std::size_t index=0; index<sr_label.len(); index++)
    {
        if(sr_label[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::SrLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-label")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel>();
        ent_->parent = this;
        sr_label.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sr_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::SrLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::SrLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::SrLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-label")
        return true;
    return false;
}

Isis::Instances::Instance::SrLabels::SrLabel::SrLabel()
    :
    label{YType::uint32, "label"},
    label_type{YType::enumeration, "label-type"},
    label_flags{YType::uint8, "label-flags"},
    label_refcount{YType::uint8, "label-refcount"},
    label_value{YType::uint32, "label-value"},
    label_interface{YType::str, "label-interface"},
    label_ifh{YType::str, "label-ifh"},
    label_table_id{YType::uint32, "label-table-id"},
    label_af_id{YType::enumeration, "label-af-id"}
        ,
    label_prefix(std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix>())
{
    label_prefix->parent = this;

    yang_name = "sr-label"; yang_parent_name = "sr-labels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrLabels::SrLabel::~SrLabel()
{
}

bool Isis::Instances::Instance::SrLabels::SrLabel::has_data() const
{
    if (is_presence_container) return true;
    return label.is_set
	|| label_type.is_set
	|| label_flags.is_set
	|| label_refcount.is_set
	|| label_value.is_set
	|| label_interface.is_set
	|| label_ifh.is_set
	|| label_table_id.is_set
	|| label_af_id.is_set
	|| (label_prefix !=  nullptr && label_prefix->has_data());
}

bool Isis::Instances::Instance::SrLabels::SrLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(label_type.yfilter)
	|| ydk::is_set(label_flags.yfilter)
	|| ydk::is_set(label_refcount.yfilter)
	|| ydk::is_set(label_value.yfilter)
	|| ydk::is_set(label_interface.yfilter)
	|| ydk::is_set(label_ifh.yfilter)
	|| ydk::is_set(label_table_id.yfilter)
	|| ydk::is_set(label_af_id.yfilter)
	|| (label_prefix !=  nullptr && label_prefix->has_operation());
}

std::string Isis::Instances::Instance::SrLabels::SrLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-label";
    ADD_KEY_TOKEN(label, "label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrLabels::SrLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_type.is_set || is_set(label_type.yfilter)) leaf_name_data.push_back(label_type.get_name_leafdata());
    if (label_flags.is_set || is_set(label_flags.yfilter)) leaf_name_data.push_back(label_flags.get_name_leafdata());
    if (label_refcount.is_set || is_set(label_refcount.yfilter)) leaf_name_data.push_back(label_refcount.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.yfilter)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (label_interface.is_set || is_set(label_interface.yfilter)) leaf_name_data.push_back(label_interface.get_name_leafdata());
    if (label_ifh.is_set || is_set(label_ifh.yfilter)) leaf_name_data.push_back(label_ifh.get_name_leafdata());
    if (label_table_id.is_set || is_set(label_table_id.yfilter)) leaf_name_data.push_back(label_table_id.get_name_leafdata());
    if (label_af_id.is_set || is_set(label_af_id.yfilter)) leaf_name_data.push_back(label_af_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrLabels::SrLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-prefix")
    {
        if(label_prefix == nullptr)
        {
            label_prefix = std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix>();
        }
        return label_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrLabels::SrLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label_prefix != nullptr)
    {
        _children["label-prefix"] = label_prefix;
    }

    return _children;
}

void Isis::Instances::Instance::SrLabels::SrLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-type")
    {
        label_type = value;
        label_type.value_namespace = name_space;
        label_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-flags")
    {
        label_flags = value;
        label_flags.value_namespace = name_space;
        label_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-refcount")
    {
        label_refcount = value;
        label_refcount.value_namespace = name_space;
        label_refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-value")
    {
        label_value = value;
        label_value.value_namespace = name_space;
        label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-interface")
    {
        label_interface = value;
        label_interface.value_namespace = name_space;
        label_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-ifh")
    {
        label_ifh = value;
        label_ifh.value_namespace = name_space;
        label_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-table-id")
    {
        label_table_id = value;
        label_table_id.value_namespace = name_space;
        label_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-af-id")
    {
        label_af_id = value;
        label_af_id.value_namespace = name_space;
        label_af_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrLabels::SrLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "label-type")
    {
        label_type.yfilter = yfilter;
    }
    if(value_path == "label-flags")
    {
        label_flags.yfilter = yfilter;
    }
    if(value_path == "label-refcount")
    {
        label_refcount.yfilter = yfilter;
    }
    if(value_path == "label-value")
    {
        label_value.yfilter = yfilter;
    }
    if(value_path == "label-interface")
    {
        label_interface.yfilter = yfilter;
    }
    if(value_path == "label-ifh")
    {
        label_ifh.yfilter = yfilter;
    }
    if(value_path == "label-table-id")
    {
        label_table_id.yfilter = yfilter;
    }
    if(value_path == "label-af-id")
    {
        label_af_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrLabels::SrLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-prefix" || name == "label" || name == "label-type" || name == "label-flags" || name == "label-refcount" || name == "label-value" || name == "label-interface" || name == "label-ifh" || name == "label-table-id" || name == "label-af-id")
        return true;
    return false;
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::LabelPrefix()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    ipv4(std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4>())
    , ipv6(std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "label-prefix"; yang_parent_name = "sr-label"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::~LabelPrefix()
{
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "af-name")
        return true;
    return false;
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::Ipv4()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv4"; yang_parent_name = "label-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::~Ipv4()
{
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::Ipv6()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"}
{

    yang_name = "ipv6"; yang_parent_name = "label-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::~Ipv6()
{
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set;
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::SrLabels::SrLabel::LabelPrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistics()
    :
    interface_statistic(this, {"interface_name"})
{

    yang_name = "interface-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic>();
        ent_->parent = this;
        interface_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    traffic_interface{YType::str, "traffic-interface"},
    interface_media_type{YType::enumeration, "interface-media-type"}
        ,
    p2p_statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics>())
    , per_area_data(this, {})
{
    p2p_statistics->parent = this;

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| traffic_interface.is_set
	|| interface_media_type.is_set
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(traffic_interface.yfilter)
	|| ydk::is_set(interface_media_type.yfilter)
	|| (p2p_statistics !=  nullptr && p2p_statistics->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (traffic_interface.is_set || is_set(traffic_interface.yfilter)) leaf_name_data.push_back(traffic_interface.get_name_leafdata());
    if (interface_media_type.is_set || is_set(interface_media_type.yfilter)) leaf_name_data.push_back(interface_media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-statistics")
    {
        if(p2p_statistics == nullptr)
        {
            p2p_statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics>();
        }
        return p2p_statistics;
    }

    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(p2p_statistics != nullptr)
    {
        _children["p2p-statistics"] = p2p_statistics;
    }

    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface = value;
        traffic_interface.value_namespace = name_space;
        traffic_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type = value;
        interface_media_type.value_namespace = name_space;
        interface_media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "traffic-interface")
    {
        traffic_interface.yfilter = yfilter;
    }
    if(value_path == "interface-media-type")
    {
        interface_media_type.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-statistics" || name == "per-area-data" || name == "interface-name" || name == "traffic-interface" || name == "interface-media-type")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::P2pStatistics()
    :
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"},
    lsp_retransmit_count{YType::uint32, "lsp-retransmit-count"}
        ,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount>())
{
    iih_count->parent = this;

    yang_name = "p2p-statistics"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::~P2pStatistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_data() const
{
    if (is_presence_container) return true;
    return memory_exhausted_iih_count.is_set
	|| lsp_retransmit_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| ydk::is_set(lsp_retransmit_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());
    if (lsp_retransmit_count.is_set || is_set(lsp_retransmit_count.yfilter)) leaf_name_data.push_back(lsp_retransmit_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iih_count != nullptr)
    {
        _children["iih-count"] = iih_count;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count = value;
        lsp_retransmit_count.value_namespace = name_space;
        lsp_retransmit_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
    if(value_path == "lsp-retransmit-count")
    {
        lsp_retransmit_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "memory-exhausted-iih-count" || name == "lsp-retransmit-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "p2p-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::P2pStatistics::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"}
        ,
    statistics(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>())
    , lan_data(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>())
{
    statistics->parent = this;
    lan_data->parent = this;

    yang_name = "per-area-data"; yang_parent_name = "interface-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| (statistics !=  nullptr && statistics->has_data())
	|| (lan_data !=  nullptr && lan_data->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (lan_data !=  nullptr && lan_data->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "lan-data")
    {
        if(lan_data == nullptr)
        {
            lan_data = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData>();
        }
        return lan_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(lan_data != nullptr)
    {
        _children["lan-data"] = lan_data;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "lan-data" || name == "level")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::Statistics()
    :
    lsp_drop_count{YType::uint32, "lsp-drop-count"},
    lsp_flooding_dup_count{YType::uint32, "lsp-flooding-dup-count"}
        ,
    lsp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>())
    , csnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>())
    , psnp_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>())
{
    lsp_count->parent = this;
    csnp_count->parent = this;
    psnp_count->parent = this;

    yang_name = "statistics"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::~Statistics()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return lsp_drop_count.is_set
	|| lsp_flooding_dup_count.is_set
	|| (lsp_count !=  nullptr && lsp_count->has_data())
	|| (csnp_count !=  nullptr && csnp_count->has_data())
	|| (psnp_count !=  nullptr && psnp_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_drop_count.yfilter)
	|| ydk::is_set(lsp_flooding_dup_count.yfilter)
	|| (lsp_count !=  nullptr && lsp_count->has_operation())
	|| (csnp_count !=  nullptr && csnp_count->has_operation())
	|| (psnp_count !=  nullptr && psnp_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_drop_count.is_set || is_set(lsp_drop_count.yfilter)) leaf_name_data.push_back(lsp_drop_count.get_name_leafdata());
    if (lsp_flooding_dup_count.is_set || is_set(lsp_flooding_dup_count.yfilter)) leaf_name_data.push_back(lsp_flooding_dup_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-count")
    {
        if(lsp_count == nullptr)
        {
            lsp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount>();
        }
        return lsp_count;
    }

    if(child_yang_name == "csnp-count")
    {
        if(csnp_count == nullptr)
        {
            csnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount>();
        }
        return csnp_count;
    }

    if(child_yang_name == "psnp-count")
    {
        if(psnp_count == nullptr)
        {
            psnp_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount>();
        }
        return psnp_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_count != nullptr)
    {
        _children["lsp-count"] = lsp_count;
    }

    if(csnp_count != nullptr)
    {
        _children["csnp-count"] = csnp_count;
    }

    if(psnp_count != nullptr)
    {
        _children["psnp-count"] = psnp_count;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count = value;
        lsp_drop_count.value_namespace = name_space;
        lsp_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count = value;
        lsp_flooding_dup_count.value_namespace = name_space;
        lsp_flooding_dup_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-drop-count")
    {
        lsp_drop_count.yfilter = yfilter;
    }
    if(value_path == "lsp-flooding-dup-count")
    {
        lsp_flooding_dup_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-count" || name == "csnp-count" || name == "psnp-count" || name == "lsp-drop-count" || name == "lsp-flooding-dup-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::LspCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "lsp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::~LspCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::LspCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::CsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "csnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::~CsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::CsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::PsnpCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "psnp-count"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::~PsnpCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psnp-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::Statistics::PsnpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::LanData()
    :
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"},
    dis_election_count{YType::uint32, "dis-election-count"}
        ,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>())
{
    iih_count->parent = this;

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_data() const
{
    if (is_presence_container) return true;
    return memory_exhausted_iih_count.is_set
	|| dis_election_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| ydk::is_set(dis_election_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());
    if (dis_election_count.is_set || is_set(dis_election_count.yfilter)) leaf_name_data.push_back(dis_election_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iih_count != nullptr)
    {
        _children["iih-count"] = iih_count;
    }

    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-election-count")
    {
        dis_election_count = value;
        dis_election_count.value_namespace = name_space;
        dis_election_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
    if(value_path == "dis-election-count")
    {
        dis_election_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "memory-exhausted-iih-count" || name == "dis-election-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::Protocol()
    :
    vrf_context{YType::str, "vrf-context"},
    nsap_system_id{YType::str, "nsap-system-id"},
    valid_nsap_system_id{YType::boolean, "valid-nsap-system-id"},
    instance_id{YType::uint16, "instance-id"},
    running_levels{YType::enumeration, "running-levels"},
    configured_nsf_flavor{YType::enumeration, "configured-nsf-flavor"},
    last_restart_nsf_flavor{YType::enumeration, "last-restart-nsf-flavor"},
    last_restart_status{YType::enumeration, "last-restart-status"},
    te_connection{YType::enumeration, "te-connection"},
    remaining_time_for_next_nsf_restart{YType::uint32, "remaining-time-for-next-nsf-restart"},
    adj_form_count{YType::uint32, "adj-form-count"},
    adj_full_count{YType::uint32, "adj-full-count"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stagger_init{YType::uint32, "adj-stagger-init"},
    adj_stagger_max{YType::uint32, "adj-stagger-max"},
    srgb_allocated{YType::boolean, "srgb-allocated"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_end{YType::uint32, "srgb-end"},
    srlb_allocated{YType::boolean, "srlb-allocated"},
    srlb_start{YType::uint32, "srlb-start"},
    srlb_end{YType::uint32, "srlb-end"}
        ,
    manual_area_address(this, {})
    , active_area_address(this, {})
    , per_topo_data(this, {})
    , per_area_data(this, {})
{

    yang_name = "protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::~Protocol()
{
}

bool Isis::Instances::Instance::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_area_address.len(); index++)
    {
        if(manual_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_area_address.len(); index++)
    {
        if(active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.len(); index++)
    {
        if(per_topo_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return vrf_context.is_set
	|| nsap_system_id.is_set
	|| valid_nsap_system_id.is_set
	|| instance_id.is_set
	|| running_levels.is_set
	|| configured_nsf_flavor.is_set
	|| last_restart_nsf_flavor.is_set
	|| last_restart_status.is_set
	|| te_connection.is_set
	|| remaining_time_for_next_nsf_restart.is_set
	|| adj_form_count.is_set
	|| adj_full_count.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stagger_init.is_set
	|| adj_stagger_max.is_set
	|| srgb_allocated.is_set
	|| srgb_start.is_set
	|| srgb_end.is_set
	|| srlb_allocated.is_set
	|| srlb_start.is_set
	|| srlb_end.is_set;
}

bool Isis::Instances::Instance::Protocol::has_operation() const
{
    for (std::size_t index=0; index<manual_area_address.len(); index++)
    {
        if(manual_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_area_address.len(); index++)
    {
        if(active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.len(); index++)
    {
        if(per_topo_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_context.yfilter)
	|| ydk::is_set(nsap_system_id.yfilter)
	|| ydk::is_set(valid_nsap_system_id.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(running_levels.yfilter)
	|| ydk::is_set(configured_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_status.yfilter)
	|| ydk::is_set(te_connection.yfilter)
	|| ydk::is_set(remaining_time_for_next_nsf_restart.yfilter)
	|| ydk::is_set(adj_form_count.yfilter)
	|| ydk::is_set(adj_full_count.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(adj_stagger_init.yfilter)
	|| ydk::is_set(adj_stagger_max.yfilter)
	|| ydk::is_set(srgb_allocated.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(srlb_allocated.yfilter)
	|| ydk::is_set(srlb_start.yfilter)
	|| ydk::is_set(srlb_end.yfilter);
}

std::string Isis::Instances::Instance::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_context.is_set || is_set(vrf_context.yfilter)) leaf_name_data.push_back(vrf_context.get_name_leafdata());
    if (nsap_system_id.is_set || is_set(nsap_system_id.yfilter)) leaf_name_data.push_back(nsap_system_id.get_name_leafdata());
    if (valid_nsap_system_id.is_set || is_set(valid_nsap_system_id.yfilter)) leaf_name_data.push_back(valid_nsap_system_id.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (running_levels.is_set || is_set(running_levels.yfilter)) leaf_name_data.push_back(running_levels.get_name_leafdata());
    if (configured_nsf_flavor.is_set || is_set(configured_nsf_flavor.yfilter)) leaf_name_data.push_back(configured_nsf_flavor.get_name_leafdata());
    if (last_restart_nsf_flavor.is_set || is_set(last_restart_nsf_flavor.yfilter)) leaf_name_data.push_back(last_restart_nsf_flavor.get_name_leafdata());
    if (last_restart_status.is_set || is_set(last_restart_status.yfilter)) leaf_name_data.push_back(last_restart_status.get_name_leafdata());
    if (te_connection.is_set || is_set(te_connection.yfilter)) leaf_name_data.push_back(te_connection.get_name_leafdata());
    if (remaining_time_for_next_nsf_restart.is_set || is_set(remaining_time_for_next_nsf_restart.yfilter)) leaf_name_data.push_back(remaining_time_for_next_nsf_restart.get_name_leafdata());
    if (adj_form_count.is_set || is_set(adj_form_count.yfilter)) leaf_name_data.push_back(adj_form_count.get_name_leafdata());
    if (adj_full_count.is_set || is_set(adj_full_count.yfilter)) leaf_name_data.push_back(adj_full_count.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stagger_init.is_set || is_set(adj_stagger_init.yfilter)) leaf_name_data.push_back(adj_stagger_init.get_name_leafdata());
    if (adj_stagger_max.is_set || is_set(adj_stagger_max.yfilter)) leaf_name_data.push_back(adj_stagger_max.get_name_leafdata());
    if (srgb_allocated.is_set || is_set(srgb_allocated.yfilter)) leaf_name_data.push_back(srgb_allocated.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srlb_allocated.is_set || is_set(srlb_allocated.yfilter)) leaf_name_data.push_back(srlb_allocated.get_name_leafdata());
    if (srlb_start.is_set || is_set(srlb_start.yfilter)) leaf_name_data.push_back(srlb_start.get_name_leafdata());
    if (srlb_end.is_set || is_set(srlb_end.yfilter)) leaf_name_data.push_back(srlb_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-area-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::ManualAreaAddress>();
        ent_->parent = this;
        manual_area_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "active-area-address")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::ActiveAreaAddress>();
        ent_->parent = this;
        active_area_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "per-topo-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData>();
        ent_->parent = this;
        per_topo_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : manual_area_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : active_area_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : per_topo_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-context")
    {
        vrf_context = value;
        vrf_context.value_namespace = name_space;
        vrf_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id = value;
        nsap_system_id.value_namespace = name_space;
        nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id = value;
        valid_nsap_system_id.value_namespace = name_space;
        valid_nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-levels")
    {
        running_levels = value;
        running_levels.value_namespace = name_space;
        running_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor = value;
        configured_nsf_flavor.value_namespace = name_space;
        configured_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor = value;
        last_restart_nsf_flavor.value_namespace = name_space;
        last_restart_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status = value;
        last_restart_status.value_namespace = name_space;
        last_restart_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connection")
    {
        te_connection = value;
        te_connection.value_namespace = name_space;
        te_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart = value;
        remaining_time_for_next_nsf_restart.value_namespace = name_space;
        remaining_time_for_next_nsf_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-form-count")
    {
        adj_form_count = value;
        adj_form_count.value_namespace = name_space;
        adj_form_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count = value;
        adj_full_count.value_namespace = name_space;
        adj_full_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init = value;
        adj_stagger_init.value_namespace = name_space;
        adj_stagger_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max = value;
        adj_stagger_max.value_namespace = name_space;
        adj_stagger_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated = value;
        srgb_allocated.value_namespace = name_space;
        srgb_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-allocated")
    {
        srlb_allocated = value;
        srlb_allocated.value_namespace = name_space;
        srlb_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-start")
    {
        srlb_start = value;
        srlb_start.value_namespace = name_space;
        srlb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-end")
    {
        srlb_end = value;
        srlb_end.value_namespace = name_space;
        srlb_end.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-context")
    {
        vrf_context.yfilter = yfilter;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "running-levels")
    {
        running_levels.yfilter = yfilter;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status.yfilter = yfilter;
    }
    if(value_path == "te-connection")
    {
        te_connection.yfilter = yfilter;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart.yfilter = yfilter;
    }
    if(value_path == "adj-form-count")
    {
        adj_form_count.yfilter = yfilter;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max.yfilter = yfilter;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "srlb-allocated")
    {
        srlb_allocated.yfilter = yfilter;
    }
    if(value_path == "srlb-start")
    {
        srlb_start.yfilter = yfilter;
    }
    if(value_path == "srlb-end")
    {
        srlb_end.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-area-address" || name == "active-area-address" || name == "per-topo-data" || name == "per-area-data" || name == "vrf-context" || name == "nsap-system-id" || name == "valid-nsap-system-id" || name == "instance-id" || name == "running-levels" || name == "configured-nsf-flavor" || name == "last-restart-nsf-flavor" || name == "last-restart-status" || name == "te-connection" || name == "remaining-time-for-next-nsf-restart" || name == "adj-form-count" || name == "adj-full-count" || name == "adj-stagger-enabled" || name == "adj-stagger-init" || name == "adj-stagger-max" || name == "srgb-allocated" || name == "srgb-start" || name == "srgb-end" || name == "srlb-allocated" || name == "srlb-start" || name == "srlb-end")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::ManualAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "manual-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::~ManualAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ManualAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-area-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ManualAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::ActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "active-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::~ActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-area-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerTopoData()
    :
    default_admin_distance{YType::uint32, "default-admin-distance"},
    advertise_passive_only{YType::boolean, "advertise-passive-only"},
    wait_redist_complete{YType::boolean, "wait-redist-complete"},
    rib_connected{YType::boolean, "rib-connected"},
    sr_mpls_enabled{YType::boolean, "sr-mpls-enabled"},
    srv6_enabled{YType::boolean, "srv6-enabled"}
        ,
    id(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>())
    , redist_protocols_list(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>())
    , per_area_data(this, {})
    , srv6_configured_locator(this, {})
{
    id->parent = this;
    redist_protocols_list->parent = this;

    yang_name = "per-topo-data"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::~PerTopoData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srv6_configured_locator.len(); index++)
    {
        if(srv6_configured_locator[index]->has_data())
            return true;
    }
    return default_admin_distance.is_set
	|| advertise_passive_only.is_set
	|| wait_redist_complete.is_set
	|| rib_connected.is_set
	|| sr_mpls_enabled.is_set
	|| srv6_enabled.is_set
	|| (id !=  nullptr && id->has_data())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srv6_configured_locator.len(); index++)
    {
        if(srv6_configured_locator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(wait_redist_complete.yfilter)
	|| ydk::is_set(rib_connected.yfilter)
	|| ydk::is_set(sr_mpls_enabled.yfilter)
	|| ydk::is_set(srv6_enabled.yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topo-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (wait_redist_complete.is_set || is_set(wait_redist_complete.yfilter)) leaf_name_data.push_back(wait_redist_complete.get_name_leafdata());
    if (rib_connected.is_set || is_set(rib_connected.yfilter)) leaf_name_data.push_back(rib_connected.get_name_leafdata());
    if (sr_mpls_enabled.is_set || is_set(sr_mpls_enabled.yfilter)) leaf_name_data.push_back(sr_mpls_enabled.get_name_leafdata());
    if (srv6_enabled.is_set || is_set(srv6_enabled.yfilter)) leaf_name_data.push_back(srv6_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>();
        }
        return id;
    }

    if(child_yang_name == "redist-protocols-list")
    {
        if(redist_protocols_list == nullptr)
        {
            redist_protocols_list = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>();
        }
        return redist_protocols_list;
    }

    if(child_yang_name == "per-area-data")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData>();
        ent_->parent = this;
        per_area_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srv6-configured-locator")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator>();
        ent_->parent = this;
        srv6_configured_locator.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(redist_protocols_list != nullptr)
    {
        _children["redist-protocols-list"] = redist_protocols_list;
    }

    count_ = 0;
    for (auto ent_ : per_area_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srv6_configured_locator.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete = value;
        wait_redist_complete.value_namespace = name_space;
        wait_redist_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-connected")
    {
        rib_connected = value;
        rib_connected.value_namespace = name_space;
        rib_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-mpls-enabled")
    {
        sr_mpls_enabled = value;
        sr_mpls_enabled.value_namespace = name_space;
        sr_mpls_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srv6-enabled")
    {
        srv6_enabled = value;
        srv6_enabled.value_namespace = name_space;
        srv6_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete.yfilter = yfilter;
    }
    if(value_path == "rib-connected")
    {
        rib_connected.yfilter = yfilter;
    }
    if(value_path == "sr-mpls-enabled")
    {
        sr_mpls_enabled.yfilter = yfilter;
    }
    if(value_path == "srv6-enabled")
    {
        srv6_enabled.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "redist-protocols-list" || name == "per-area-data" || name == "srv6-configured-locator" || name == "default-admin-distance" || name == "advertise-passive-only" || name == "wait-redist-complete" || name == "rib-connected" || name == "sr-mpls-enabled" || name == "srv6-enabled")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::~Id()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::RedistProtocolsList()
    :
    isis_sh_redist_entry(this, {})
{

    yang_name = "redist-protocols-list"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::~RedistProtocolsList()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_redist_entry.len(); index++)
    {
        if(isis_sh_redist_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.len(); index++)
    {
        if(isis_sh_redist_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-protocols-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-redist-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry>();
        ent_->parent = this;
        isis_sh_redist_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_sh_redist_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-redist-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::IsisShRedistEntry()
    :
    protocol_details(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>())
{
    protocol_details->parent = this;

    yang_name = "isis-sh-redist-entry"; yang_parent_name = "redist-protocols-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::~IsisShRedistEntry()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_details !=  nullptr && protocol_details->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_details !=  nullptr && protocol_details->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-redist-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-details")
    {
        if(protocol_details == nullptr)
        {
            protocol_details = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>();
        }
        return protocol_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(protocol_details != nullptr)
    {
        _children["protocol-details"] = protocol_details;
    }

    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-details")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::ProtocolDetails()
    :
    protocol{YType::enumeration, "protocol"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    application_name{YType::str, "application-name"}
{

    yang_name = "protocol-details"; yang_parent_name = "isis-sh-redist-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::~ProtocolDetails()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| application_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(application_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "application-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"},
    uses_default_link_topo_flag{YType::boolean, "uses-default-link-topo-flag"},
    generated_metric_style{YType::enumeration, "generated-metric-style"},
    accepted_metric_style{YType::enumeration, "accepted-metric-style"},
    metric{YType::uint32, "metric"},
    ispf_state{YType::enumeration, "ispf-state"},
    te_enabled{YType::boolean, "te-enabled"},
    uloop_avoidance_type{YType::enumeration, "uloop-avoidance-type"},
    rib_update_delay{YType::uint32, "rib-update-delay"},
    sr_uloop_is_active{YType::boolean, "sr-uloop-is-active"},
    duration{YType::uint32, "duration"},
    sr_uloop_event{YType::enumeration, "sr-uloop-event"},
    sr_uloop_near_node_id{YType::str, "sr-uloop-near-node-id"},
    sr_uloop_far_node_id{YType::str, "sr-uloop-far-node-id"}
{

    yang_name = "per-area-data"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| uses_default_link_topo_flag.is_set
	|| generated_metric_style.is_set
	|| accepted_metric_style.is_set
	|| metric.is_set
	|| ispf_state.is_set
	|| te_enabled.is_set
	|| uloop_avoidance_type.is_set
	|| rib_update_delay.is_set
	|| sr_uloop_is_active.is_set
	|| duration.is_set
	|| sr_uloop_event.is_set
	|| sr_uloop_near_node_id.is_set
	|| sr_uloop_far_node_id.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(uses_default_link_topo_flag.yfilter)
	|| ydk::is_set(generated_metric_style.yfilter)
	|| ydk::is_set(accepted_metric_style.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ispf_state.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(uloop_avoidance_type.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter)
	|| ydk::is_set(sr_uloop_is_active.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(sr_uloop_event.yfilter)
	|| ydk::is_set(sr_uloop_near_node_id.yfilter)
	|| ydk::is_set(sr_uloop_far_node_id.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (uses_default_link_topo_flag.is_set || is_set(uses_default_link_topo_flag.yfilter)) leaf_name_data.push_back(uses_default_link_topo_flag.get_name_leafdata());
    if (generated_metric_style.is_set || is_set(generated_metric_style.yfilter)) leaf_name_data.push_back(generated_metric_style.get_name_leafdata());
    if (accepted_metric_style.is_set || is_set(accepted_metric_style.yfilter)) leaf_name_data.push_back(accepted_metric_style.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ispf_state.is_set || is_set(ispf_state.yfilter)) leaf_name_data.push_back(ispf_state.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (uloop_avoidance_type.is_set || is_set(uloop_avoidance_type.yfilter)) leaf_name_data.push_back(uloop_avoidance_type.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());
    if (sr_uloop_is_active.is_set || is_set(sr_uloop_is_active.yfilter)) leaf_name_data.push_back(sr_uloop_is_active.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (sr_uloop_event.is_set || is_set(sr_uloop_event.yfilter)) leaf_name_data.push_back(sr_uloop_event.get_name_leafdata());
    if (sr_uloop_near_node_id.is_set || is_set(sr_uloop_near_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_near_node_id.get_name_leafdata());
    if (sr_uloop_far_node_id.is_set || is_set(sr_uloop_far_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_far_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag = value;
        uses_default_link_topo_flag.value_namespace = name_space;
        uses_default_link_topo_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style = value;
        generated_metric_style.value_namespace = name_space;
        generated_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style = value;
        accepted_metric_style.value_namespace = name_space;
        accepted_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-state")
    {
        ispf_state = value;
        ispf_state.value_namespace = name_space;
        ispf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
        te_enabled.value_namespace = name_space;
        te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type = value;
        uloop_avoidance_type.value_namespace = name_space;
        uloop_avoidance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active = value;
        sr_uloop_is_active.value_namespace = name_space;
        sr_uloop_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event = value;
        sr_uloop_event.value_namespace = name_space;
        sr_uloop_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id = value;
        sr_uloop_near_node_id.value_namespace = name_space;
        sr_uloop_near_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id = value;
        sr_uloop_far_node_id.value_namespace = name_space;
        sr_uloop_far_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag.yfilter = yfilter;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style.yfilter = yfilter;
    }
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ispf-state")
    {
        ispf_state.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "uses-default-link-topo-flag" || name == "generated-metric-style" || name == "accepted-metric-style" || name == "metric" || name == "ispf-state" || name == "te-enabled" || name == "uloop-avoidance-type" || name == "rib-update-delay" || name == "sr-uloop-is-active" || name == "duration" || name == "sr-uloop-event" || name == "sr-uloop-near-node-id" || name == "sr-uloop-far-node-id")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::Srv6ConfiguredLocator()
    :
    locator_active{YType::boolean, "locator-active"},
    locator_name{YType::str, "locator-name"}
{

    yang_name = "srv6-configured-locator"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::~Srv6ConfiguredLocator()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::has_data() const
{
    if (is_presence_container) return true;
    return locator_active.is_set
	|| locator_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_active.yfilter)
	|| ydk::is_set(locator_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-configured-locator";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_active.is_set || is_set(locator_active.yfilter)) leaf_name_data.push_back(locator_active.get_name_leafdata());
    if (locator_name.is_set || is_set(locator_name.yfilter)) leaf_name_data.push_back(locator_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-active")
    {
        locator_active = value;
        locator_active.value_namespace = name_space;
        locator_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-name")
    {
        locator_name = value;
        locator_name.value_namespace = name_space;
        locator_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-active")
    {
        locator_active.yfilter = yfilter;
    }
    if(value_path == "locator-name")
    {
        locator_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Srv6ConfiguredLocator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locator-active" || name == "locator-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerAreaData::PerAreaData()
    :
    lsp_mtu{YType::uint32, "lsp-mtu"}
{

    yang_name = "per-area-data"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return lsp_mtu.is_set;
}

bool Isis::Instances::Instance::Protocol::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_mtu.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_mtu.is_set || is_set(lsp_mtu.yfilter)) leaf_name_data.push_back(lsp_mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::Protocol::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::Protocol::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::Protocol::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-mtu")
    {
        lsp_mtu = value;
        lsp_mtu.value_namespace = name_space;
        lsp_mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-mtu")
    {
        lsp_mtu.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-mtu")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummaries()
    :
    neighbor_summary(this, {"interface_name"})
{

    yang_name = "neighbor-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::~NeighborSummaries()
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary>();
        ent_->parent = this;
        neighbor_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    level1_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>())
    , level2_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>())
    , level12_neigbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>())
{
    level1_neighbors->parent = this;
    level2_neighbors->parent = this;
    level12_neigbors->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_data())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_data())
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_data());
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_operation())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_operation())
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_operation());
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-neighbors")
    {
        if(level1_neighbors == nullptr)
        {
            level1_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>();
        }
        return level1_neighbors;
    }

    if(child_yang_name == "level2-neighbors")
    {
        if(level2_neighbors == nullptr)
        {
            level2_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>();
        }
        return level2_neighbors;
    }

    if(child_yang_name == "level12-neigbors")
    {
        if(level12_neigbors == nullptr)
        {
            level12_neigbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>();
        }
        return level12_neigbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(level1_neighbors != nullptr)
    {
        _children["level1-neighbors"] = level1_neighbors;
    }

    if(level2_neighbors != nullptr)
    {
        _children["level2-neighbors"] = level2_neighbors;
    }

    if(level12_neigbors != nullptr)
    {
        _children["level12-neigbors"] = level12_neigbors;
    }

    return _children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-neighbors" || name == "level2-neighbors" || name == "level12-neigbors" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::Level1Neighbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level1-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::~Level1Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::Level2Neighbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level2-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::~Level2Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::Level12Neigbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level12-neigbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::~Level12Neigbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level12-neigbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsps()
    :
    checkpoint_lsp(this, {})
{

    yang_name = "checkpoint-lsps"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointLsps::~CheckpointLsps()
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_lsp.len(); index++)
    {
        if(checkpoint_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointLsps::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_lsp.len(); index++)
    {
        if(checkpoint_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-lsp")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::CheckpointLsps::CheckpointLsp>();
        ent_->parent = this;
        checkpoint_lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : checkpoint_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::CheckpointLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::CheckpointLsp()
    :
    level{YType::enumeration, "level"},
    lsp_id{YType::str, "lsp-id"},
    checkpoint_lsp_object_id{YType::uint32, "checkpoint-lsp-object-id"},
    checkpoint_lsp_level{YType::uint8, "checkpoint-lsp-level"},
    checkpoint_lsp_local_flag{YType::boolean, "checkpoint-lsp-local-flag"},
    checkpoint_lsp_id{YType::str, "checkpoint-lsp-id"}
{

    yang_name = "checkpoint-lsp"; yang_parent_name = "checkpoint-lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::~CheckpointLsp()
{
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| lsp_id.is_set
	|| checkpoint_lsp_object_id.is_set
	|| checkpoint_lsp_level.is_set
	|| checkpoint_lsp_local_flag.is_set
	|| checkpoint_lsp_id.is_set;
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_object_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_level.yfilter)
	|| ydk::is_set(checkpoint_lsp_local_flag.yfilter)
	|| ydk::is_set(checkpoint_lsp_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (checkpoint_lsp_object_id.is_set || is_set(checkpoint_lsp_object_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_object_id.get_name_leafdata());
    if (checkpoint_lsp_level.is_set || is_set(checkpoint_lsp_level.yfilter)) leaf_name_data.push_back(checkpoint_lsp_level.get_name_leafdata());
    if (checkpoint_lsp_local_flag.is_set || is_set(checkpoint_lsp_local_flag.yfilter)) leaf_name_data.push_back(checkpoint_lsp_local_flag.get_name_leafdata());
    if (checkpoint_lsp_id.is_set || is_set(checkpoint_lsp_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id = value;
        checkpoint_lsp_object_id.value_namespace = name_space;
        checkpoint_lsp_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level = value;
        checkpoint_lsp_level.value_namespace = name_space;
        checkpoint_lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag = value;
        checkpoint_lsp_local_flag.value_namespace = name_space;
        checkpoint_lsp_local_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id = value;
        checkpoint_lsp_id.value_namespace = name_space;
        checkpoint_lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "lsp-id" || name == "checkpoint-lsp-object-id" || name == "checkpoint-lsp-level" || name == "checkpoint-lsp-local-flag" || name == "checkpoint-lsp-id")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroups()
    :
    mesh_group_configured_interface_list(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>())
{
    mesh_group_configured_interface_list->parent = this;

    yang_name = "mesh-groups"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::~MeshGroups()
{
}

bool Isis::Instances::Instance::MeshGroups::has_data() const
{
    if (is_presence_container) return true;
    return (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_data());
}

bool Isis::Instances::Instance::MeshGroups::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group-configured-interface-list")
    {
        if(mesh_group_configured_interface_list == nullptr)
        {
            mesh_group_configured_interface_list = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>();
        }
        return mesh_group_configured_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mesh_group_configured_interface_list != nullptr)
    {
        _children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
    }

    return _children;
}

void Isis::Instances::Instance::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-configured-interface-list")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::MeshGroupConfiguredInterfaceList()
    :
    isis_sh_mesh_entry(this, {})
{

    yang_name = "mesh-group-configured-interface-list"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::~MeshGroupConfiguredInterfaceList()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_mesh_entry.len(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.len(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-configured-interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-mesh-entry")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry>();
        ent_->parent = this;
        isis_sh_mesh_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : isis_sh_mesh_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-mesh-entry")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::IsisShMeshEntry()
    :
    mesh_group_interface{YType::str, "mesh-group-interface"},
    mesh_group_number{YType::uint32, "mesh-group-number"}
        ,
    next_mesh_group(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup>())
{
    next_mesh_group->parent = this;

    yang_name = "isis-sh-mesh-entry"; yang_parent_name = "mesh-group-configured-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::~IsisShMeshEntry()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_data() const
{
    if (is_presence_container) return true;
    return mesh_group_interface.is_set
	|| mesh_group_number.is_set
	|| (next_mesh_group !=  nullptr && next_mesh_group->has_data());
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_interface.yfilter)
	|| ydk::is_set(mesh_group_number.yfilter)
	|| (next_mesh_group !=  nullptr && next_mesh_group->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-mesh-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_interface.is_set || is_set(mesh_group_interface.yfilter)) leaf_name_data.push_back(mesh_group_interface.get_name_leafdata());
    if (mesh_group_number.is_set || is_set(mesh_group_number.yfilter)) leaf_name_data.push_back(mesh_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-mesh-group")
    {
        if(next_mesh_group == nullptr)
        {
            next_mesh_group = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup>();
        }
        return next_mesh_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(next_mesh_group != nullptr)
    {
        _children["next-mesh-group"] = next_mesh_group;
    }

    return _children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface = value;
        mesh_group_interface.value_namespace = name_space;
        mesh_group_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number = value;
        mesh_group_number.value_namespace = name_space;
        mesh_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface.yfilter = yfilter;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-mesh-group" || name == "mesh-group-interface" || name == "mesh-group-number")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::NextMeshGroup()
{

    yang_name = "next-mesh-group"; yang_parent_name = "isis-sh-mesh-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::~NextMeshGroup()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::has_operation() const
{
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-mesh-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::NextMeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Isis::Instances::Instance::NsrStatistics::NsrStatistics()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
        ,
    isis_nsr_stats_data(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>())
{
    isis_nsr_stats_data->parent = this;

    yang_name = "nsr-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::~NsrStatistics()
{
}

bool Isis::Instances::Instance::NsrStatistics::has_data() const
{
    if (is_presence_container) return true;
    return isis_vm_state.is_set
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NsrStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-stats-data")
    {
        if(isis_nsr_stats_data == nullptr)
        {
            isis_nsr_stats_data = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>();
        }
        return isis_nsr_stats_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NsrStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis_nsr_stats_data != nullptr)
    {
        _children["isis-nsr-stats-data"] = isis_nsr_stats_data;
    }

    return _children;
}

void Isis::Instances::Instance::NsrStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-stats-data" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::IsisNsrStatsData()
    :
    self(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>())
    , peer(this, {})
{
    self->parent = this;

    yang_name = "isis-nsr-stats-data"; yang_parent_name = "nsr-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::~IsisNsrStatsData()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return (self !=  nullptr && self->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (self !=  nullptr && self->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-stats-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "self")
    {
        if(self == nullptr)
        {
            self = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>();
        }
        return self;
    }

    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(self != nullptr)
    {
        _children["self"] = self;
    }

    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "self" || name == "peer")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::Self()
    :
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "self"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::~Self()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_data() const
{
    if (is_presence_container) return true;
    return no_of_l1_lsp.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l2_adj.is_set
	|| no_of_live_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_lan_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_te_tunnels.is_set
	|| no_of_te_links.is_set
	|| no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-l1-lsp" || name == "no-of-l2-lsp" || name == "no-of-l1-adj" || name == "no-of-l2-adj" || name == "no-of-live-interface" || name == "no-of-ptp-interface" || name == "no-of-lan-interface" || name == "no-of-loopback-interface" || name == "no-of-te-tunnels" || name == "no-of-te-links" || name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::Peer()
    :
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "peer"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::~Peer()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_data() const
{
    if (is_presence_container) return true;
    return no_of_l1_lsp.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l2_adj.is_set
	|| no_of_live_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_lan_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_te_tunnels.is_set
	|| no_of_te_links.is_set
	|| no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-l1-lsp" || name == "no-of-l2-lsp" || name == "no-of-l1-adj" || name == "no-of-l2-adj" || name == "no-of-live-interface" || name == "no-of-ptp-interface" || name == "no-of-lan-interface" || name == "no-of-loopback-interface" || name == "no-of-te-tunnels" || name == "no-of-te-links" || name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnels()
    :
    checkpoint_te_tunnel(this, {})
{

    yang_name = "checkpoint-te-tunnels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointTeTunnels::~CheckpointTeTunnels()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_te_tunnel.len(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.len(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointTeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-te-tunnel")
    {
        auto ent_ = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel>();
        ent_->parent = this;
        checkpoint_te_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointTeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : checkpoint_te_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::CheckpointTeTunnel()
    :
    level{YType::enumeration, "level"},
    interface_name{YType::str, "interface-name"},
    checkpoint_te_level{YType::enumeration, "checkpoint-te-level"},
    checkpoint_te_system_id{YType::str, "checkpoint-te-system-id"},
    checkpoint_te_interface{YType::str, "checkpoint-te-interface"},
    checkpoint_te_flags{YType::uint32, "checkpoint-te-flags"},
    checkpoint_te_nexthop{YType::str, "checkpoint-te-nexthop"},
    checkpoint_te_metric{YType::int32, "checkpoint-te-metric"},
    checkpoint_te_metric_mode{YType::enumeration, "checkpoint-te-metric-mode"},
    checkpoint_te_bandwidth{YType::uint32, "checkpoint-te-bandwidth"},
    checkpoint_te_object_id{YType::uint32, "checkpoint-te-object-id"}
{

    yang_name = "checkpoint-te-tunnel"; yang_parent_name = "checkpoint-te-tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::~CheckpointTeTunnel()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interface_name.is_set
	|| checkpoint_te_level.is_set
	|| checkpoint_te_system_id.is_set
	|| checkpoint_te_interface.is_set
	|| checkpoint_te_flags.is_set
	|| checkpoint_te_nexthop.is_set
	|| checkpoint_te_metric.is_set
	|| checkpoint_te_metric_mode.is_set
	|| checkpoint_te_bandwidth.is_set
	|| checkpoint_te_object_id.is_set;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_te_level.yfilter)
	|| ydk::is_set(checkpoint_te_system_id.yfilter)
	|| ydk::is_set(checkpoint_te_interface.yfilter)
	|| ydk::is_set(checkpoint_te_flags.yfilter)
	|| ydk::is_set(checkpoint_te_nexthop.yfilter)
	|| ydk::is_set(checkpoint_te_metric.yfilter)
	|| ydk::is_set(checkpoint_te_metric_mode.yfilter)
	|| ydk::is_set(checkpoint_te_bandwidth.yfilter)
	|| ydk::is_set(checkpoint_te_object_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnel";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_te_level.is_set || is_set(checkpoint_te_level.yfilter)) leaf_name_data.push_back(checkpoint_te_level.get_name_leafdata());
    if (checkpoint_te_system_id.is_set || is_set(checkpoint_te_system_id.yfilter)) leaf_name_data.push_back(checkpoint_te_system_id.get_name_leafdata());
    if (checkpoint_te_interface.is_set || is_set(checkpoint_te_interface.yfilter)) leaf_name_data.push_back(checkpoint_te_interface.get_name_leafdata());
    if (checkpoint_te_flags.is_set || is_set(checkpoint_te_flags.yfilter)) leaf_name_data.push_back(checkpoint_te_flags.get_name_leafdata());
    if (checkpoint_te_nexthop.is_set || is_set(checkpoint_te_nexthop.yfilter)) leaf_name_data.push_back(checkpoint_te_nexthop.get_name_leafdata());
    if (checkpoint_te_metric.is_set || is_set(checkpoint_te_metric.yfilter)) leaf_name_data.push_back(checkpoint_te_metric.get_name_leafdata());
    if (checkpoint_te_metric_mode.is_set || is_set(checkpoint_te_metric_mode.yfilter)) leaf_name_data.push_back(checkpoint_te_metric_mode.get_name_leafdata());
    if (checkpoint_te_bandwidth.is_set || is_set(checkpoint_te_bandwidth.yfilter)) leaf_name_data.push_back(checkpoint_te_bandwidth.get_name_leafdata());
    if (checkpoint_te_object_id.is_set || is_set(checkpoint_te_object_id.yfilter)) leaf_name_data.push_back(checkpoint_te_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level = value;
        checkpoint_te_level.value_namespace = name_space;
        checkpoint_te_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id = value;
        checkpoint_te_system_id.value_namespace = name_space;
        checkpoint_te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface = value;
        checkpoint_te_interface.value_namespace = name_space;
        checkpoint_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags = value;
        checkpoint_te_flags.value_namespace = name_space;
        checkpoint_te_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop = value;
        checkpoint_te_nexthop.value_namespace = name_space;
        checkpoint_te_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric = value;
        checkpoint_te_metric.value_namespace = name_space;
        checkpoint_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode = value;
        checkpoint_te_metric_mode.value_namespace = name_space;
        checkpoint_te_metric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth = value;
        checkpoint_te_bandwidth.value_namespace = name_space;
        checkpoint_te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id = value;
        checkpoint_te_object_id.value_namespace = name_space;
        checkpoint_te_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interface-name" || name == "checkpoint-te-level" || name == "checkpoint-te-system-id" || name == "checkpoint-te-interface" || name == "checkpoint-te-flags" || name == "checkpoint-te-nexthop" || name == "checkpoint-te-metric" || name == "checkpoint-te-metric-mode" || name == "checkpoint-te-bandwidth" || name == "checkpoint-te-object-id")
        return true;
    return false;
}


}
}

