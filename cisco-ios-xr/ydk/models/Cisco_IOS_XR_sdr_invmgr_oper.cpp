
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_sdr_invmgr_oper {

SdrInventory::Racks::Rack::Slot::Card::Attributes::Attributes()
    :
    	card_admin_state{YType::int32, "card-admin-state"},
	 card_state{YType::int32, "card-state"},
	 card_type{YType::int32, "card-type"},
	 config_state{YType::int32, "config-state"},
	 ctype{YType::int32, "ctype"},
	 monitor{YType::int32, "monitor"},
	 pi_slot_number{YType::int32, "pi-slot-number"},
	 power{YType::int32, "power"},
	 shutdown{YType::int32, "shutdown"},
	 vm_state{YType::int32, "vm-state"}
{
    yang_name = "attributes"; yang_parent_name = "card";
}

SdrInventory::Racks::Rack::Slot::Card::Attributes::~Attributes()
{
}

bool SdrInventory::Racks::Rack::Slot::Card::Attributes::has_data() const
{
    return card_admin_state.is_set
	|| card_state.is_set
	|| card_type.is_set
	|| config_state.is_set
	|| ctype.is_set
	|| monitor.is_set
	|| pi_slot_number.is_set
	|| power.is_set
	|| shutdown.is_set
	|| vm_state.is_set;
}

bool SdrInventory::Racks::Rack::Slot::Card::Attributes::has_operation() const
{
    return is_set(operation)
	|| is_set(card_admin_state.operation)
	|| is_set(card_state.operation)
	|| is_set(card_type.operation)
	|| is_set(config_state.operation)
	|| is_set(ctype.operation)
	|| is_set(monitor.operation)
	|| is_set(pi_slot_number.operation)
	|| is_set(power.operation)
	|| is_set(shutdown.operation)
	|| is_set(vm_state.operation);
}

std::string SdrInventory::Racks::Rack::Slot::Card::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath SdrInventory::Racks::Rack::Slot::Card::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_admin_state.is_set || is_set(card_admin_state.operation)) leaf_name_data.push_back(card_admin_state.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.operation)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (card_type.is_set || is_set(card_type.operation)) leaf_name_data.push_back(card_type.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.operation)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (pi_slot_number.is_set || is_set(pi_slot_number.operation)) leaf_name_data.push_back(pi_slot_number.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (vm_state.is_set || is_set(vm_state.operation)) leaf_name_data.push_back(vm_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::Racks::Rack::Slot::Card::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::Racks::Rack::Slot::Card::Attributes::get_children()
{
    return children;
}

void SdrInventory::Racks::Rack::Slot::Card::Attributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "card-admin-state")
    {
        card_admin_state = value;
    }
    if(value_path == "card-state")
    {
        card_state = value;
    }
    if(value_path == "card-type")
    {
        card_type = value;
    }
    if(value_path == "config-state")
    {
        config_state = value;
    }
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
    if(value_path == "pi-slot-number")
    {
        pi_slot_number = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "vm-state")
    {
        vm_state = value;
    }
}

SdrInventory::Racks::Rack::Slot::Card::Card()
    :
    	name{YType::str, "name"}
    	,
    attributes(std::make_unique<SdrInventory::Racks::Rack::Slot::Card::Attributes>())
{
    attributes->parent = this;
    children["attributes"] = attributes.get();

    yang_name = "card"; yang_parent_name = "slot";
}

SdrInventory::Racks::Rack::Slot::Card::~Card()
{
}

bool SdrInventory::Racks::Rack::Slot::Card::has_data() const
{
    return name.is_set
	|| (attributes !=  nullptr && attributes->has_data());
}

bool SdrInventory::Racks::Rack::Slot::Card::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (attributes !=  nullptr && is_set(attributes->operation));
}

std::string SdrInventory::Racks::Rack::Slot::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "card" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath SdrInventory::Racks::Rack::Slot::Card::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::Racks::Rack::Slot::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attributes")
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
        else
        {
            attributes = std::make_unique<SdrInventory::Racks::Rack::Slot::Card::Attributes>();
            attributes->parent = this;
            children["attributes"] = attributes.get();
        }
        return children.at("attributes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::Racks::Rack::Slot::Card::get_children()
{
    if(children.find("attributes") == children.end())
    {
        if(attributes != nullptr)
        {
            children["attributes"] = attributes.get();
        }
    }

    return children;
}

void SdrInventory::Racks::Rack::Slot::Card::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

SdrInventory::Racks::Rack::Slot::Slot()
    :
    	name{YType::str, "name"}
{
    yang_name = "slot"; yang_parent_name = "rack";
}

SdrInventory::Racks::Rack::Slot::~Slot()
{
}

bool SdrInventory::Racks::Rack::Slot::has_data() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool SdrInventory::Racks::Rack::Slot::has_operation() const
{
    for (std::size_t index=0; index<card.size(); index++)
    {
        if(card[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string SdrInventory::Racks::Rack::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath SdrInventory::Racks::Rack::Slot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::Racks::Rack::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "card")
    {
        for(auto const & c : card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SdrInventory::Racks::Rack::Slot::Card>();
        c->parent = this;
        card.push_back(std::move(c));
        children[segment_path] = card.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::Racks::Rack::Slot::get_children()
{
    for (auto const & c : card)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SdrInventory::Racks::Rack::Slot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

SdrInventory::Racks::Rack::Rack()
    :
    	name{YType::str, "name"}
{
    yang_name = "rack"; yang_parent_name = "racks";
}

SdrInventory::Racks::Rack::~Rack()
{
}

bool SdrInventory::Racks::Rack::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool SdrInventory::Racks::Rack::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string SdrInventory::Racks::Rack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rack" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath SdrInventory::Racks::Rack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory/racks/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::Racks::Rack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SdrInventory::Racks::Rack::Slot>();
        c->parent = this;
        slot.push_back(std::move(c));
        children[segment_path] = slot.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::Racks::Rack::get_children()
{
    for (auto const & c : slot)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SdrInventory::Racks::Rack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

SdrInventory::Racks::Racks()
{
    yang_name = "racks"; yang_parent_name = "sdr-inventory";
}

SdrInventory::Racks::~Racks()
{
}

bool SdrInventory::Racks::has_data() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_data())
            return true;
    }
    return false;
}

bool SdrInventory::Racks::has_operation() const
{
    for (std::size_t index=0; index<rack.size(); index++)
    {
        if(rack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SdrInventory::Racks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "racks";

    return path_buffer.str();

}

EntityPath SdrInventory::Racks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::Racks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rack")
    {
        for(auto const & c : rack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SdrInventory::Racks::Rack>();
        c->parent = this;
        rack.push_back(std::move(c));
        children[segment_path] = rack.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::Racks::get_children()
{
    for (auto const & c : rack)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SdrInventory::Racks::set_value(const std::string & value_path, std::string value)
{
}

SdrInventory::SdrInventory()
    :
    racks(std::make_unique<SdrInventory::Racks>())
{
    racks->parent = this;
    children["racks"] = racks.get();

    yang_name = "sdr-inventory"; yang_parent_name = "Cisco-IOS-XR-sdr-invmgr-oper";
}

SdrInventory::~SdrInventory()
{
}

bool SdrInventory::has_data() const
{
    return (racks !=  nullptr && racks->has_data());
}

bool SdrInventory::has_operation() const
{
    return is_set(operation)
	|| (racks !=  nullptr && is_set(racks->operation));
}

std::string SdrInventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory";

    return path_buffer.str();

}

EntityPath SdrInventory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SdrInventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "racks")
    {
        if(racks != nullptr)
        {
            children["racks"] = racks.get();
        }
        else
        {
            racks = std::make_unique<SdrInventory::Racks>();
            racks->parent = this;
            children["racks"] = racks.get();
        }
        return children.at("racks");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SdrInventory::get_children()
{
    if(children.find("racks") == children.end())
    {
        if(racks != nullptr)
        {
            children["racks"] = racks.get();
        }
    }

    return children;
}

void SdrInventory::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SdrInventory::clone_ptr()
{
    return std::make_unique<SdrInventory>();
}


}
}

