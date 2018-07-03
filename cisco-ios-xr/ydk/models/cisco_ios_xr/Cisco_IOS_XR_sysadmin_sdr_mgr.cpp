
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_sdr_mgr.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_sdr_mgr {

SdrConfig::SdrConfig()
    :
    sdr(this, {"name"})
{

    yang_name = "sdr-config"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sdr-mgr"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrConfig::~SdrConfig()
{
}

bool SdrConfig::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::has_operation() const
{
    for (std::size_t index=0; index<sdr.len(); index++)
    {
        if(sdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:sdr-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr")
    {
        auto c = std::make_shared<SdrConfig::Sdr>();
        c->parent = this;
        sdr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrConfig::clone_ptr() const
{
    return std::make_shared<SdrConfig>();
}

std::string SdrConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr")
        return true;
    return false;
}

SdrConfig::Sdr::Sdr()
    :
    name{YType::str, "name"},
    initial_image{YType::str, "initial-image"},
    lead_down_delta{YType::uint32, "lead_down_delta"},
    pairing_mode{YType::enumeration, "pairing-mode"},
    issu{YType::enumeration, "issu"}
        ,
    resources(std::make_shared<SdrConfig::Sdr::Resources>())
    , location(this, {"node_location"})
    , action(std::make_shared<SdrConfig::Sdr::Action>())
    , detail(std::make_shared<SdrConfig::Sdr::Detail>())
    , reboot_history(std::make_shared<SdrConfig::Sdr::RebootHistory>())
    , nodes(std::make_shared<SdrConfig::Sdr::Nodes>())
    , pairing2(std::make_shared<SdrConfig::Sdr::Pairing2>())
    , pairing(this, {"name"})
{
    resources->parent = this;
    action->parent = this;
    detail->parent = this;
    reboot_history->parent = this;
    nodes->parent = this;
    pairing2->parent = this;

    yang_name = "sdr"; yang_parent_name = "sdr-config"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrConfig::Sdr::~Sdr()
{
}

bool SdrConfig::Sdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_data())
            return true;
    }
    return name.is_set
	|| initial_image.is_set
	|| lead_down_delta.is_set
	|| pairing_mode.is_set
	|| issu.is_set
	|| (resources !=  nullptr && resources->has_data())
	|| (action !=  nullptr && action->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (reboot_history !=  nullptr && reboot_history->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (pairing2 !=  nullptr && pairing2->has_data());
}

bool SdrConfig::Sdr::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(initial_image.yfilter)
	|| ydk::is_set(lead_down_delta.yfilter)
	|| ydk::is_set(pairing_mode.yfilter)
	|| ydk::is_set(issu.yfilter)
	|| (resources !=  nullptr && resources->has_operation())
	|| (action !=  nullptr && action->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (reboot_history !=  nullptr && reboot_history->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (pairing2 !=  nullptr && pairing2->has_operation());
}

std::string SdrConfig::Sdr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:sdr-config/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrConfig::Sdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (initial_image.is_set || is_set(initial_image.yfilter)) leaf_name_data.push_back(initial_image.get_name_leafdata());
    if (lead_down_delta.is_set || is_set(lead_down_delta.yfilter)) leaf_name_data.push_back(lead_down_delta.get_name_leafdata());
    if (pairing_mode.is_set || is_set(pairing_mode.yfilter)) leaf_name_data.push_back(pairing_mode.get_name_leafdata());
    if (issu.is_set || is_set(issu.yfilter)) leaf_name_data.push_back(issu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<SdrConfig::Sdr::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    if(child_yang_name == "Action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<SdrConfig::Sdr::Action>();
        }
        return action;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<SdrConfig::Sdr::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "reboot-history")
    {
        if(reboot_history == nullptr)
        {
            reboot_history = std::make_shared<SdrConfig::Sdr::RebootHistory>();
        }
        return reboot_history;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SdrConfig::Sdr::Nodes>();
        }
        return nodes;
    }

    if(child_yang_name == "pairing2")
    {
        if(pairing2 == nullptr)
        {
            pairing2 = std::make_shared<SdrConfig::Sdr::Pairing2>();
        }
        return pairing2;
    }

    if(child_yang_name == "pairing")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Pairing>();
        c->parent = this;
        pairing.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(action != nullptr)
    {
        children["Action"] = action;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(reboot_history != nullptr)
    {
        children["reboot-history"] = reboot_history;
    }

    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(pairing2 != nullptr)
    {
        children["pairing2"] = pairing2;
    }

    count = 0;
    for (auto c : pairing.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-image")
    {
        initial_image = value;
        initial_image.value_namespace = name_space;
        initial_image.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lead_down_delta")
    {
        lead_down_delta = value;
        lead_down_delta.value_namespace = name_space;
        lead_down_delta.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pairing-mode")
    {
        pairing_mode = value;
        pairing_mode.value_namespace = name_space;
        pairing_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu")
    {
        issu = value;
        issu.value_namespace = name_space;
        issu.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "initial-image")
    {
        initial_image.yfilter = yfilter;
    }
    if(value_path == "lead_down_delta")
    {
        lead_down_delta.yfilter = yfilter;
    }
    if(value_path == "pairing-mode")
    {
        pairing_mode.yfilter = yfilter;
    }
    if(value_path == "issu")
    {
        issu.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resources" || name == "location" || name == "Action" || name == "detail" || name == "reboot-history" || name == "nodes" || name == "pairing2" || name == "pairing" || name == "name" || name == "initial-image" || name == "lead_down_delta" || name == "pairing-mode" || name == "issu")
        return true;
    return false;
}

SdrConfig::Sdr::Resources::Resources()
    :
    fgid{YType::uint32, "fgid"},
    mgmt_ext_vlan{YType::uint32, "mgmt_ext_vlan"},
    disk_space_size{YType::uint32, "disk-space-size"}
        ,
    card_type(this, {"type"})
{

    yang_name = "resources"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Resources::~Resources()
{
}

bool SdrConfig::Sdr::Resources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card_type.len(); index++)
    {
        if(card_type[index]->has_data())
            return true;
    }
    return fgid.is_set
	|| mgmt_ext_vlan.is_set
	|| disk_space_size.is_set;
}

bool SdrConfig::Sdr::Resources::has_operation() const
{
    for (std::size_t index=0; index<card_type.len(); index++)
    {
        if(card_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fgid.yfilter)
	|| ydk::is_set(mgmt_ext_vlan.yfilter)
	|| ydk::is_set(disk_space_size.yfilter);
}

std::string SdrConfig::Sdr::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Resources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgid.is_set || is_set(fgid.yfilter)) leaf_name_data.push_back(fgid.get_name_leafdata());
    if (mgmt_ext_vlan.is_set || is_set(mgmt_ext_vlan.yfilter)) leaf_name_data.push_back(mgmt_ext_vlan.get_name_leafdata());
    if (disk_space_size.is_set || is_set(disk_space_size.yfilter)) leaf_name_data.push_back(disk_space_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-type")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Resources::CardType>();
        c->parent = this;
        card_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : card_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Resources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fgid")
    {
        fgid = value;
        fgid.value_namespace = name_space;
        fgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmt_ext_vlan")
    {
        mgmt_ext_vlan = value;
        mgmt_ext_vlan.value_namespace = name_space;
        mgmt_ext_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disk-space-size")
    {
        disk_space_size = value;
        disk_space_size.value_namespace = name_space;
        disk_space_size.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Resources::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fgid")
    {
        fgid.yfilter = yfilter;
    }
    if(value_path == "mgmt_ext_vlan")
    {
        mgmt_ext_vlan.yfilter = yfilter;
    }
    if(value_path == "disk-space-size")
    {
        disk_space_size.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Resources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-type" || name == "fgid" || name == "mgmt_ext_vlan" || name == "disk-space-size")
        return true;
    return false;
}

SdrConfig::Sdr::Resources::CardType::CardType()
    :
    type{YType::enumeration, "type"},
    vm_memory{YType::uint32, "vm-memory"},
    vm_cpu{YType::uint32, "vm-cpu"}
{

    yang_name = "card-type"; yang_parent_name = "resources"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Resources::CardType::~CardType()
{
}

bool SdrConfig::Sdr::Resources::CardType::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| vm_memory.is_set
	|| vm_cpu.is_set;
}

bool SdrConfig::Sdr::Resources::CardType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(vm_memory.yfilter)
	|| ydk::is_set(vm_cpu.yfilter);
}

std::string SdrConfig::Sdr::Resources::CardType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-type";
    ADD_KEY_TOKEN(type, "type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Resources::CardType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (vm_memory.is_set || is_set(vm_memory.yfilter)) leaf_name_data.push_back(vm_memory.get_name_leafdata());
    if (vm_cpu.is_set || is_set(vm_cpu.yfilter)) leaf_name_data.push_back(vm_cpu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Resources::CardType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Resources::CardType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Resources::CardType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-memory")
    {
        vm_memory = value;
        vm_memory.value_namespace = name_space;
        vm_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-cpu")
    {
        vm_cpu = value;
        vm_cpu.value_namespace = name_space;
        vm_cpu.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Resources::CardType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "vm-memory")
    {
        vm_memory.yfilter = yfilter;
    }
    if(value_path == "vm-cpu")
    {
        vm_cpu.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Resources::CardType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "vm-memory" || name == "vm-cpu")
        return true;
    return false;
}

SdrConfig::Sdr::Location::Location()
    :
    node_location{YType::str, "node-location"}
{

    yang_name = "location"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Location::~Location()
{
}

bool SdrConfig::Sdr::Location::has_data() const
{
    if (is_presence_container) return true;
    return node_location.is_set;
}

bool SdrConfig::Sdr::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter);
}

std::string SdrConfig::Sdr::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-location")
        return true;
    return false;
}

SdrConfig::Sdr::Action::Action()
    :
    location(this, {"node_location"})
{

    yang_name = "Action"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Action::~Action()
{
}

bool SdrConfig::Sdr::Action::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::Sdr::Action::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::Sdr::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Action::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SdrConfig::Sdr::Action::Location::Location()
    :
    node_location{YType::str, "node-location"}
{

    yang_name = "location"; yang_parent_name = "Action"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Action::Location::~Location()
{
}

bool SdrConfig::Sdr::Action::Location::has_data() const
{
    if (is_presence_container) return true;
    return node_location.is_set;
}

bool SdrConfig::Sdr::Action::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter);
}

std::string SdrConfig::Sdr::Action::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Action::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Action::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Action::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Action::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Action::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Action::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-location")
        return true;
    return false;
}

SdrConfig::Sdr::Detail::Detail()
    :
    location(this, {"node_location"})
{

    yang_name = "detail"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Detail::~Detail()
{
}

bool SdrConfig::Sdr::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::Sdr::Detail::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::Sdr::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Detail::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SdrConfig::Sdr::Detail::Location::Location()
    :
    node_location{YType::str, "node-location"},
    sdr_id{YType::uint32, "sdr-id"},
    ip_addr{YType::str, "ip-addr"},
    mac_address{YType::str, "mac-address"},
    boot_part{YType::str, "boot_part"},
    data_part{YType::str, "data_part"},
    big_disk{YType::str, "big_disk"},
    vm_id{YType::uint32, "vm_id"},
    vmcpu{YType::uint32, "vmcpu"},
    vmmemory{YType::uint32, "vmmemory"},
    card_type{YType::str, "card-type"},
    card_serial{YType::str, "card_serial"},
    rack_type{YType::str, "rack-type"},
    chassis_serial{YType::str, "chassis_serial"},
    hw_version{YType::str, "hw_version"},
    mgmt_ext_vlan{YType::str, "mgmt_ext_vlan"},
    state{YType::str, "state"},
    start_time{YType::str, "start-time"},
    reboot_count{YType::uint32, "reboot_count"},
    rh_count{YType::uint32, "rh_count"}
        ,
    reboot_hist1(this, {"count"})
{

    yang_name = "location"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Detail::Location::~Location()
{
}

bool SdrConfig::Sdr::Detail::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reboot_hist1.len(); index++)
    {
        if(reboot_hist1[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| sdr_id.is_set
	|| ip_addr.is_set
	|| mac_address.is_set
	|| boot_part.is_set
	|| data_part.is_set
	|| big_disk.is_set
	|| vm_id.is_set
	|| vmcpu.is_set
	|| vmmemory.is_set
	|| card_type.is_set
	|| card_serial.is_set
	|| rack_type.is_set
	|| chassis_serial.is_set
	|| hw_version.is_set
	|| mgmt_ext_vlan.is_set
	|| state.is_set
	|| start_time.is_set
	|| reboot_count.is_set
	|| rh_count.is_set;
}

bool SdrConfig::Sdr::Detail::Location::has_operation() const
{
    for (std::size_t index=0; index<reboot_hist1.len(); index++)
    {
        if(reboot_hist1[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(boot_part.yfilter)
	|| ydk::is_set(data_part.yfilter)
	|| ydk::is_set(big_disk.yfilter)
	|| ydk::is_set(vm_id.yfilter)
	|| ydk::is_set(vmcpu.yfilter)
	|| ydk::is_set(vmmemory.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(card_serial.yfilter)
	|| ydk::is_set(rack_type.yfilter)
	|| ydk::is_set(chassis_serial.yfilter)
	|| ydk::is_set(hw_version.yfilter)
	|| ydk::is_set(mgmt_ext_vlan.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(reboot_count.yfilter)
	|| ydk::is_set(rh_count.yfilter);
}

std::string SdrConfig::Sdr::Detail::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Detail::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (boot_part.is_set || is_set(boot_part.yfilter)) leaf_name_data.push_back(boot_part.get_name_leafdata());
    if (data_part.is_set || is_set(data_part.yfilter)) leaf_name_data.push_back(data_part.get_name_leafdata());
    if (big_disk.is_set || is_set(big_disk.yfilter)) leaf_name_data.push_back(big_disk.get_name_leafdata());
    if (vm_id.is_set || is_set(vm_id.yfilter)) leaf_name_data.push_back(vm_id.get_name_leafdata());
    if (vmcpu.is_set || is_set(vmcpu.yfilter)) leaf_name_data.push_back(vmcpu.get_name_leafdata());
    if (vmmemory.is_set || is_set(vmmemory.yfilter)) leaf_name_data.push_back(vmmemory.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_serial.is_set || is_set(card_serial.yfilter)) leaf_name_data.push_back(card_serial.get_name_leafdata());
    if (rack_type.is_set || is_set(rack_type.yfilter)) leaf_name_data.push_back(rack_type.get_name_leafdata());
    if (chassis_serial.is_set || is_set(chassis_serial.yfilter)) leaf_name_data.push_back(chassis_serial.get_name_leafdata());
    if (hw_version.is_set || is_set(hw_version.yfilter)) leaf_name_data.push_back(hw_version.get_name_leafdata());
    if (mgmt_ext_vlan.is_set || is_set(mgmt_ext_vlan.yfilter)) leaf_name_data.push_back(mgmt_ext_vlan.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (reboot_count.is_set || is_set(reboot_count.yfilter)) leaf_name_data.push_back(reboot_count.get_name_leafdata());
    if (rh_count.is_set || is_set(rh_count.yfilter)) leaf_name_data.push_back(rh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Detail::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reboot_hist1")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Detail::Location::RebootHist1>();
        c->parent = this;
        reboot_hist1.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Detail::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reboot_hist1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Detail::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot_part")
    {
        boot_part = value;
        boot_part.value_namespace = name_space;
        boot_part.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data_part")
    {
        data_part = value;
        data_part.value_namespace = name_space;
        data_part.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "big_disk")
    {
        big_disk = value;
        big_disk.value_namespace = name_space;
        big_disk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm_id")
    {
        vm_id = value;
        vm_id.value_namespace = name_space;
        vm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmcpu")
    {
        vmcpu = value;
        vmcpu.value_namespace = name_space;
        vmcpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmmemory")
    {
        vmmemory = value;
        vmmemory.value_namespace = name_space;
        vmmemory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card_serial")
    {
        card_serial = value;
        card_serial.value_namespace = name_space;
        card_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-type")
    {
        rack_type = value;
        rack_type.value_namespace = name_space;
        rack_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis_serial")
    {
        chassis_serial = value;
        chassis_serial.value_namespace = name_space;
        chassis_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hw_version")
    {
        hw_version = value;
        hw_version.value_namespace = name_space;
        hw_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmt_ext_vlan")
    {
        mgmt_ext_vlan = value;
        mgmt_ext_vlan.value_namespace = name_space;
        mgmt_ext_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reboot_count")
    {
        reboot_count = value;
        reboot_count.value_namespace = name_space;
        reboot_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rh_count")
    {
        rh_count = value;
        rh_count.value_namespace = name_space;
        rh_count.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Detail::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "boot_part")
    {
        boot_part.yfilter = yfilter;
    }
    if(value_path == "data_part")
    {
        data_part.yfilter = yfilter;
    }
    if(value_path == "big_disk")
    {
        big_disk.yfilter = yfilter;
    }
    if(value_path == "vm_id")
    {
        vm_id.yfilter = yfilter;
    }
    if(value_path == "vmcpu")
    {
        vmcpu.yfilter = yfilter;
    }
    if(value_path == "vmmemory")
    {
        vmmemory.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "card_serial")
    {
        card_serial.yfilter = yfilter;
    }
    if(value_path == "rack-type")
    {
        rack_type.yfilter = yfilter;
    }
    if(value_path == "chassis_serial")
    {
        chassis_serial.yfilter = yfilter;
    }
    if(value_path == "hw_version")
    {
        hw_version.yfilter = yfilter;
    }
    if(value_path == "mgmt_ext_vlan")
    {
        mgmt_ext_vlan.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "reboot_count")
    {
        reboot_count.yfilter = yfilter;
    }
    if(value_path == "rh_count")
    {
        rh_count.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Detail::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reboot_hist1" || name == "node-location" || name == "sdr-id" || name == "ip-addr" || name == "mac-address" || name == "boot_part" || name == "data_part" || name == "big_disk" || name == "vm_id" || name == "vmcpu" || name == "vmmemory" || name == "card-type" || name == "card_serial" || name == "rack-type" || name == "chassis_serial" || name == "hw_version" || name == "mgmt_ext_vlan" || name == "state" || name == "start-time" || name == "reboot_count" || name == "rh_count")
        return true;
    return false;
}

SdrConfig::Sdr::Detail::Location::RebootHist1::RebootHist1()
    :
    count{YType::uint32, "count"},
    time{YType::str, "Time"},
    reason{YType::str, "Reason"}
{

    yang_name = "reboot_hist1"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Detail::Location::RebootHist1::~RebootHist1()
{
}

bool SdrConfig::Sdr::Detail::Location::RebootHist1::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| time.is_set
	|| reason.is_set;
}

bool SdrConfig::Sdr::Detail::Location::RebootHist1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string SdrConfig::Sdr::Detail::Location::RebootHist1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot_hist1";
    ADD_KEY_TOKEN(count, "count");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Detail::Location::RebootHist1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Detail::Location::RebootHist1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Detail::Location::RebootHist1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Detail::Location::RebootHist1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Detail::Location::RebootHist1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "Time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "Reason")
    {
        reason.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Detail::Location::RebootHist1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "Time" || name == "Reason")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::RebootHistory()
    :
    reverse(std::make_shared<SdrConfig::Sdr::RebootHistory::Reverse>())
    , default_disp(std::make_shared<SdrConfig::Sdr::RebootHistory::DefaultDisp>())
{
    reverse->parent = this;
    default_disp->parent = this;

    yang_name = "reboot-history"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::~RebootHistory()
{
}

bool SdrConfig::Sdr::RebootHistory::has_data() const
{
    if (is_presence_container) return true;
    return (reverse !=  nullptr && reverse->has_data())
	|| (default_disp !=  nullptr && default_disp->has_data());
}

bool SdrConfig::Sdr::RebootHistory::has_operation() const
{
    return is_set(yfilter)
	|| (reverse !=  nullptr && reverse->has_operation())
	|| (default_disp !=  nullptr && default_disp->has_operation());
}

std::string SdrConfig::Sdr::RebootHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse")
    {
        if(reverse == nullptr)
        {
            reverse = std::make_shared<SdrConfig::Sdr::RebootHistory::Reverse>();
        }
        return reverse;
    }

    if(child_yang_name == "default-disp")
    {
        if(default_disp == nullptr)
        {
            default_disp = std::make_shared<SdrConfig::Sdr::RebootHistory::DefaultDisp>();
        }
        return default_disp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reverse != nullptr)
    {
        children["reverse"] = reverse;
    }

    if(default_disp != nullptr)
    {
        children["default-disp"] = default_disp;
    }

    return children;
}

void SdrConfig::Sdr::RebootHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::RebootHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::RebootHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse" || name == "default-disp")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::Reverse::Reverse()
    :
    location(this, {"node_location"})
{

    yang_name = "reverse"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::Reverse::~Reverse()
{
}

bool SdrConfig::Sdr::RebootHistory::Reverse::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::Sdr::RebootHistory::Reverse::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::Reverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::Reverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::Reverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::RebootHistory::Reverse::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::Reverse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::RebootHistory::Reverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::RebootHistory::Reverse::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::RebootHistory::Reverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::Reverse::Location::Location()
    :
    node_location{YType::str, "node-location"},
    reboot_count{YType::uint32, "reboot_count"},
    rh_count{YType::uint32, "rh_count"}
        ,
    reboot_hist2(this, {"count"})
{

    yang_name = "location"; yang_parent_name = "reverse"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::Reverse::Location::~Location()
{
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reboot_hist2.len(); index++)
    {
        if(reboot_hist2[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| reboot_count.is_set
	|| rh_count.is_set;
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::has_operation() const
{
    for (std::size_t index=0; index<reboot_hist2.len(); index++)
    {
        if(reboot_hist2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(reboot_count.yfilter)
	|| ydk::is_set(rh_count.yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::Reverse::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::Reverse::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (reboot_count.is_set || is_set(reboot_count.yfilter)) leaf_name_data.push_back(reboot_count.get_name_leafdata());
    if (rh_count.is_set || is_set(rh_count.yfilter)) leaf_name_data.push_back(rh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::Reverse::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reboot_hist2")
    {
        auto c = std::make_shared<SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2>();
        c->parent = this;
        reboot_hist2.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::Reverse::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reboot_hist2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::RebootHistory::Reverse::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reboot_count")
    {
        reboot_count = value;
        reboot_count.value_namespace = name_space;
        reboot_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rh_count")
    {
        rh_count = value;
        rh_count.value_namespace = name_space;
        rh_count.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::RebootHistory::Reverse::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "reboot_count")
    {
        reboot_count.yfilter = yfilter;
    }
    if(value_path == "rh_count")
    {
        rh_count.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reboot_hist2" || name == "node-location" || name == "reboot_count" || name == "rh_count")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::RebootHist2()
    :
    count{YType::uint32, "count"},
    time{YType::str, "Time"},
    reason{YType::str, "Reason"}
{

    yang_name = "reboot_hist2"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::~RebootHist2()
{
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| time.is_set
	|| reason.is_set;
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot_hist2";
    ADD_KEY_TOKEN(count, "count");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "Time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "Reason")
    {
        reason.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::RebootHistory::Reverse::Location::RebootHist2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "Time" || name == "Reason")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::DefaultDisp()
    :
    location(this, {"node_location"})
{

    yang_name = "default-disp"; yang_parent_name = "reboot-history"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::~DefaultDisp()
{
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::DefaultDisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-disp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::DefaultDisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::DefaultDisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::RebootHistory::DefaultDisp::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::DefaultDisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::Location()
    :
    node_location{YType::str, "node-location"},
    reboot_count{YType::uint32, "reboot_count"},
    rh_count{YType::uint32, "rh_count"}
        ,
    reboot_hist2(this, {"count"})
{

    yang_name = "location"; yang_parent_name = "default-disp"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::~Location()
{
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reboot_hist2.len(); index++)
    {
        if(reboot_hist2[index]->has_data())
            return true;
    }
    return node_location.is_set
	|| reboot_count.is_set
	|| rh_count.is_set;
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::has_operation() const
{
    for (std::size_t index=0; index<reboot_hist2.len(); index++)
    {
        if(reboot_hist2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(reboot_count.yfilter)
	|| ydk::is_set(rh_count.yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (reboot_count.is_set || is_set(reboot_count.yfilter)) leaf_name_data.push_back(reboot_count.get_name_leafdata());
    if (rh_count.is_set || is_set(rh_count.yfilter)) leaf_name_data.push_back(rh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reboot_hist2")
    {
        auto c = std::make_shared<SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2>();
        c->parent = this;
        reboot_hist2.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : reboot_hist2.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reboot_count")
    {
        reboot_count = value;
        reboot_count.value_namespace = name_space;
        reboot_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rh_count")
    {
        rh_count = value;
        rh_count.value_namespace = name_space;
        rh_count.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "reboot_count")
    {
        reboot_count.yfilter = yfilter;
    }
    if(value_path == "rh_count")
    {
        rh_count.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reboot_hist2" || name == "node-location" || name == "reboot_count" || name == "rh_count")
        return true;
    return false;
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::RebootHist2()
    :
    count{YType::uint32, "count"},
    time{YType::str, "Time"},
    reason{YType::str, "Reason"}
{

    yang_name = "reboot_hist2"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::~RebootHist2()
{
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::has_data() const
{
    if (is_presence_container) return true;
    return count.is_set
	|| time.is_set
	|| reason.is_set;
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reboot_hist2";
    ADD_KEY_TOKEN(count, "count");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "Time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "Reason")
    {
        reason.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::RebootHistory::DefaultDisp::Location::RebootHist2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "Time" || name == "Reason")
        return true;
    return false;
}

SdrConfig::Sdr::Nodes::Nodes()
    :
    location(this, {"node_location"})
{

    yang_name = "nodes"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Nodes::~Nodes()
{
}

bool SdrConfig::Sdr::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool SdrConfig::Sdr::Nodes::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrConfig::Sdr::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Nodes::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrConfig::Sdr::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrConfig::Sdr::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

SdrConfig::Sdr::Nodes::Location::Location()
    :
    node_location{YType::str, "node-location"},
    sdr_id{YType::uint32, "sdr-id"},
    ip_addr{YType::str, "ip-addr"},
    mac_address{YType::str, "mac-address"},
    state{YType::str, "state"},
    start_time{YType::str, "start-time"},
    reload_reason{YType::str, "reload_reason"},
    reboot_count{YType::uint32, "reboot_count"},
    rh_count{YType::uint32, "rh_count"}
{

    yang_name = "location"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Nodes::Location::~Location()
{
}

bool SdrConfig::Sdr::Nodes::Location::has_data() const
{
    if (is_presence_container) return true;
    return node_location.is_set
	|| sdr_id.is_set
	|| ip_addr.is_set
	|| mac_address.is_set
	|| state.is_set
	|| start_time.is_set
	|| reload_reason.is_set
	|| reboot_count.is_set
	|| rh_count.is_set;
}

bool SdrConfig::Sdr::Nodes::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_location.yfilter)
	|| ydk::is_set(sdr_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(reload_reason.yfilter)
	|| ydk::is_set(reboot_count.yfilter)
	|| ydk::is_set(rh_count.yfilter);
}

std::string SdrConfig::Sdr::Nodes::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(node_location, "node-location");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Nodes::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_location.is_set || is_set(node_location.yfilter)) leaf_name_data.push_back(node_location.get_name_leafdata());
    if (sdr_id.is_set || is_set(sdr_id.yfilter)) leaf_name_data.push_back(sdr_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (reload_reason.is_set || is_set(reload_reason.yfilter)) leaf_name_data.push_back(reload_reason.get_name_leafdata());
    if (reboot_count.is_set || is_set(reboot_count.yfilter)) leaf_name_data.push_back(reboot_count.get_name_leafdata());
    if (rh_count.is_set || is_set(rh_count.yfilter)) leaf_name_data.push_back(rh_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Nodes::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Nodes::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Nodes::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-location")
    {
        node_location = value;
        node_location.value_namespace = name_space;
        node_location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdr-id")
    {
        sdr_id = value;
        sdr_id.value_namespace = name_space;
        sdr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload_reason")
    {
        reload_reason = value;
        reload_reason.value_namespace = name_space;
        reload_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reboot_count")
    {
        reboot_count = value;
        reboot_count.value_namespace = name_space;
        reboot_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rh_count")
    {
        rh_count = value;
        rh_count.value_namespace = name_space;
        rh_count.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Nodes::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-location")
    {
        node_location.yfilter = yfilter;
    }
    if(value_path == "sdr-id")
    {
        sdr_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "reload_reason")
    {
        reload_reason.yfilter = yfilter;
    }
    if(value_path == "reboot_count")
    {
        reboot_count.yfilter = yfilter;
    }
    if(value_path == "rh_count")
    {
        rh_count.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Nodes::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-location" || name == "sdr-id" || name == "ip-addr" || name == "mac-address" || name == "state" || name == "start-time" || name == "reload_reason" || name == "reboot_count" || name == "rh_count")
        return true;
    return false;
}

SdrConfig::Sdr::Pairing2::Pairing2()
    :
    pairing_mode{YType::str, "pairing-mode"}
        ,
    sdrlead(std::make_shared<SdrConfig::Sdr::Pairing2::Sdrlead>())
    , pairing(this, {"name"})
{
    sdrlead->parent = this;

    yang_name = "pairing2"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Pairing2::~Pairing2()
{
}

bool SdrConfig::Sdr::Pairing2::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_data())
            return true;
    }
    return pairing_mode.is_set
	|| (sdrlead !=  nullptr && sdrlead->has_data());
}

bool SdrConfig::Sdr::Pairing2::has_operation() const
{
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pairing_mode.yfilter)
	|| (sdrlead !=  nullptr && sdrlead->has_operation());
}

std::string SdrConfig::Sdr::Pairing2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pairing2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Pairing2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pairing_mode.is_set || is_set(pairing_mode.yfilter)) leaf_name_data.push_back(pairing_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Pairing2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdrlead")
    {
        if(sdrlead == nullptr)
        {
            sdrlead = std::make_shared<SdrConfig::Sdr::Pairing2::Sdrlead>();
        }
        return sdrlead;
    }

    if(child_yang_name == "pairing")
    {
        auto c = std::make_shared<SdrConfig::Sdr::Pairing2::Pairing>();
        c->parent = this;
        pairing.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Pairing2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sdrlead != nullptr)
    {
        children["sdrlead"] = sdrlead;
    }

    count = 0;
    for (auto c : pairing.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrConfig::Sdr::Pairing2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pairing-mode")
    {
        pairing_mode = value;
        pairing_mode.value_namespace = name_space;
        pairing_mode.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Pairing2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pairing-mode")
    {
        pairing_mode.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Pairing2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdrlead" || name == "pairing" || name == "pairing-mode")
        return true;
    return false;
}

SdrConfig::Sdr::Pairing2::Sdrlead::Sdrlead()
    :
    rp1{YType::str, "rp1"},
    rp2{YType::str, "rp2"}
{

    yang_name = "sdrlead"; yang_parent_name = "pairing2"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Pairing2::Sdrlead::~Sdrlead()
{
}

bool SdrConfig::Sdr::Pairing2::Sdrlead::has_data() const
{
    if (is_presence_container) return true;
    return rp1.is_set
	|| rp2.is_set;
}

bool SdrConfig::Sdr::Pairing2::Sdrlead::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp1.yfilter)
	|| ydk::is_set(rp2.yfilter);
}

std::string SdrConfig::Sdr::Pairing2::Sdrlead::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdrlead";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Pairing2::Sdrlead::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp1.is_set || is_set(rp1.yfilter)) leaf_name_data.push_back(rp1.get_name_leafdata());
    if (rp2.is_set || is_set(rp2.yfilter)) leaf_name_data.push_back(rp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Pairing2::Sdrlead::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Pairing2::Sdrlead::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Pairing2::Sdrlead::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp1")
    {
        rp1 = value;
        rp1.value_namespace = name_space;
        rp1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp2")
    {
        rp2 = value;
        rp2.value_namespace = name_space;
        rp2.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Pairing2::Sdrlead::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp1")
    {
        rp1.yfilter = yfilter;
    }
    if(value_path == "rp2")
    {
        rp2.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Pairing2::Sdrlead::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp1" || name == "rp2")
        return true;
    return false;
}

SdrConfig::Sdr::Pairing2::Pairing::Pairing()
    :
    name{YType::str, "name"},
    rp1{YType::str, "rp1"},
    rp2{YType::str, "rp2"}
{

    yang_name = "pairing"; yang_parent_name = "pairing2"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Pairing2::Pairing::~Pairing()
{
}

bool SdrConfig::Sdr::Pairing2::Pairing::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rp1.is_set
	|| rp2.is_set;
}

bool SdrConfig::Sdr::Pairing2::Pairing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rp1.yfilter)
	|| ydk::is_set(rp2.yfilter);
}

std::string SdrConfig::Sdr::Pairing2::Pairing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pairing";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Pairing2::Pairing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rp1.is_set || is_set(rp1.yfilter)) leaf_name_data.push_back(rp1.get_name_leafdata());
    if (rp2.is_set || is_set(rp2.yfilter)) leaf_name_data.push_back(rp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Pairing2::Pairing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Pairing2::Pairing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Pairing2::Pairing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp1")
    {
        rp1 = value;
        rp1.value_namespace = name_space;
        rp1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp2")
    {
        rp2 = value;
        rp2.value_namespace = name_space;
        rp2.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Pairing2::Pairing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rp1")
    {
        rp1.yfilter = yfilter;
    }
    if(value_path == "rp2")
    {
        rp2.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Pairing2::Pairing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rp1" || name == "rp2")
        return true;
    return false;
}

SdrConfig::Sdr::Pairing::Pairing()
    :
    name{YType::str, "name"},
    rp1{YType::str, "rp1"},
    rp2{YType::str, "rp2"}
{

    yang_name = "pairing"; yang_parent_name = "sdr"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrConfig::Sdr::Pairing::~Pairing()
{
}

bool SdrConfig::Sdr::Pairing::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| rp1.is_set
	|| rp2.is_set;
}

bool SdrConfig::Sdr::Pairing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(rp1.yfilter)
	|| ydk::is_set(rp2.yfilter);
}

std::string SdrConfig::Sdr::Pairing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pairing";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrConfig::Sdr::Pairing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (rp1.is_set || is_set(rp1.yfilter)) leaf_name_data.push_back(rp1.get_name_leafdata());
    if (rp2.is_set || is_set(rp2.yfilter)) leaf_name_data.push_back(rp2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrConfig::Sdr::Pairing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrConfig::Sdr::Pairing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrConfig::Sdr::Pairing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp1")
    {
        rp1 = value;
        rp1.value_namespace = name_space;
        rp1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp2")
    {
        rp2 = value;
        rp2.value_namespace = name_space;
        rp2.value_namespace_prefix = name_space_prefix;
    }
}

void SdrConfig::Sdr::Pairing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "rp1")
    {
        rp1.yfilter = yfilter;
    }
    if(value_path == "rp2")
    {
        rp2.yfilter = yfilter;
    }
}

bool SdrConfig::Sdr::Pairing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "rp1" || name == "rp2")
        return true;
    return false;
}

SdrManager::SdrManager()
    :
    sdr_mgr(std::make_shared<SdrManager::SdrMgr>())
{
    sdr_mgr->parent = this;

    yang_name = "sdr-manager"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sdr-mgr"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrManager::~SdrManager()
{
}

bool SdrManager::has_data() const
{
    if (is_presence_container) return true;
    return (sdr_mgr !=  nullptr && sdr_mgr->has_data());
}

bool SdrManager::has_operation() const
{
    return is_set(yfilter)
	|| (sdr_mgr !=  nullptr && sdr_mgr->has_operation());
}

std::string SdrManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:sdr-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr_mgr")
    {
        if(sdr_mgr == nullptr)
        {
            sdr_mgr = std::make_shared<SdrManager::SdrMgr>();
        }
        return sdr_mgr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sdr_mgr != nullptr)
    {
        children["sdr_mgr"] = sdr_mgr;
    }

    return children;
}

void SdrManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrManager::clone_ptr() const
{
    return std::make_shared<SdrManager>();
}

std::string SdrManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr_mgr")
        return true;
    return false;
}

SdrManager::SdrMgr::SdrMgr()
    :
    trace(this, {"buffer"})
{

    yang_name = "sdr_mgr"; yang_parent_name = "sdr-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrManager::SdrMgr::~SdrMgr()
{
}

bool SdrManager::SdrMgr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool SdrManager::SdrMgr::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrManager::SdrMgr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:sdr-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrManager::SdrMgr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr_mgr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::SdrMgr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::SdrMgr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto c = std::make_shared<SdrManager::SdrMgr::Trace>();
        c->parent = this;
        trace.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::SdrMgr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrManager::SdrMgr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrManager::SdrMgr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrManager::SdrMgr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

SdrManager::SdrMgr::Trace::Trace()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "sdr_mgr"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrManager::SdrMgr::Trace::~Trace()
{
}

bool SdrManager::SdrMgr::Trace::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool SdrManager::SdrMgr::Trace::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string SdrManager::SdrMgr::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:sdr-manager/sdr_mgr/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrManager::SdrMgr::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::SdrMgr::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::SdrMgr::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto c = std::make_shared<SdrManager::SdrMgr::Trace::Location>();
        c->parent = this;
        location.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::SdrMgr::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : location.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrManager::SdrMgr::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void SdrManager::SdrMgr::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool SdrManager::SdrMgr::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

SdrManager::SdrMgr::Trace::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrManager::SdrMgr::Trace::Location::~Location()
{
}

bool SdrManager::SdrMgr::Trace::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool SdrManager::SdrMgr::Trace::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string SdrManager::SdrMgr::Trace::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::SdrMgr::Trace::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::SdrMgr::Trace::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto c = std::make_shared<SdrManager::SdrMgr::Trace::Location::AllOptions>();
        c->parent = this;
        all_options.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::SdrMgr::Trace::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : all_options.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrManager::SdrMgr::Trace::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void SdrManager::SdrMgr::Trace::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool SdrManager::SdrMgr::Trace::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

SdrManager::SdrMgr::Trace::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrManager::SdrMgr::Trace::Location::AllOptions::~AllOptions()
{
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string SdrManager::SdrMgr::Trace::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::SdrMgr::Trace::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::SdrMgr::Trace::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto c = std::make_shared<SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks>();
        c->parent = this;
        trace_blocks.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::SdrMgr::Trace::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trace_blocks.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrManager::SdrMgr::Trace::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void SdrManager::SdrMgr::Trace::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool SdrManager::SdrMgr::Trace::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

PrivateSdr::PrivateSdr()
    :
    sdr_name(this, {"name"})
{

    yang_name = "private-sdr"; yang_parent_name = "Cisco-IOS-XR-sysadmin-sdr-mgr"; is_top_level_class = true; has_list_ancestor = false; 
}

PrivateSdr::~PrivateSdr()
{
}

bool PrivateSdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sdr_name.len(); index++)
    {
        if(sdr_name[index]->has_data())
            return true;
    }
    return false;
}

bool PrivateSdr::has_operation() const
{
    for (std::size_t index=0; index<sdr_name.len(); index++)
    {
        if(sdr_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PrivateSdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:private-sdr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PrivateSdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PrivateSdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sdr-name")
    {
        auto c = std::make_shared<PrivateSdr::SdrName>();
        c->parent = this;
        sdr_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PrivateSdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sdr_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PrivateSdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PrivateSdr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PrivateSdr::clone_ptr() const
{
    return std::make_shared<PrivateSdr>();
}

std::string PrivateSdr::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PrivateSdr::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PrivateSdr::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PrivateSdr::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PrivateSdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sdr-name")
        return true;
    return false;
}

PrivateSdr::SdrName::SdrName()
    :
    name{YType::str, "name"},
    id{YType::uint32, "id"},
    lead_rack0{YType::uint32, "lead_rack0"},
    lead_rack1{YType::uint32, "lead_rack1"}
        ,
    pairing(this, {"num"})
{

    yang_name = "sdr-name"; yang_parent_name = "private-sdr"; is_top_level_class = false; has_list_ancestor = false; 
}

PrivateSdr::SdrName::~SdrName()
{
}

bool PrivateSdr::SdrName::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_data())
            return true;
    }
    return name.is_set
	|| id.is_set
	|| lead_rack0.is_set
	|| lead_rack1.is_set;
}

bool PrivateSdr::SdrName::has_operation() const
{
    for (std::size_t index=0; index<pairing.len(); index++)
    {
        if(pairing[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(lead_rack0.yfilter)
	|| ydk::is_set(lead_rack1.yfilter);
}

std::string PrivateSdr::SdrName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-sdr-mgr:private-sdr/" << get_segment_path();
    return path_buffer.str();
}

std::string PrivateSdr::SdrName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sdr-name";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PrivateSdr::SdrName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (lead_rack0.is_set || is_set(lead_rack0.yfilter)) leaf_name_data.push_back(lead_rack0.get_name_leafdata());
    if (lead_rack1.is_set || is_set(lead_rack1.yfilter)) leaf_name_data.push_back(lead_rack1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PrivateSdr::SdrName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pairing")
    {
        auto c = std::make_shared<PrivateSdr::SdrName::Pairing>();
        c->parent = this;
        pairing.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PrivateSdr::SdrName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pairing.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PrivateSdr::SdrName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lead_rack0")
    {
        lead_rack0 = value;
        lead_rack0.value_namespace = name_space;
        lead_rack0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lead_rack1")
    {
        lead_rack1 = value;
        lead_rack1.value_namespace = name_space;
        lead_rack1.value_namespace_prefix = name_space_prefix;
    }
}

void PrivateSdr::SdrName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "lead_rack0")
    {
        lead_rack0.yfilter = yfilter;
    }
    if(value_path == "lead_rack1")
    {
        lead_rack1.yfilter = yfilter;
    }
}

bool PrivateSdr::SdrName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pairing" || name == "name" || name == "id" || name == "lead_rack0" || name == "lead_rack1")
        return true;
    return false;
}

PrivateSdr::SdrName::Pairing::Pairing()
    :
    num{YType::uint32, "num"},
    second_exist{YType::boolean, "second_exist"},
    rp1_rack{YType::uint32, "rp1_rack"},
    rp1_slot{YType::uint32, "rp1_slot"},
    rp2_rack{YType::uint32, "rp2_rack"},
    rp2_slot{YType::uint32, "rp2_slot"}
{

    yang_name = "pairing"; yang_parent_name = "sdr-name"; is_top_level_class = false; has_list_ancestor = true; 
}

PrivateSdr::SdrName::Pairing::~Pairing()
{
}

bool PrivateSdr::SdrName::Pairing::has_data() const
{
    if (is_presence_container) return true;
    return num.is_set
	|| second_exist.is_set
	|| rp1_rack.is_set
	|| rp1_slot.is_set
	|| rp2_rack.is_set
	|| rp2_slot.is_set;
}

bool PrivateSdr::SdrName::Pairing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num.yfilter)
	|| ydk::is_set(second_exist.yfilter)
	|| ydk::is_set(rp1_rack.yfilter)
	|| ydk::is_set(rp1_slot.yfilter)
	|| ydk::is_set(rp2_rack.yfilter)
	|| ydk::is_set(rp2_slot.yfilter);
}

std::string PrivateSdr::SdrName::Pairing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pairing";
    ADD_KEY_TOKEN(num, "num");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PrivateSdr::SdrName::Pairing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());
    if (second_exist.is_set || is_set(second_exist.yfilter)) leaf_name_data.push_back(second_exist.get_name_leafdata());
    if (rp1_rack.is_set || is_set(rp1_rack.yfilter)) leaf_name_data.push_back(rp1_rack.get_name_leafdata());
    if (rp1_slot.is_set || is_set(rp1_slot.yfilter)) leaf_name_data.push_back(rp1_slot.get_name_leafdata());
    if (rp2_rack.is_set || is_set(rp2_rack.yfilter)) leaf_name_data.push_back(rp2_rack.get_name_leafdata());
    if (rp2_slot.is_set || is_set(rp2_slot.yfilter)) leaf_name_data.push_back(rp2_slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PrivateSdr::SdrName::Pairing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PrivateSdr::SdrName::Pairing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PrivateSdr::SdrName::Pairing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second_exist")
    {
        second_exist = value;
        second_exist.value_namespace = name_space;
        second_exist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp1_rack")
    {
        rp1_rack = value;
        rp1_rack.value_namespace = name_space;
        rp1_rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp1_slot")
    {
        rp1_slot = value;
        rp1_slot.value_namespace = name_space;
        rp1_slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp2_rack")
    {
        rp2_rack = value;
        rp2_rack.value_namespace = name_space;
        rp2_rack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp2_slot")
    {
        rp2_slot = value;
        rp2_slot.value_namespace = name_space;
        rp2_slot.value_namespace_prefix = name_space_prefix;
    }
}

void PrivateSdr::SdrName::Pairing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
    if(value_path == "second_exist")
    {
        second_exist.yfilter = yfilter;
    }
    if(value_path == "rp1_rack")
    {
        rp1_rack.yfilter = yfilter;
    }
    if(value_path == "rp1_slot")
    {
        rp1_slot.yfilter = yfilter;
    }
    if(value_path == "rp2_rack")
    {
        rp2_rack.yfilter = yfilter;
    }
    if(value_path == "rp2_slot")
    {
        rp2_slot.yfilter = yfilter;
    }
}

bool PrivateSdr::SdrName::Pairing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num" || name == "second_exist" || name == "rp1_rack" || name == "rp1_slot" || name == "rp2_rack" || name == "rp2_slot")
        return true;
    return false;
}

const Enum::YLeaf VmReloadReason::CARD_OFFLINE {0, "CARD_OFFLINE"};
const Enum::YLeaf VmReloadReason::CARD_SHUTDOWN {1, "CARD_SHUTDOWN"};
const Enum::YLeaf VmReloadReason::ALL_VM_RELOAD {2, "ALL_VM_RELOAD"};
const Enum::YLeaf VmReloadReason::VM_REQUESTED_GRACEFUL_RELOAD {3, "VM_REQUESTED_GRACEFUL_RELOAD"};
const Enum::YLeaf VmReloadReason::VM_REQUESTED_UNGRACEFUL_RELOAD {4, "VM_REQUESTED_UNGRACEFUL_RELOAD"};
const Enum::YLeaf VmReloadReason::SDR_CLI_REQUESTED {5, "SDR_CLI_REQUESTED"};
const Enum::YLeaf VmReloadReason::SDR_VCPU_VMEM_CHANGED {6, "SDR_VCPU_VMEM_CHANGED"};
const Enum::YLeaf VmReloadReason::SDR_HEARTBEAT_FAILURE {7, "SDR_HEARTBEAT_FAILURE"};
const Enum::YLeaf VmReloadReason::FIRST_BOOT {8, "FIRST_BOOT"};
const Enum::YLeaf VmReloadReason::SMU {9, "SMU"};
const Enum::YLeaf VmReloadReason::REASON_UNKNOWN {10, "REASON_UNKNOWN"};

const Enum::YLeaf CardType::RP {0, "RP"};
const Enum::YLeaf CardType::LC {1, "LC"};
const Enum::YLeaf CardType::CC {2, "CC"};

const Enum::YLeaf SdrConfig::Sdr::PairingMode::intra_rack {0, "intra-rack"};
const Enum::YLeaf SdrConfig::Sdr::PairingMode::inter_rack {1, "inter-rack"};

const Enum::YLeaf SdrConfig::Sdr::Issu::disable {0, "disable"};


}
}

