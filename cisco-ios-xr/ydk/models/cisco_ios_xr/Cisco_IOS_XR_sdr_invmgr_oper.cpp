
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sdr_invmgr_oper {

SdrInventory::SdrInventory()
    :
    racks(std::make_shared<SdrInventory::Racks>())
{
    racks->parent = this;

    yang_name = "sdr-inventory"; yang_parent_name = "Cisco-IOS-XR-sdr-invmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SdrInventory::~SdrInventory()
{
}

bool SdrInventory::has_data() const
{
    if (is_presence_container) return true;
    return (racks !=  nullptr && racks->has_data());
}

bool SdrInventory::has_operation() const
{
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string SdrInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<SdrInventory::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void SdrInventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> SdrInventory::clone_ptr() const
{
    return std::make_shared<SdrInventory>();
}

std::string SdrInventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SdrInventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SdrInventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SdrInventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SdrInventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

SdrInventory::Racks::Racks()
    :
    rack(this, {"name"})
{

    yang_name = "racks"; yang_parent_name = "sdr-inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrInventory::Racks::~Racks()
{
}

bool SdrInventory::Racks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SdrInventory::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrInventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<SdrInventory::Racks::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rack.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventory::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SdrInventory::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SdrInventory::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

SdrInventory::Racks::Rack::Rack()
    :
    name{YType::str, "name"}
        ,
    slot(this, {"name"})
{

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false; 
}

SdrInventory::Racks::Rack::~Rack()
{
}

bool SdrInventory::Racks::Rack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool SdrInventory::Racks::Rack::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string SdrInventory::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string SdrInventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto c = std::make_shared<SdrInventory::Racks::Rack::Slot>();
        c->parent = this;
        slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventory::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool SdrInventory::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "name")
        return true;
    return false;
}

SdrInventory::Racks::Rack::Slot::Slot()
    :
    name{YType::str, "name"}
        ,
    card(this, {"name"})
{

    yang_name = "slot"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventory::Racks::Rack::Slot::~Slot()
{
}

bool SdrInventory::Racks::Rack::Slot::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card.len(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool SdrInventory::Racks::Rack::Slot::has_operation() const
{
    for (std::size_t index=0; index<card.len(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string SdrInventory::Racks::Rack::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::Racks::Rack::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::Racks::Rack::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        auto c = std::make_shared<SdrInventory::Racks::Rack::Slot::Card>();
        c->parent = this;
        card.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::Racks::Rack::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : card.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void SdrInventory::Racks::Rack::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::Racks::Rack::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool SdrInventory::Racks::Rack::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card" || name == "name")
        return true;
    return false;
}

SdrInventory::Racks::Rack::Slot::Card::Card()
    :
    name{YType::str, "name"}
        ,
    attributes(std::make_shared<SdrInventory::Racks::Rack::Slot::Card::Attributes>())
{
    attributes->parent = this;

    yang_name = "card"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventory::Racks::Rack::Slot::Card::~Card()
{
}

bool SdrInventory::Racks::Rack::Slot::Card::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool SdrInventory::Racks::Rack::Slot::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string SdrInventory::Racks::Rack::Slot::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::Racks::Rack::Slot::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::Racks::Rack::Slot::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<SdrInventory::Racks::Rack::Slot::Card::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::Racks::Rack::Slot::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void SdrInventory::Racks::Rack::Slot::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::Racks::Rack::Slot::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool SdrInventory::Racks::Rack::Slot::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes" || name == "name")
        return true;
    return false;
}

SdrInventory::Racks::Rack::Slot::Card::Attributes::Attributes()
    :
    config_state_string{YType::str, "config-state-string"},
    power{YType::uint32, "power"},
    config_state{YType::uint32, "config-state"},
    card_state{YType::uint32, "card-state"},
    vm_state{YType::uint32, "vm-state"},
    card_admin_state{YType::uint32, "card-admin-state"},
    card_type{YType::uint32, "card-type"},
    card_type_string{YType::str, "card-type-string"},
    node_name_string{YType::str, "node-name-string"},
    pi_slot_number{YType::uint32, "pi-slot-number"},
    shutdown{YType::uint32, "shutdown"},
    ctype{YType::uint32, "ctype"},
    card_state_string{YType::str, "card-state-string"},
    monitor{YType::uint32, "monitor"}
{

    yang_name = "attributes"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

SdrInventory::Racks::Rack::Slot::Card::Attributes::~Attributes()
{
}

bool SdrInventory::Racks::Rack::Slot::Card::Attributes::has_data() const
{
    if (is_presence_container) return true;
    return config_state_string.is_set
	|| power.is_set
	|| config_state.is_set
	|| card_state.is_set
	|| vm_state.is_set
	|| card_admin_state.is_set
	|| card_type.is_set
	|| card_type_string.is_set
	|| node_name_string.is_set
	|| pi_slot_number.is_set
	|| shutdown.is_set
	|| ctype.is_set
	|| card_state_string.is_set
	|| monitor.is_set;
}

bool SdrInventory::Racks::Rack::Slot::Card::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(config_state_string.yfilter)
	|| ydk::is_set(power.yfilter)
	|| ydk::is_set(config_state.yfilter)
	|| ydk::is_set(card_state.yfilter)
	|| ydk::is_set(vm_state.yfilter)
	|| ydk::is_set(card_admin_state.yfilter)
	|| ydk::is_set(card_type.yfilter)
	|| ydk::is_set(card_type_string.yfilter)
	|| ydk::is_set(node_name_string.yfilter)
	|| ydk::is_set(pi_slot_number.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(card_state_string.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string SdrInventory::Racks::Rack::Slot::Card::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SdrInventory::Racks::Rack::Slot::Card::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_state_string.is_set || is_set(config_state_string.yfilter)) leaf_name_data.push_back(config_state_string.get_name_leafdata());
    if (power.is_set || is_set(power.yfilter)) leaf_name_data.push_back(power.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.yfilter)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (vm_state.is_set || is_set(vm_state.yfilter)) leaf_name_data.push_back(vm_state.get_name_leafdata());
    if (card_admin_state.is_set || is_set(card_admin_state.yfilter)) leaf_name_data.push_back(card_admin_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.yfilter)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (card_type_string.is_set || is_set(card_type_string.yfilter)) leaf_name_data.push_back(card_type_string.get_name_leafdata());
    if (node_name_string.is_set || is_set(node_name_string.yfilter)) leaf_name_data.push_back(node_name_string.get_name_leafdata());
    if (pi_slot_number.is_set || is_set(pi_slot_number.yfilter)) leaf_name_data.push_back(pi_slot_number.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (card_state_string.is_set || is_set(card_state_string.yfilter)) leaf_name_data.push_back(card_state_string.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> SdrInventory::Racks::Rack::Slot::Card::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> SdrInventory::Racks::Rack::Slot::Card::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void SdrInventory::Racks::Rack::Slot::Card::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "config-state-string")
    {
        config_state_string = value;
        config_state_string.value_namespace = name_space;
        config_state_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power")
    {
        power = value;
        power.value_namespace = name_space;
        power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-state")
    {
        card_state = value;
        card_state.value_namespace = name_space;
        card_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vm-state")
    {
        vm_state = value;
        vm_state.value_namespace = name_space;
        vm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-admin-state")
    {
        card_admin_state = value;
        card_admin_state.value_namespace = name_space;
        card_admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type")
    {
        card_type = value;
        card_type.value_namespace = name_space;
        card_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-type-string")
    {
        card_type_string = value;
        card_type_string.value_namespace = name_space;
        card_type_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name-string")
    {
        node_name_string = value;
        node_name_string.value_namespace = name_space;
        node_name_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pi-slot-number")
    {
        pi_slot_number = value;
        pi_slot_number.value_namespace = name_space;
        pi_slot_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-state-string")
    {
        card_state_string = value;
        card_state_string.value_namespace = name_space;
        card_state_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void SdrInventory::Racks::Rack::Slot::Card::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "config-state-string")
    {
        config_state_string.yfilter = yfilter;
    }
    if(value_path == "power")
    {
        power.yfilter = yfilter;
    }
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
    if(value_path == "card-state")
    {
        card_state.yfilter = yfilter;
    }
    if(value_path == "vm-state")
    {
        vm_state.yfilter = yfilter;
    }
    if(value_path == "card-admin-state")
    {
        card_admin_state.yfilter = yfilter;
    }
    if(value_path == "card-type")
    {
        card_type.yfilter = yfilter;
    }
    if(value_path == "card-type-string")
    {
        card_type_string.yfilter = yfilter;
    }
    if(value_path == "node-name-string")
    {
        node_name_string.yfilter = yfilter;
    }
    if(value_path == "pi-slot-number")
    {
        pi_slot_number.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "card-state-string")
    {
        card_state_string.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool SdrInventory::Racks::Rack::Slot::Card::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-state-string" || name == "power" || name == "config-state" || name == "card-state" || name == "vm-state" || name == "card-admin-state" || name == "card-type" || name == "card-type-string" || name == "node-name-string" || name == "pi-slot-number" || name == "shutdown" || name == "ctype" || name == "card-state-string" || name == "monitor")
        return true;
    return false;
}


}
}

