
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_asr9k_sc_invmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_asr9k_sc_invmgr_oper {

Inventory::Inventory()
    :
    racks(std::make_shared<Inventory::Racks>())
{
    racks->parent = this;

    yang_name = "inventory"; yang_parent_name = "Cisco-IOS-XR-asr9k-sc-invmgr-oper";
}

Inventory::~Inventory()
{
}

bool Inventory::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool Inventory::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && racks->has_operation());
}

std::string Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory";

    return path_buffer.str();

}

const EntityPath Inventory::get_entity_path(Entity* ancestor) const
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
    if(racks != nullptr)
    {
        children["racks"] = racks;
    }

    return children;
}

void Inventory::set_value(const std::string & value_path, std::string value)
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

Inventory::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "inventory";
}

Inventory::Racks::~Racks()
{
}

bool Inventory::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack>();
        c->parent = this;
        rack.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rack)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Rack()
    :
    number{YType::int32, "number"}
    	,
    slots(std::make_shared<Inventory::Racks::Rack::Slots>())
{
    slots->parent = this;

    yang_name = "rack"; yang_parent_name = "racks";
}

Inventory::Racks::Rack::~Rack()
{
}

bool Inventory::Racks::Rack::has_data() const
{
    return number.is_set
	|| (slots !=  nullptr && slots->has_data());
}

bool Inventory::Racks::Rack::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (slots !=  nullptr && slots->has_operation());
}

std::string Inventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory/racks/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(slots != nullptr)
    {
        children["slots"] = slots;
    }

    return children;
}

void Inventory::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slots()
{
    yang_name = "slots"; yang_parent_name = "rack";
}

Inventory::Racks::Rack::Slots::~Slots()
{
}

bool Inventory::Racks::Rack::Slots::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slots";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slots' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Slot()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>())
	,cards(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards>())
{
    basic_attributes->parent = this;

    cards->parent = this;

    yang_name = "slot"; yang_parent_name = "slots";
}

Inventory::Racks::Rack::Slots::Slot::~Slot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (cards !=  nullptr && cards->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (cards !=  nullptr && cards->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slot' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "cards")
    {
        if(cards == nullptr)
        {
            cards = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards>();
        }
        return cards;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(cards != nullptr)
    {
        children["cards"] = cards;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Cards()
{
    yang_name = "cards"; yang_parent_name = "slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::~Cards()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_data() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::has_operation() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cards";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cards' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card")
    {
        for(auto const & c : card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card>();
        c->parent = this;
        card.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : card)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Card()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>())
	,hw_components(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>())
	,port_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>())
	,sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>())
	,sub_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>())
{
    basic_attributes->parent = this;

    hw_components->parent = this;

    port_slots->parent = this;

    sensors->parent = this;

    sub_slots->parent = this;

    yang_name = "card"; yang_parent_name = "cards";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::~Card()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (hw_components !=  nullptr && hw_components->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (sensors !=  nullptr && sensors->has_data())
	|| (sub_slots !=  nullptr && sub_slots->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (hw_components !=  nullptr && hw_components->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation())
	|| (sub_slots !=  nullptr && sub_slots->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Card' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "hw-components")
    {
        if(hw_components == nullptr)
        {
            hw_components = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents>();
        }
        return hw_components;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors>();
        }
        return sensors;
    }

    if(child_yang_name == "sub-slots")
    {
        if(sub_slots == nullptr)
        {
            sub_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots>();
        }
        return sub_slots;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(hw_components != nullptr)
    {
        children["hw-components"] = hw_components;
    }

    if(port_slots != nullptr)
    {
        children["port-slots"] = port_slots;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    if(sub_slots != nullptr)
    {
        children["sub-slots"] = sub_slots;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlots()
{
    yang_name = "sub-slots"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::~SubSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_data() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::has_operation() const
{
    for (std::size_t index=0; index<sub_slot.size(); index++)
    {
        if(sub_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slots";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubSlots' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-slot")
    {
        for(auto const & c : sub_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot>();
        c->parent = this;
        sub_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::SubSlot()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>())
	,module(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>())
{
    basic_attributes->parent = this;

    module->parent = this;

    yang_name = "sub-slot"; yang_parent_name = "sub-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::~SubSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (module !=  nullptr && module->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (module !=  nullptr && module->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubSlot' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "module")
    {
        if(module == nullptr)
        {
            module = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module>();
        }
        return module;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(module != nullptr)
    {
        children["module"] = module;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Module()
    :
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>())
	,port_slots(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>())
	,sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>())
{
    basic_attributes->parent = this;

    port_slots->parent = this;

    sensors->parent = this;

    yang_name = "module"; yang_parent_name = "sub-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::~Module()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port_slots !=  nullptr && port_slots->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (port_slots !=  nullptr && port_slots->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Module' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "port-slots")
    {
        if(port_slots == nullptr)
        {
            port_slots = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots>();
        }
        return port_slots;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(port_slots != nullptr)
    {
        children["port-slots"] = port_slots;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::Sensor()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlots' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::PortSlot()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>())
	,port(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>())
{
    basic_attributes->parent = this;

    port->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlot' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "port"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "module";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::Module::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sub-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::SubSlots::SubSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponents()
{
    yang_name = "hw-components"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::~HwComponents()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_data() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::has_operation() const
{
    for (std::size_t index=0; index<hw_component.size(); index++)
    {
        if(hw_component[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-components";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponents' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-component")
    {
        for(auto const & c : hw_component)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent>();
        c->parent = this;
        hw_component.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hw_component)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::HwComponent()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>())
	,sensors(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>())
{
    basic_attributes->parent = this;

    sensors->parent = this;

    yang_name = "hw-component"; yang_parent_name = "hw-components";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::~HwComponent()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (sensors !=  nullptr && sensors->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (sensors !=  nullptr && sensors->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-component" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwComponent' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "sensors")
    {
        if(sensors == nullptr)
        {
            sensors = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors>();
        }
        return sensors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(sensors != nullptr)
    {
        children["sensors"] = sensors;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "hw-component";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::Sensor()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "hw-component";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::HwComponents::HwComponent::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensors()
{
    yang_name = "sensors"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::~Sensors()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_data() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::has_operation() const
{
    for (std::size_t index=0; index<sensor.size(); index++)
    {
        if(sensor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensors";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensors' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor")
    {
        for(auto const & c : sensor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor>();
        c->parent = this;
        sensor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sensor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::Sensor()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "sensor"; yang_parent_name = "sensors";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::~Sensor()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sensor' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "sensor";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::Sensors::Sensor::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlots()
{
    yang_name = "port-slots"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::~PortSlots()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_data() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_data())
            return true;
    }
    return false;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::has_operation() const
{
    for (std::size_t index=0; index<port_slot.size(); index++)
    {
        if(port_slot[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slots";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlots' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-slot")
    {
        for(auto const & c : port_slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot>();
        c->parent = this;
        port_slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : port_slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::PortSlot()
    :
    number{YType::int32, "number"}
    	,
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>())
	,port(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>())
{
    basic_attributes->parent = this;

    port->parent = this;

    yang_name = "port-slot"; yang_parent_name = "port-slots";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::~PortSlot()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_data() const
{
    return number.is_set
	|| (basic_attributes !=  nullptr && basic_attributes->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-slot" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortSlot' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "basic-attributes")
    {
        if(basic_attributes == nullptr)
        {
            basic_attributes = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes>();
        }
        return basic_attributes;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::Port()
    :
    basic_attributes(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes>())
{
    basic_attributes->parent = this;

    yang_name = "port"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::~Port()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_data() const
{
    return (basic_attributes !=  nullptr && basic_attributes->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::has_operation() const
{
    return is_set(operation)
	|| (basic_attributes !=  nullptr && basic_attributes->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    if(basic_attributes != nullptr)
    {
        children["basic-attributes"] = basic_attributes;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::Port::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "port-slot";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::PortSlots::PortSlot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "card";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::Cards::Card::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicAttributes()
    :
    basic_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo>())
	,fru_info(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo>())
{
    basic_info->parent = this;

    fru_info->parent = this;

    yang_name = "basic-attributes"; yang_parent_name = "slot";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::~BasicAttributes()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_data() const
{
    return (basic_info !=  nullptr && basic_info->has_data())
	|| (fru_info !=  nullptr && fru_info->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::has_operation() const
{
    return is_set(operation)
	|| (basic_info !=  nullptr && basic_info->has_operation())
	|| (fru_info !=  nullptr && fru_info->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-attributes";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicAttributes' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::set_value(const std::string & value_path, std::string value)
{
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::BasicInfo()
    :
    alias{YType::str, "alias"},
    asset_id_str{YType::str, "asset-id-str"},
    asset_identification{YType::int32, "asset-identification"},
    ceport{YType::boolean, "ceport"},
    chip_hardware_revision{YType::str, "chip-hardware-revision"},
    composite_class_code{YType::int32, "composite-class-code"},
    description{YType::str, "description"},
    environmental_monitor_path{YType::str, "environmental-monitor-path"},
    firmware_revision{YType::str, "firmware-revision"},
    group_flag{YType::boolean, "group-flag"},
    hardware_revision{YType::str, "hardware-revision"},
    is_field_replaceable_unit{YType::boolean, "is-field-replaceable-unit"},
    manufacturer_asset_tags{YType::int32, "manufacturer-asset-tags"},
    manufacturer_name{YType::str, "manufacturer-name"},
    memory_size{YType::int32, "memory-size"},
    model_name{YType::str, "model-name"},
    name{YType::str, "name"},
    new_deviation_number{YType::int32, "new-deviation-number"},
    physical_layer_interface_module_type{YType::int32, "physical-layer-interface-module-type"},
    redundancystate{YType::int32, "redundancystate"},
    serial_number{YType::str, "serial-number"},
    software_revision{YType::str, "software-revision"},
    unique_id{YType::int32, "unique-id"},
    unrecognized_fru{YType::boolean, "unrecognized-fru"},
    vendor_type{YType::str, "vendor-type"},
    xr_scoped{YType::boolean, "xr-scoped"}
{
    yang_name = "basic-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::~BasicInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_data() const
{
    return alias.is_set
	|| asset_id_str.is_set
	|| asset_identification.is_set
	|| ceport.is_set
	|| chip_hardware_revision.is_set
	|| composite_class_code.is_set
	|| description.is_set
	|| environmental_monitor_path.is_set
	|| firmware_revision.is_set
	|| group_flag.is_set
	|| hardware_revision.is_set
	|| is_field_replaceable_unit.is_set
	|| manufacturer_asset_tags.is_set
	|| manufacturer_name.is_set
	|| memory_size.is_set
	|| model_name.is_set
	|| name.is_set
	|| new_deviation_number.is_set
	|| physical_layer_interface_module_type.is_set
	|| redundancystate.is_set
	|| serial_number.is_set
	|| software_revision.is_set
	|| unique_id.is_set
	|| unrecognized_fru.is_set
	|| vendor_type.is_set
	|| xr_scoped.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(alias.operation)
	|| is_set(asset_id_str.operation)
	|| is_set(asset_identification.operation)
	|| is_set(ceport.operation)
	|| is_set(chip_hardware_revision.operation)
	|| is_set(composite_class_code.operation)
	|| is_set(description.operation)
	|| is_set(environmental_monitor_path.operation)
	|| is_set(firmware_revision.operation)
	|| is_set(group_flag.operation)
	|| is_set(hardware_revision.operation)
	|| is_set(is_field_replaceable_unit.operation)
	|| is_set(manufacturer_asset_tags.operation)
	|| is_set(manufacturer_name.operation)
	|| is_set(memory_size.operation)
	|| is_set(model_name.operation)
	|| is_set(name.operation)
	|| is_set(new_deviation_number.operation)
	|| is_set(physical_layer_interface_module_type.operation)
	|| is_set(redundancystate.operation)
	|| is_set(serial_number.operation)
	|| is_set(software_revision.operation)
	|| is_set(unique_id.operation)
	|| is_set(unrecognized_fru.operation)
	|| is_set(vendor_type.operation)
	|| is_set(xr_scoped.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BasicInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias.is_set || is_set(alias.operation)) leaf_name_data.push_back(alias.get_name_leafdata());
    if (asset_id_str.is_set || is_set(asset_id_str.operation)) leaf_name_data.push_back(asset_id_str.get_name_leafdata());
    if (asset_identification.is_set || is_set(asset_identification.operation)) leaf_name_data.push_back(asset_identification.get_name_leafdata());
    if (ceport.is_set || is_set(ceport.operation)) leaf_name_data.push_back(ceport.get_name_leafdata());
    if (chip_hardware_revision.is_set || is_set(chip_hardware_revision.operation)) leaf_name_data.push_back(chip_hardware_revision.get_name_leafdata());
    if (composite_class_code.is_set || is_set(composite_class_code.operation)) leaf_name_data.push_back(composite_class_code.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (environmental_monitor_path.is_set || is_set(environmental_monitor_path.operation)) leaf_name_data.push_back(environmental_monitor_path.get_name_leafdata());
    if (firmware_revision.is_set || is_set(firmware_revision.operation)) leaf_name_data.push_back(firmware_revision.get_name_leafdata());
    if (group_flag.is_set || is_set(group_flag.operation)) leaf_name_data.push_back(group_flag.get_name_leafdata());
    if (hardware_revision.is_set || is_set(hardware_revision.operation)) leaf_name_data.push_back(hardware_revision.get_name_leafdata());
    if (is_field_replaceable_unit.is_set || is_set(is_field_replaceable_unit.operation)) leaf_name_data.push_back(is_field_replaceable_unit.get_name_leafdata());
    if (manufacturer_asset_tags.is_set || is_set(manufacturer_asset_tags.operation)) leaf_name_data.push_back(manufacturer_asset_tags.get_name_leafdata());
    if (manufacturer_name.is_set || is_set(manufacturer_name.operation)) leaf_name_data.push_back(manufacturer_name.get_name_leafdata());
    if (memory_size.is_set || is_set(memory_size.operation)) leaf_name_data.push_back(memory_size.get_name_leafdata());
    if (model_name.is_set || is_set(model_name.operation)) leaf_name_data.push_back(model_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (new_deviation_number.is_set || is_set(new_deviation_number.operation)) leaf_name_data.push_back(new_deviation_number.get_name_leafdata());
    if (physical_layer_interface_module_type.is_set || is_set(physical_layer_interface_module_type.operation)) leaf_name_data.push_back(physical_layer_interface_module_type.get_name_leafdata());
    if (redundancystate.is_set || is_set(redundancystate.operation)) leaf_name_data.push_back(redundancystate.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (software_revision.is_set || is_set(software_revision.operation)) leaf_name_data.push_back(software_revision.get_name_leafdata());
    if (unique_id.is_set || is_set(unique_id.operation)) leaf_name_data.push_back(unique_id.get_name_leafdata());
    if (unrecognized_fru.is_set || is_set(unrecognized_fru.operation)) leaf_name_data.push_back(unrecognized_fru.get_name_leafdata());
    if (vendor_type.is_set || is_set(vendor_type.operation)) leaf_name_data.push_back(vendor_type.get_name_leafdata());
    if (xr_scoped.is_set || is_set(xr_scoped.operation)) leaf_name_data.push_back(xr_scoped.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::BasicInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias")
    {
        alias = value;
    }
    if(value_path == "asset-id-str")
    {
        asset_id_str = value;
    }
    if(value_path == "asset-identification")
    {
        asset_identification = value;
    }
    if(value_path == "ceport")
    {
        ceport = value;
    }
    if(value_path == "chip-hardware-revision")
    {
        chip_hardware_revision = value;
    }
    if(value_path == "composite-class-code")
    {
        composite_class_code = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "environmental-monitor-path")
    {
        environmental_monitor_path = value;
    }
    if(value_path == "firmware-revision")
    {
        firmware_revision = value;
    }
    if(value_path == "group-flag")
    {
        group_flag = value;
    }
    if(value_path == "hardware-revision")
    {
        hardware_revision = value;
    }
    if(value_path == "is-field-replaceable-unit")
    {
        is_field_replaceable_unit = value;
    }
    if(value_path == "manufacturer-asset-tags")
    {
        manufacturer_asset_tags = value;
    }
    if(value_path == "manufacturer-name")
    {
        manufacturer_name = value;
    }
    if(value_path == "memory-size")
    {
        memory_size = value;
    }
    if(value_path == "model-name")
    {
        model_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "new-deviation-number")
    {
        new_deviation_number = value;
    }
    if(value_path == "physical-layer-interface-module-type")
    {
        physical_layer_interface_module_type = value;
    }
    if(value_path == "redundancystate")
    {
        redundancystate = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "software-revision")
    {
        software_revision = value;
    }
    if(value_path == "unique-id")
    {
        unique_id = value;
    }
    if(value_path == "unrecognized-fru")
    {
        unrecognized_fru = value;
    }
    if(value_path == "vendor-type")
    {
        vendor_type = value;
    }
    if(value_path == "xr-scoped")
    {
        xr_scoped = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::FruInfo()
    :
    card_administrative_state{YType::int32, "card-administrative-state"},
    card_monitor_state{YType::int32, "card-monitor-state"},
    card_operational_state{YType::int32, "card-operational-state"},
    card_reset_reason{YType::enumeration, "card-reset-reason"},
    power_administrative_state{YType::int32, "power-administrative-state"},
    power_current_measurement{YType::int32, "power-current-measurement"},
    power_operational_state{YType::int32, "power-operational-state"}
    	,
    card_up_time(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>())
	,last_operational_state_change(std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>())
{
    card_up_time->parent = this;

    last_operational_state_change->parent = this;

    yang_name = "fru-info"; yang_parent_name = "basic-attributes";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::~FruInfo()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_data() const
{
    return card_administrative_state.is_set
	|| card_monitor_state.is_set
	|| card_operational_state.is_set
	|| card_reset_reason.is_set
	|| power_administrative_state.is_set
	|| power_current_measurement.is_set
	|| power_operational_state.is_set
	|| (card_up_time !=  nullptr && card_up_time->has_data())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_data());
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(card_administrative_state.operation)
	|| is_set(card_monitor_state.operation)
	|| is_set(card_operational_state.operation)
	|| is_set(card_reset_reason.operation)
	|| is_set(power_administrative_state.operation)
	|| is_set(power_current_measurement.operation)
	|| is_set(power_operational_state.operation)
	|| (card_up_time !=  nullptr && card_up_time->has_operation())
	|| (last_operational_state_change !=  nullptr && last_operational_state_change->has_operation());
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fru-info";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FruInfo' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_administrative_state.is_set || is_set(card_administrative_state.operation)) leaf_name_data.push_back(card_administrative_state.get_name_leafdata());
    if (card_monitor_state.is_set || is_set(card_monitor_state.operation)) leaf_name_data.push_back(card_monitor_state.get_name_leafdata());
    if (card_operational_state.is_set || is_set(card_operational_state.operation)) leaf_name_data.push_back(card_operational_state.get_name_leafdata());
    if (card_reset_reason.is_set || is_set(card_reset_reason.operation)) leaf_name_data.push_back(card_reset_reason.get_name_leafdata());
    if (power_administrative_state.is_set || is_set(power_administrative_state.operation)) leaf_name_data.push_back(power_administrative_state.get_name_leafdata());
    if (power_current_measurement.is_set || is_set(power_current_measurement.operation)) leaf_name_data.push_back(power_current_measurement.get_name_leafdata());
    if (power_operational_state.is_set || is_set(power_operational_state.operation)) leaf_name_data.push_back(power_operational_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "card-up-time")
    {
        if(card_up_time == nullptr)
        {
            card_up_time = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime>();
        }
        return card_up_time;
    }

    if(child_yang_name == "last-operational-state-change")
    {
        if(last_operational_state_change == nullptr)
        {
            last_operational_state_change = std::make_shared<Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange>();
        }
        return last_operational_state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(card_up_time != nullptr)
    {
        children["card-up-time"] = card_up_time;
    }

    if(last_operational_state_change != nullptr)
    {
        children["last-operational-state-change"] = last_operational_state_change;
    }

    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-administrative-state")
    {
        card_administrative_state = value;
    }
    if(value_path == "card-monitor-state")
    {
        card_monitor_state = value;
    }
    if(value_path == "card-operational-state")
    {
        card_operational_state = value;
    }
    if(value_path == "card-reset-reason")
    {
        card_reset_reason = value;
    }
    if(value_path == "power-administrative-state")
    {
        power_administrative_state = value;
    }
    if(value_path == "power-current-measurement")
    {
        power_current_measurement = value;
    }
    if(value_path == "power-operational-state")
    {
        power_operational_state = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::LastOperationalStateChange()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "last-operational-state-change"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::~LastOperationalStateChange()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-operational-state-change";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastOperationalStateChange' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::LastOperationalStateChange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::CardUpTime()
    :
    time_in_nano_seconds{YType::int32, "time-in-nano-seconds"},
    time_in_seconds{YType::int32, "time-in-seconds"}
{
    yang_name = "card-up-time"; yang_parent_name = "fru-info";
}

Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::~CardUpTime()
{
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_data() const
{
    return time_in_nano_seconds.is_set
	|| time_in_seconds.is_set;
}

bool Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::has_operation() const
{
    return is_set(operation)
	|| is_set(time_in_nano_seconds.operation)
	|| is_set(time_in_seconds.operation);
}

std::string Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card-up-time";

    return path_buffer.str();

}

const EntityPath Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CardUpTime' in Cisco_IOS_XR_asr9k_sc_invmgr_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_in_nano_seconds.is_set || is_set(time_in_nano_seconds.operation)) leaf_name_data.push_back(time_in_nano_seconds.get_name_leafdata());
    if (time_in_seconds.is_set || is_set(time_in_seconds.operation)) leaf_name_data.push_back(time_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Inventory::Racks::Rack::Slots::Slot::BasicAttributes::FruInfo::CardUpTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time-in-nano-seconds")
    {
        time_in_nano_seconds = value;
    }
    if(value_path == "time-in-seconds")
    {
        time_in_seconds = value;
    }
}

const Enum::YLeaf CardResetReasonEnum::reset_unknown {1, "reset-unknown"};
const Enum::YLeaf CardResetReasonEnum::power_up {2, "power-up"};
const Enum::YLeaf CardResetReasonEnum::parity_error {3, "parity-error"};
const Enum::YLeaf CardResetReasonEnum::clear_config_reset {4, "clear-config-reset"};
const Enum::YLeaf CardResetReasonEnum::manual_reset {5, "manual-reset"};
const Enum::YLeaf CardResetReasonEnum::watch_dog_timeout_reset {6, "watch-dog-timeout-reset"};
const Enum::YLeaf CardResetReasonEnum::resource_overflow_reset {7, "resource-overflow-reset"};
const Enum::YLeaf CardResetReasonEnum::missing_task_reset {8, "missing-task-reset"};
const Enum::YLeaf CardResetReasonEnum::low_voltage_reset {9, "low-voltage-reset"};
const Enum::YLeaf CardResetReasonEnum::controller_reset {10, "controller-reset"};
const Enum::YLeaf CardResetReasonEnum::system_reset {11, "system-reset"};
const Enum::YLeaf CardResetReasonEnum::switchover_reset {12, "switchover-reset"};
const Enum::YLeaf CardResetReasonEnum::upgrade_reset {13, "upgrade-reset"};
const Enum::YLeaf CardResetReasonEnum::downgrade_reset {14, "downgrade-reset"};
const Enum::YLeaf CardResetReasonEnum::cache_error_reset {15, "cache-error-reset"};
const Enum::YLeaf CardResetReasonEnum::device_driver_reset {16, "device-driver-reset"};
const Enum::YLeaf CardResetReasonEnum::software_exception_reset {17, "software-exception-reset"};
const Enum::YLeaf CardResetReasonEnum::restore_config_reset {18, "restore-config-reset"};
const Enum::YLeaf CardResetReasonEnum::abort_rev_reset {19, "abort-rev-reset"};
const Enum::YLeaf CardResetReasonEnum::burn_boot_reset {20, "burn-boot-reset"};
const Enum::YLeaf CardResetReasonEnum::standby_cd_healthier_reset {21, "standby-cd-healthier-reset"};
const Enum::YLeaf CardResetReasonEnum::non_native_config_clear_reset {22, "non-native-config-clear-reset"};
const Enum::YLeaf CardResetReasonEnum::memory_protection_error_reset {23, "memory-protection-error-reset"};
const Enum::YLeaf CardResetReasonEnum::card_reset_reason_max {24, "card-reset-reason-max"};


}
}

