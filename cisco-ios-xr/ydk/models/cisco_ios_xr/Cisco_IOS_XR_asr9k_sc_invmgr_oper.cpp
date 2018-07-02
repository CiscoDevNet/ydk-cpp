
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_sc_invmgr_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_oper {

Inventory::Inventory()
    :
    racks(std::make_shared<Inventory::Racks>())
{
    racks->parent = this;

    yang_name = "inventory"; yang_parent_name = "Cisco-IOS-XR-asr9k-sc-invmgr-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Inventory::~Inventory()
{
}

bool Inventory::has_data() const
{
    if (is_presence_container) return true;
    return (racks !=  nullptr && racks->has_data());
}

bool Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "racks")
    {
        if(racks == nullptr)
        {
            racks = std::make_shared<Inventory::Racks>();
        }
        return racks;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Inventory::clone_ptr() const
{
    return std::make_shared<Inventory>();
}

std::string Inventory::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Inventory::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Inventory::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Inventory::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "racks")
        return true;
    return false;
}

Inventory::Racks::Racks()
    :
    rack(this, {"number"})
{

    yang_name = "racks"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Racks::~Racks()
{
}

bool Inventory::Racks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.len(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        auto c = std::make_shared<Inventory::Racks::Rack>();
        c->parent = this;
        rack.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::get_children() const
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

void Inventory::Racks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rack")
        return true;
    return false;
}

Inventory::Racks::Rack::Rack()
    :
    number{YType::uint32, "number"}
        ,
    slots(std::make_shared<Inventory::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks"; is_top_level_class = false; has_list_ancestor = false; 
}

Inventory::Racks::Rack::~Rack()
{
}

bool Inventory::Racks::Rack::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Inventory::Racks::Rack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Inventory::Racks::Rack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory/racks/" << get_segment_path();
    return path_buffer.str();
}

std::string Inventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slots")
    {
        if(slots == nullptr)
        {
            slots = std::make_shared<Inventory::Racks::Rack::Slots>();
        }
        return slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void Inventory::Racks::Rack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slots" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slots()
    :
    slot(this, {"number"})
{

    yang_name = "slots"; yang_parent_name = "rack"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::~Slots()
{
}

bool Inventory::Racks::Rack::Slots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::get_children() const
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

void Inventory::Racks::Rack::Slots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Slot()
    :
    number{YType::uint32, "number"}
        ,
    cards(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>())
{
    cards->parent = this;
    basic_attributes->parent = this;

    yang_name = "slot"; yang_parent_name = "slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (cards !=  nullptr && cards->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (cards !=  nullptr && cards->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cards")
    {
        if(cards == nullptr)
        {
            cards = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards>();
        }
        return cards;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cards != nullptr)
    {
        children["cards"] = cards;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cards" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Cards()
    :
    card(this, {"number"})
{

    yang_name = "cards"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::~Cards()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<card.len(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_operation() const
{
    for (std::size_t index=0; index<card.len(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card>();
        c->parent = this;
        card.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::get_children() const
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

void Inventory::Racks::Rack::Slots::Slot::Cards::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Card()
    :
    number{YType::uint32, "number"}
        ,
    sub_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>())
    , hw_components(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>())
    , sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>())
    , port_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>())
{
    sub_slots->parent = this;
    hw_components->parent = this;
    sensors->parent = this;
    port_slots->parent = this;
    basic_attributes->parent = this;

    yang_name = "card"; yang_parent_name = "cards"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::~Card()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (sub_slots !=  nullptr && sub_slots->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (sensors !=  nullptr && sensors->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sub_slots !=  nullptr && sub_slots->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-slots")
    {
        if(sub_slots == nullptr)
        {
            sub_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>();
        }
        return sub_slots;
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components == nullptr)
        {
            hw_components = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>();
        }
        return hw_components;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sub_slots != nullptr)
    {
        children["sub-slots"] = sub_slots;
    }

    if(hw_components != nullptr)
    {
        children["hw-components"] = hw_components;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    if(port_slots != nullptr)
    {
        children["port-slots"] = port_slots;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-slots" || name == "hw-components" || name == "sensors" || name == "port-slots" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlots()
    :
    sub_slot(this, {"number"})
{

    yang_name = "sub-slots"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::~SubSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sub_slot.len(); index++)
    {
        if(sub_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_operation() const
{
    for (std::size_t index=0; index<sub_slot.len(); index++)
    {
        if(sub_slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-slot")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot>();
        c->parent = this;
        sub_slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sub_slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-slot")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::SubSlot()
    :
    number{YType::uint32, "number"}
        ,
    module(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>())
{
    module->parent = this;
    basic_attributes->parent = this;

    yang_name = "sub-slot"; yang_parent_name = "sub-slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::~SubSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (module !=  nullptr && module->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (module !=  nullptr && module->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slot";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        if(module == nullptr)
        {
            module = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>();
        }
        return module;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(module != nullptr)
    {
        children["module"] = module;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Module()
    :
    sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>())
    , port_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>())
{
    sensors->parent = this;
    port_slots->parent = this;
    basic_attributes->parent = this;

    yang_name = "module"; yang_parent_name = "sub-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::~Module()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_data() const
{
    if (is_presence_container) return true;
    return (sensors !=  nullptr && sensors->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_operation() const
{
    return is_set(yfilter)
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    if(port_slots != nullptr)
    {
        children["port-slots"] = port_slots;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensors" || name == "port-slots" || name == "basic-attributes")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensors()
    :
    sensor(this, {"number"})
{

    yang_name = "sensors"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor>();
        c->parent = this;
        sensor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Sensor()
    :
    number{YType::uint32, "number"}
        ,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlots()
    :
    port_slot(this, {"number"})
{

    yang_name = "port-slots"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_slot.len(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.len(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-slot")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-slot")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::PortSlot()
    :
    number{YType::uint32, "number"}
        ,
    port(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>())
{
    port->parent = this;
    basic_attributes->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (port !=  nullptr && port->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>();
        }
        return port;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "port"; yang_parent_name = "port-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_data() const
{
    if (is_presence_container) return true;
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(yfilter)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-attributes")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sub-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponents()
    :
    hw_component(this, {"number"})
{

    yang_name = "hw-components"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::~HwComponents()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hw_component.len(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.len(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-component")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hw_component.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-component")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    number{YType::uint32, "number"}
        ,
    sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>())
{
    sensors->parent = this;
    basic_attributes->parent = this;

    yang_name = "hw-component"; yang_parent_name = "hw-components"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::~HwComponent()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (sensors !=  nullptr && sensors->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensors" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensors()
    :
    sensor(this, {"number"})
{

    yang_name = "sensors"; yang_parent_name = "hw-component"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    number{YType::uint32, "number"}
        ,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "hw-component"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensors()
    :
    sensor(this, {"number"})
{

    yang_name = "sensors"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.len(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        c->parent = this;
        sensor.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    number{YType::uint32, "number"}
        ,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlots()
    :
    port_slot(this, {"number"})
{

    yang_name = "port-slots"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_slot.len(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.len(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-slot")
    {
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : port_slot.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-slot")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::PortSlot()
    :
    number{YType::uint32, "number"}
        ,
    port(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>())
    , basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>())
{
    port->parent = this;
    basic_attributes->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (port !=  nullptr && port->has_data())
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (port !=  nullptr && port->has_operation())
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>();
        }
        return port;
    }

    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port != nullptr)
    {
        children["port"] = port;
    }

    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "basic-attributes" || name == "number")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "port"; yang_parent_name = "port-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_data() const
{
    if (is_presence_container) return true;
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(yfilter)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes>();
        }
        return basic_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-attributes")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port-slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "card"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo>())
    , fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;
    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "slot"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_data() const
{
    if (is_presence_container) return true;
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-info")
    {
        if(basic_info == nullptr)
        {
            basic_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo>();
        }
        return basic_info;
    }

    if(child_yang_name == "fru-info")
    {
        if(fru_info == nullptr)
        {
            fru_info = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo>();
        }
        return fru_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(basic_info != nullptr)
    {
        children["basic-info"] = basic_info;
    }

    if(fru_info != nullptr)
    {
        children["fru-info"] = fru_info;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "basic-info" || name == "fru-info")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::BasicInfo()
    :
    description{YType::str, "description"},
    vendor_type{YType::str, "vendor-type"},
    name{YType::str, "name"},
    hardware_revision{YType::str, "hardware-revision"},
    firmware_revision{YType::str, "firmware-revision"},
    software_revision{YType::str, "software-revision"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    serial_number{YType::str, "serial-number"},
    manufacturer_name{YType::str, "manufacturer-name"},
    model_name{YType::str, "model-name"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    composite_class_code{YType::int32, "composite-class-code"},
    memory_size{YType::int32, "memory-size"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    alias{YType::str, "alias"},
    group_flag{YType::boolean, "group-flag"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    redundancystate{YType::int32, "redundancystate"},
    ceport{YType::boolean, "ceport"},
    xr_scoped{YType::boolean, "xr-scoped"},
    unique_id{YType::int32, "unique-id"}
{

    yang_name = "basic-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_data() const
{
    if (is_presence_container) return true;
    return description.is_set
	|| vendor_type.is_set
	|| name.is_set
	|| hardware_revision.is_set
	|| firmware_revision.is_set
	|| software_revision.is_set
	|| chip_hardware_revision.is_set
	|| serial_number.is_set
	|| manufacturer_name.is_set
	|| model_name.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| composite_class_code.is_set
	|| memory_size.is_set
	|| environmental_monitor_path.is_set
	|| alias.is_set
	|| group_flag.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| unrecognized_fru.is_set
	|| redundancystate.is_set
	|| ceport.is_set
	|| xr_scoped.is_set
	|| unique_id.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(vendor_type.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(hardware_revision.yfilter)
	|| ydk::is_set(firmware_revision.yfilter)
	|| ydk::is_set(software_revision.yfilter)
	|| ydk::is_set(chip_hardware_revision.yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(manufacturer_name.yfilter)
	|| ydk::is_set(model_name.yfilter)
	|| ydk::is_set(asset_id_str.yfilter)
	|| ydk::is_set(asset_identification.yfilter)
	|| ydk::is_set(is_field_replaceable_unit.yfilter)
	|| ydk::is_set(manufacturer_asset_tags.yfilter)
	|| ydk::is_set(composite_class_code.yfilter)
	|| ydk::is_set(memory_size.yfilter)
	|| ydk::is_set(environmental_monitor_path.yfilter)
	|| ydk::is_set(alias.yfilter)
	|| ydk::is_set(group_flag.yfilter)
	|| ydk::is_set(new_deviation_number.yfilter)
	|| ydk::is_set(physical_layer_interface_module_type.yfilter)
	|| ydk::is_set(unrecognized_fru.yfilter)
	|| ydk::is_set(redundancystate.yfilter)
	|| ydk::is_set(ceport.yfilter)
	|| ydk::is_set(xr_scoped.yfilter)
	|| ydk::is_set(unique_id.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.yfilter)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.yfilter)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.yfilter)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.yfilter)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.yfilter)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.yfilter)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.yfilter)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.yfilter)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.yfilter)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.yfilter)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.yfilter)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.yfilter)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.yfilter)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.yfilter)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (alias.is_set || is_set(alias.yfilter)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.yfilter)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.yfilter)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.yfilter)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.yfilter)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.yfilter)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.yfilter)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.yfilter)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.yfilter)) leaf_name_data.push_back(unique_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
        vendor_type.value_namespace = name_space;
        vendor_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
        hardware_revision.value_namespace = name_space;
        hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
        firmware_revision.value_namespace = name_space;
        firmware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
        software_revision.value_namespace = name_space;
        software_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
        chip_hardware_revision.value_namespace = name_space;
        chip_hardware_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
        manufacturer_name.value_namespace = name_space;
        manufacturer_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model-name")
    {
        model_name = value;
        model_name.value_namespace = name_space;
        model_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
        asset_id_str.value_namespace = name_space;
        asset_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
        asset_identification.value_namespace = name_space;
        asset_identification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
        is_field_replaceable_unit.value_namespace = name_space;
        is_field_replaceable_unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
        manufacturer_asset_tags.value_namespace = name_space;
        manufacturer_asset_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
        composite_class_code.value_namespace = name_space;
        composite_class_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
        memory_size.value_namespace = name_space;
        memory_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
        environmental_monitor_path.value_namespace = name_space;
        environmental_monitor_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alias")
    {
        alias = value;
        alias.value_namespace = name_space;
        alias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
        group_flag.value_namespace = name_space;
        group_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
        new_deviation_number.value_namespace = name_space;
        new_deviation_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
        physical_layer_interface_module_type.value_namespace = name_space;
        physical_layer_interface_module_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
        unrecognized_fru.value_namespace = name_space;
        unrecognized_fru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
        redundancystate.value_namespace = name_space;
        redundancystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ceport")
    {
        ceport = value;
        ceport.value_namespace = name_space;
        ceport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
        xr_scoped.value_namespace = name_space;
        xr_scoped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
        unique_id.value_namespace = name_space;
        unique_id.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "vendor-type")
    {
        vendor_type.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision.yfilter = yfilter;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision.yfilter = yfilter;
    }
    if(value_path == "software-revision")
    {
        software_revision.yfilter = yfilter;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision.yfilter = yfilter;
    }
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name.yfilter = yfilter;
    }
    if(value_path == "model-name")
    {
        model_name.yfilter = yfilter;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str.yfilter = yfilter;
    }
    if(value_path == "asset-identification")
    {
        asset_identification.yfilter = yfilter;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit.yfilter = yfilter;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags.yfilter = yfilter;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code.yfilter = yfilter;
    }
    if(value_path == "memory-size")
    {
        memory_size.yfilter = yfilter;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path.yfilter = yfilter;
    }
    if(value_path == "alias")
    {
        alias.yfilter = yfilter;
    }
    if(value_path == "group-flag")
    {
        group_flag.yfilter = yfilter;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number.yfilter = yfilter;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type.yfilter = yfilter;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru.yfilter = yfilter;
    }
    if(value_path == "redundancystate")
    {
        redundancystate.yfilter = yfilter;
    }
    if(value_path == "ceport")
    {
        ceport.yfilter = yfilter;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped.yfilter = yfilter;
    }
    if(value_path == "unique-id")
    {
        unique_id.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "vendor-type" || name == "name" || name == "hardware-revision" || name == "firmware-revision" || name == "software-revision" || name == "chip-hardware-revision" || name == "serial-number" || name == "manufacturer-name" || name == "model-name" || name == "asset-id-str" || name == "asset-identification" || name == "is-field-replaceable-unit" || name == "manufacturer-asset-tags" || name == "composite-class-code" || name == "memory-size" || name == "environmental-monitor-path" || name == "alias" || name == "group-flag" || name == "new-deviation-number" || name == "physical-layer-interface-module-type" || name == "unrecognized-fru" || name == "redundancystate" || name == "ceport" || name == "xr-scoped" || name == "unique-id")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
        ,
    last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>())
    , card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>())
{
    last_operational_state_change->parent = this;
    card_up_time->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_data() const
{
    if (is_presence_container) return true;
    return card_administrative_state.is_set
	|| power_administrative_state.is_set
	|| card_operational_state.is_set
	|| card_monitor_state.is_set
	|| card_reset_reason.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data())
	|| (card_up_time !=  nullptr && card_up_time->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_administrative_state.yfilter)
	|| ydk::is_set(power_administrative_state.yfilter)
	|| ydk::is_set(card_operational_state.yfilter)
	|| ydk::is_set(card_monitor_state.yfilter)
	|| ydk::is_set(card_reset_reason.yfilter)
	|| ydk::is_set(power_current_measurement.yfilter)
	|| ydk::is_set(power_operational_state.yfilter)
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation())
	|| (card_up_time !=  nullptr && card_up_time->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.yfilter)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.yfilter)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.yfilter)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.yfilter)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.yfilter)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.yfilter)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.yfilter)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
        card_administrative_state.value_namespace = name_space;
        card_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
        power_administrative_state.value_namespace = name_space;
        power_administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
        card_operational_state.value_namespace = name_space;
        card_operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
        card_monitor_state.value_namespace = name_space;
        card_monitor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
        card_reset_reason.value_namespace = name_space;
        card_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
        power_current_measurement.value_namespace = name_space;
        power_current_measurement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
        power_operational_state.value_namespace = name_space;
        power_operational_state.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state.yfilter = yfilter;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state.yfilter = yfilter;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state.yfilter = yfilter;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state.yfilter = yfilter;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason.yfilter = yfilter;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement.yfilter = yfilter;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-operational-state-change" || name == "card-up-time" || name == "card-administrative-state" || name == "power-administrative-state" || name == "card-operational-state" || name == "card-monitor-state" || name == "card-reset-reason" || name == "power-current-measurement" || name == "power-operational-state")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_seconds{YType::int32, "time-in-seconds"},
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"}
{

    yang_name = "card-up-time"; yang_parent_name = "fru-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    if (is_presence_container) return true;
    return time_in_seconds.is_set
	|| time_in_nano_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_in_seconds.yfilter)
	|| ydk::is_set(time_in_nano_seconds.yfilter);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_seconds.is_set || is_set(time_in_seconds.yfilter)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());
    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.yfilter)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
        time_in_seconds.value_namespace = name_space;
        time_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
        time_in_nano_seconds.value_namespace = name_space;
        time_in_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-in-seconds")
    {
        time_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds.yfilter = yfilter;
    }
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-in-seconds" || name == "time-in-nano-seconds")
        return true;
    return false;
}

const Enum::YLeaf CardResetReason::reset_unknown {1, "reset-unknown"};
const Enum::YLeaf CardResetReason::power_up {2, "power-up"};
const Enum::YLeaf CardResetReason::parity_error {3, "parity-error"};
const Enum::YLeaf CardResetReason::clear_config_reset {4, "clear-config-reset"};
const Enum::YLeaf CardResetReason::manual_reset {5, "manual-reset"};
const Enum::YLeaf CardResetReason::watch_dog_timeout_reset {6, "watch-dog-timeout-reset"};
const Enum::YLeaf CardResetReason::resource_overflow_reset {7, "resource-overflow-reset"};
const Enum::YLeaf CardResetReason::missing_task_reset {8, "missing-task-reset"};
const Enum::YLeaf CardResetReason::low_voltage_reset {9, "low-voltage-reset"};
const Enum::YLeaf CardResetReason::controller_reset {10, "controller-reset"};
const Enum::YLeaf CardResetReason::system_reset {11, "system-reset"};
const Enum::YLeaf CardResetReason::switchover_reset {12, "switchover-reset"};
const Enum::YLeaf CardResetReason::upgrade_reset {13, "upgrade-reset"};
const Enum::YLeaf CardResetReason::downgrade_reset {14, "downgrade-reset"};
const Enum::YLeaf CardResetReason::cache_error_reset {15, "cache-error-reset"};
const Enum::YLeaf CardResetReason::device_driver_reset {16, "device-driver-reset"};
const Enum::YLeaf CardResetReason::software_exception_reset {17, "software-exception-reset"};
const Enum::YLeaf CardResetReason::restore_config_reset {18, "restore-config-reset"};
const Enum::YLeaf CardResetReason::abort_rev_reset {19, "abort-rev-reset"};
const Enum::YLeaf CardResetReason::burn_boot_reset {20, "burn-boot-reset"};
const Enum::YLeaf CardResetReason::standby_cd_healthier_reset {21, "standby-cd-healthier-reset"};
const Enum::YLeaf CardResetReason::non_native_config_clear_reset {22, "non-native-config-clear-reset"};
const Enum::YLeaf CardResetReason::memory_protection_error_reset {23, "memory-protection-error-reset"};
const Enum::YLeaf CardResetReason::card_reset_reason_max {24, "card-reset-reason-max"};


}
}

